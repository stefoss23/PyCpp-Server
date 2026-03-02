#pybind11
find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})
add_subdirectory( pybind11 )
set(PYBIND11_PYTHON_VERSION 3.6)

add_subdirectory(cxx)



