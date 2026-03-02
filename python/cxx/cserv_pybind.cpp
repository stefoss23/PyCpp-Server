#include <Python.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <cserv_core/prime.hpp>
#include <cserv_core/errors.hpp>

using namespace cserv_core;

PYBIND11_MODULE(cserv_python, m) {

  m.def("primes", &CreatePrimes);
  m.def("segfault", &segfault);
  
}
