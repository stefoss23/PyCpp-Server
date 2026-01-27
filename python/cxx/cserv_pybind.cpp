#include <math.h>
#include <iostream>
#include <exception>
#include <complex>

#include <Python.h>
#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>



using namespace std;
/*using namespace radsim;
using namespace std::complex_literals;*/


int func() {
   return 5;
}


PYBIND11_MODULE(cserv_python, m) {

  m.def("func", &func);

}
