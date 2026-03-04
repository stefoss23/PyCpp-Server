import requests
import multiprocessing
import subprocess
import time
import unittest

import os

class ServerTester(unittest.TestCase):

    @classmethod
    def startServer(self):
        print("-------", os.getcwd())
        subprocess.run(['timeout', '5s', 'python3', '../../server/manage.py', 'runserver'])

    @classmethod
    def setUpClass(cls):
        p1 = multiprocessing.Process(target=cls.startServer)
        p1.start()
        time.sleep(2)

    def test1(self):
        url = 'http://127.0.0.1:8000/primes/?num=20'
        response = requests.get(url)
        assert(len(response.json()) == 8)
        


if __name__ == '__main__':
    unittest.main()
