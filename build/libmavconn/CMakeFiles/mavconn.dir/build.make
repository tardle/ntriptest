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
CMAKE_SOURCE_DIR = /home/tardle/ntriptest/src/mavros/libmavconn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tardle/ntriptest/build/libmavconn

# Include any dependencies generated for this target.
include CMakeFiles/mavconn.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/mavconn.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/mavconn.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mavconn.dir/flags.make

CMakeFiles/mavconn.dir/generated/src/mavlink_helpers.cpp.o: CMakeFiles/mavconn.dir/flags.make
CMakeFiles/mavconn.dir/generated/src/mavlink_helpers.cpp.o: generated/src/mavlink_helpers.cpp
CMakeFiles/mavconn.dir/generated/src/mavlink_helpers.cpp.o: CMakeFiles/mavconn.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tardle/ntriptest/build/libmavconn/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mavconn.dir/generated/src/mavlink_helpers.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mavconn.dir/generated/src/mavlink_helpers.cpp.o -MF CMakeFiles/mavconn.dir/generated/src/mavlink_helpers.cpp.o.d -o CMakeFiles/mavconn.dir/generated/src/mavlink_helpers.cpp.o -c /home/tardle/ntriptest/build/libmavconn/generated/src/mavlink_helpers.cpp

CMakeFiles/mavconn.dir/generated/src/mavlink_helpers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mavconn.dir/generated/src/mavlink_helpers.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tardle/ntriptest/build/libmavconn/generated/src/mavlink_helpers.cpp > CMakeFiles/mavconn.dir/generated/src/mavlink_helpers.cpp.i

CMakeFiles/mavconn.dir/generated/src/mavlink_helpers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mavconn.dir/generated/src/mavlink_helpers.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tardle/ntriptest/build/libmavconn/generated/src/mavlink_helpers.cpp -o CMakeFiles/mavconn.dir/generated/src/mavlink_helpers.cpp.s

CMakeFiles/mavconn.dir/src/interface.cpp.o: CMakeFiles/mavconn.dir/flags.make
CMakeFiles/mavconn.dir/src/interface.cpp.o: /home/tardle/ntriptest/src/mavros/libmavconn/src/interface.cpp
CMakeFiles/mavconn.dir/src/interface.cpp.o: CMakeFiles/mavconn.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tardle/ntriptest/build/libmavconn/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/mavconn.dir/src/interface.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mavconn.dir/src/interface.cpp.o -MF CMakeFiles/mavconn.dir/src/interface.cpp.o.d -o CMakeFiles/mavconn.dir/src/interface.cpp.o -c /home/tardle/ntriptest/src/mavros/libmavconn/src/interface.cpp

CMakeFiles/mavconn.dir/src/interface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mavconn.dir/src/interface.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tardle/ntriptest/src/mavros/libmavconn/src/interface.cpp > CMakeFiles/mavconn.dir/src/interface.cpp.i

CMakeFiles/mavconn.dir/src/interface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mavconn.dir/src/interface.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tardle/ntriptest/src/mavros/libmavconn/src/interface.cpp -o CMakeFiles/mavconn.dir/src/interface.cpp.s

CMakeFiles/mavconn.dir/src/serial.cpp.o: CMakeFiles/mavconn.dir/flags.make
CMakeFiles/mavconn.dir/src/serial.cpp.o: /home/tardle/ntriptest/src/mavros/libmavconn/src/serial.cpp
CMakeFiles/mavconn.dir/src/serial.cpp.o: CMakeFiles/mavconn.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tardle/ntriptest/build/libmavconn/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/mavconn.dir/src/serial.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mavconn.dir/src/serial.cpp.o -MF CMakeFiles/mavconn.dir/src/serial.cpp.o.d -o CMakeFiles/mavconn.dir/src/serial.cpp.o -c /home/tardle/ntriptest/src/mavros/libmavconn/src/serial.cpp

CMakeFiles/mavconn.dir/src/serial.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mavconn.dir/src/serial.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tardle/ntriptest/src/mavros/libmavconn/src/serial.cpp > CMakeFiles/mavconn.dir/src/serial.cpp.i

CMakeFiles/mavconn.dir/src/serial.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mavconn.dir/src/serial.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tardle/ntriptest/src/mavros/libmavconn/src/serial.cpp -o CMakeFiles/mavconn.dir/src/serial.cpp.s

