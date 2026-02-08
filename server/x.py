import requests
import multiprocessing
import subprocess
import time

def serv():
   subprocess.run(['timeout', '20s', 'python3', 'manage.py', 'runserver'])
   print("--- Server finished")
   
   
p1 = multiprocessing.Process(target=serv)

p1.start()

time.sleep(5)

print("--- Server has started")

url = 'http://127.0.0.1:8000/primes/?num=20'

response = requests.get(url)

print(response.json())

p1.join()

print("--- Process finished")
