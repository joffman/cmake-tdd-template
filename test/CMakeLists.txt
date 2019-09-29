message("Processing test directory...")

find_package(Catch2 REQUIRED)

set(TEST_FILES
	say_hello.cpp
)

# Create test executable and link it.
add_executable(my_test main.cpp ${TEST_FILES})
set_target_properties(my_test
	PROPERTIES
		CXX_STANDARD 14
		CXX_STANDARD_REQUIRED ON
	)
target_link_libraries(my_test PRIVATE mylib)
target_link_libraries(my_test PRIVATE Catch2::Catch2)
