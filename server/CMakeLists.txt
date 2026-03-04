foreach (test  test_server_call
        )
        add_test(NAME python_${test} COMMAND python3 ${SERVER_DIR}/${test}.py)
endforeach()

add_subdirectory(cserv_api)
