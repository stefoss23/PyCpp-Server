This is a test-project to explore creating a primarily c++-type server using a light Python-layer for the API process.

Basically this is a Python django-server, but the underlying core is c++.

Pybind11 is using a binding between the c++ library files and the Python server.

The code is meant to be fully test-driven, and can be fully run by cmake.

Example of use:

```bash
mkdir build
cmake ..
make
ctest
```
