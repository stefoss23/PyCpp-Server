# PCL-Server
Python-C++-Linux-server

This is a test-project to explore creating a primarily C++-type server using a light Python-layer for the API process.
The reason for choosing C++ is its potential for faster and efficient data processing.
However, C++ has little framework support regarding server development.

Therefore, the idea is to use Python (Django in this case) for the basic server operations. The python server then taps into a C++ library for the data processing.

Pybind11 is using a binding between the c++ library files and the Python server.

The code is meant to be fully test-driven, and can be fully run by cmake.

Example of use (Linux only):

```bash
git submodule init
git submodule update
mkdir build
cd build
cmake ..
make
ctest

Test project /home/stf/tutorial/cserv/build
    Start 1: test_prime
1/2 Test #1: test_prime .......................   Passed    0.00 sec
    Start 2: python_test_server
2/2 Test #2: python_test_server ...............   Passed    5.22 sec

cd ../server
python3 manage.py runserver
```

Example URL: http://127.0.0.1:8000/primes/?num=20
Will return prime numbers 2 to 20. The origin is the function *src/prime.cpp*.


