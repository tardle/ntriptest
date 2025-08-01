# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tardle/ntriptest/src/mavlink

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tardle/ntriptest/build/mavlink

# Utility rule file for generate_c_headers.

# Include any custom commands dependencies for this target.
include CMakeFiles/generate_c_headers.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/generate_c_headers.dir/progress.make

CMakeFiles/generate_c_headers: include/mavlink/common/mavlink.h

include/mavlink/common/mavlink.h: /home/tardle/ntriptest/src/mavlink/message_definitions/v1.0/common.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tardle/ntriptest/build/mavlink/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating C headers"
	cd /home/tardle/ntriptest/src/mavlink && /usr/bin/python3.10 -m pip install -r pymavlink/requirements.txt --upgrade -t /home/tardle/ntriptest/build/mavlink/pip-dependencies/
	cd /home/tardle/ntriptest/src/mavlink && /usr/bin/cmake -E env PYTHONPATH=/home/tardle/ntriptest/build/mavlink/pip-dependencies/ /usr/bin/python3.10 -m pymavlink.tools.mavgen --lang=C --wire-protocol=2.0 --output /home/tardle/ntriptest/build/mavlink/include/mavlink/ message_definitions/v1.0/common.xml

generate_c_headers: CMakeFiles/generate_c_headers
generate_c_headers: include/mavlink/common/mavlink.h
generate_c_headers: CMakeFiles/generate_c_headers.dir/build.make
.PHONY : generate_c_headers

# Rule to build all files generated by this target.
CMakeFiles/generate_c_headers.dir/build: generate_c_headers
.PHONY : CMakeFiles/generate_c_headers.dir/build

CMakeFiles/generate_c_headers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/generate_c_headers.dir/cmake_clean.cmake
.PHONY : CMakeFiles/generate_c_headers.dir/clean

CMakeFiles/generate_c_headers.dir/depend:
	cd /home/tardle/ntriptest/build/mavlink && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tardle/ntriptest/src/mavlink /home/tardle/ntriptest/src/mavlink /home/tardle/ntriptest/build/mavlink /home/tardle/ntriptest/build/mavlink /home/tardle/ntriptest/build/mavlink/CMakeFiles/generate_c_headers.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/generate_c_headers.dir/depend