CMakeFiles/mavconn.dir/src/tcp.cpp.o: CMakeFiles/mavconn.dir/flags.make
CMakeFiles/mavconn.dir/src/tcp.cpp.o: /home/tardle/ntriptest/src/mavros/libmavconn/src/tcp.cpp
CMakeFiles/mavconn.dir/src/tcp.cpp.o: CMakeFiles/mavconn.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tardle/ntriptest/build/libmavconn/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/mavconn.dir/src/tcp.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mavconn.dir/src/tcp.cpp.o -MF CMakeFiles/mavconn.dir/src/tcp.cpp.o.d -o CMakeFiles/mavconn.dir/src/tcp.cpp.o -c /home/tardle/ntriptest/src/mavros/libmavconn/src/tcp.cpp

CMakeFiles/mavconn.dir/src/tcp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mavconn.dir/src/tcp.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tardle/ntriptest/src/mavros/libmavconn/src/tcp.cpp > CMakeFiles/mavconn.dir/src/tcp.cpp.i

CMakeFiles/mavconn.dir/src/tcp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mavconn.dir/src/tcp.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tardle/ntriptest/src/mavros/libmavconn/src/tcp.cpp -o CMakeFiles/mavconn.dir/src/tcp.cpp.s

CMakeFiles/mavconn.dir/src/udp.cpp.o: CMakeFiles/mavconn.dir/flags.make
CMakeFiles/mavconn.dir/src/udp.cpp.o: /home/tardle/ntriptest/src/mavros/libmavconn/src/udp.cpp
CMakeFiles/mavconn.dir/src/udp.cpp.o: CMakeFiles/mavconn.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tardle/ntriptest/build/libmavconn/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/mavconn.dir/src/udp.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mavconn.dir/src/udp.cpp.o -MF CMakeFiles/mavconn.dir/src/udp.cpp.o.d -o CMakeFiles/mavconn.dir/src/udp.cpp.o -c /home/tardle/ntriptest/src/mavros/libmavconn/src/udp.cpp

CMakeFiles/mavconn.dir/src/udp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mavconn.dir/src/udp.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tardle/ntriptest/src/mavros/libmavconn/src/udp.cpp > CMakeFiles/mavconn.dir/src/udp.cpp.i

CMakeFiles/mavconn.dir/src/udp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mavconn.dir/src/udp.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tardle/ntriptest/src/mavros/libmavconn/src/udp.cpp -o CMakeFiles/mavconn.dir/src/udp.cpp.s

# Object files for target mavconn
mavconn_OBJECTS = \
"CMakeFiles/mavconn.dir/generated/src/mavlink_helpers.cpp.o" \
"CMakeFiles/mavconn.dir/src/interface.cpp.o" \
"CMakeFiles/mavconn.dir/src/serial.cpp.o" \
"CMakeFiles/mavconn.dir/src/tcp.cpp.o" \
"CMakeFiles/mavconn.dir/src/udp.cpp.o"

# External object files for target mavconn
mavconn_EXTERNAL_OBJECTS =

libmavconn.so: CMakeFiles/mavconn.dir/generated/src/mavlink_helpers.cpp.o
libmavconn.so: CMakeFiles/mavconn.dir/src/interface.cpp.o
libmavconn.so: CMakeFiles/mavconn.dir/src/serial.cpp.o
libmavconn.so: CMakeFiles/mavconn.dir/src/tcp.cpp.o
libmavconn.so: CMakeFiles/mavconn.dir/src/udp.cpp.o
libmavconn.so: CMakeFiles/mavconn.dir/build.make
libmavconn.so: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.1.0
libmavconn.so: CMakeFiles/mavconn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tardle/ntriptest/build/libmavconn/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library libmavconn.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mavconn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mavconn.dir/build: libmavconn.so
.PHONY : CMakeFiles/mavconn.dir/build

CMakeFiles/mavconn.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mavconn.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mavconn.dir/clean

CMakeFiles/mavconn.dir/depend:
	cd /home/tardle/ntriptest/build/libmavconn && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tardle/ntriptest/src/mavros/libmavconn /home/tardle/ntriptest/src/mavros/libmavconn /home/tardle/ntriptest/build/libmavconn /home/tardle/ntriptest/build/libmavconn /home/tardle/ntriptest/build/libmavconn/CMakeFiles/mavconn.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mavconn.dir/depend

