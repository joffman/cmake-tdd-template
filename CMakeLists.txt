cmake_minimum_required(VERSION 3.5.1)

project(MyProject LANGUAGES C CXX)

# Policies and global options
cmake_policy(SET CMP0063 NEW)

# We don't support MSVC.
if(MSVC)
	message(FATAL_ERROR "MSVC is not supported!")
else()
	add_compile_options(-W -Wall -Werror -Wpedantic
		-pedantic-errors -Wextra -Wno-maybe-uninitialized)
endif()

# Add subdirectories.
set(SUBDIRECTORIES thirdparty src test)
foreach(SUBDIR ${SUBDIRECTORIES})
	add_subdirectory(${SUBDIR})
endforeach()
