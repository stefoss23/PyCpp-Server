foreach (test   test_one
                test_prime
    )
    add_executable(${test} ${test}.cpp)
    target_link_libraries(${test} cserv_core)
    if (MEM_CHECK)
      SET(test_name valgrind_${test})
      add_test(NAME ${test_name} COMMAND valgrind --leak-check=yes --error-exitcode=1 ./${test})
    else()
      add_test(NAME ${test} COMMAND ${test})
    endif()
endforeach ()
