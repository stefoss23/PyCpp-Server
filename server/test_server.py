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
        subprocess.run(['timeout', '20s', 'python3', '../../server/manage.py', 'runserver'])

    def startProcess(self):
        p1 = multiprocessing.Process(target=startServer)
        p1.start()
        time.sleep(5)

    @classmethod
    def setUpClass(cls):
        p1 = multiprocessing.Process(target=cls.startServer)
        p1.start()
        time.sleep(5)

    def test1(self):
        pass


if __name__ == '__main__':
    unittest.main()
