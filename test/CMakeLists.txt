# required for igloo:
add_definitions(-Wno-deprecated-declarations)
include_directories(igloo)

set(TEST_SRC_FILES
    test_runner.cpp
    Ehdr.cpp
    )

add_executable(test_runner ${TEST_SRC_FILES})
target_link_libraries(test_runner elfparser  ${LIBS})
add_custom_command(TARGET test_runner PRE_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                   ${CMAKE_CURRENT_SOURCE_DIR}/resources $<TARGET_FILE_DIR:test_runner>/resources)

add_custom_command(TARGET test_runner POST_BUILD
                   WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/test
                   COMMAND ./test_runner)
