foreach (test  test_server
        )
        add_test(NAME python_${test} COMMAND python3 ${SERVER_DIR}/${test}.py)
endforeach()
