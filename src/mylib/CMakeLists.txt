message("Processing mylib directory...")

# Create library.
add_library(mylib
	say_hello.cpp
	)
set_target_properties(mylib
	PROPERTIES
		CXX_STANDARD 14
		CXX_STANDARD_REQUIRED ON
	)
target_include_directories(mylib
	PUBLIC
		"${PROJECT_SOURCE_DIR}/src"
	)
