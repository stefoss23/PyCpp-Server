#include <iostream>

#include <Python.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <cserv_core/prime.hpp>
#include <cserv_core/errors.hpp>

using namespace cserv_core;
using namespace std;

PYBIND11_MODULE(cserv_python, m) {

  m.def("get_primes", &CreatePrimes);
  m.def("segfault", &segfault);
  m.def("ex", &except);
  m.def("mem_loss", &mem_loss);
  
}
