message("Processing src directory...")

# Add subdirectories.
set(SUBDIRECTORIES mylib)
foreach(SUBDIR ${SUBDIRECTORIES})
	add_subdirectory(${SUBDIR})
endforeach()

# Create executable.
add_executable(my_executable main.cpp)
set_target_properties(my_executable
	PROPERTIES
		CXX_STANDARD 14
		CXX_STANDARD_REQUIRED ON
	)
target_link_libraries(my_executable PRIVATE mylib)
