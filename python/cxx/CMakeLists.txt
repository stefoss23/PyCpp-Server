


pybind11_add_module(cserv_python cserv_pybind.cpp)
set_target_properties(cserv_python
        PROPERTIES PREFIX ""
               SUFFIX ".so"
        )
target_link_libraries(cserv_python PRIVATE cserv_core )

