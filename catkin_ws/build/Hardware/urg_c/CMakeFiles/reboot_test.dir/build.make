# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/festino/Miztli_doc_2.0/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/festino/Miztli_doc_2.0/catkin_ws/build

# Include any dependencies generated for this target.
include Hardware/urg_c/CMakeFiles/reboot_test.dir/depend.make

# Include the progress variables for this target.
include Hardware/urg_c/CMakeFiles/reboot_test.dir/progress.make

# Include the compile flags for this target's objects.
include Hardware/urg_c/CMakeFiles/reboot_test.dir/flags.make

Hardware/urg_c/CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o: Hardware/urg_c/CMakeFiles/reboot_test.dir/flags.make
Hardware/urg_c/CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o: /home/festino/Miztli_doc_2.0/catkin_ws/src/Hardware/urg_c/current/samples/reboot_test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/festino/Miztli_doc_2.0/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Hardware/urg_c/CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o"
	cd /home/festino/Miztli_doc_2.0/catkin_ws/build/Hardware/urg_c && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o   -c /home/festino/Miztli_doc_2.0/catkin_ws/src/Hardware/urg_c/current/samples/reboot_test.c

Hardware/urg_c/CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.i"
	cd /home/festino/Miztli_doc_2.0/catkin_ws/build/Hardware/urg_c && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/festino/Miztli_doc_2.0/catkin_ws/src/Hardware/urg_c/current/samples/reboot_test.c > CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.i

Hardware/urg_c/CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.s"
	cd /home/festino/Miztli_doc_2.0/catkin_ws/build/Hardware/urg_c && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/festino/Miztli_doc_2.0/catkin_ws/src/Hardware/urg_c/current/samples/reboot_test.c -o CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.s

Hardware/urg_c/CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o.requires:

.PHONY : Hardware/urg_c/CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o.requires

Hardware/urg_c/CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o.provides: Hardware/urg_c/CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o.requires
	$(MAKE) -f Hardware/urg_c/CMakeFiles/reboot_test.dir/build.make Hardware/urg_c/CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o.provides.build
.PHONY : Hardware/urg_c/CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o.provides

Hardware/urg_c/CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o.provides.build: Hardware/urg_c/CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o


# Object files for target reboot_test
reboot_test_OBJECTS = \
"CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o"

# External object files for target reboot_test
reboot_test_EXTERNAL_OBJECTS =

/home/festino/Miztli_doc_2.0/catkin_ws/devel/lib/urg_c/reboot_test: Hardware/urg_c/CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o
/home/festino/Miztli_doc_2.0/catkin_ws/devel/lib/urg_c/reboot_test: Hardware/urg_c/CMakeFiles/reboot_test.dir/build.make
/home/festino/Miztli_doc_2.0/catkin_ws/devel/lib/urg_c/reboot_test: /home/festino/Miztli_doc_2.0/catkin_ws/devel/lib/libopen_urg_sensor.so
/home/festino/Miztli_doc_2.0/catkin_ws/devel/lib/urg_c/reboot_test: /home/festino/Miztli_doc_2.0/catkin_ws/devel/lib/libliburg_c.so
/home/festino/Miztli_doc_2.0/catkin_ws/devel/lib/urg_c/reboot_test: Hardware/urg_c/CMakeFiles/reboot_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/festino/Miztli_doc_2.0/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable /home/festino/Miztli_doc_2.0/catkin_ws/devel/lib/urg_c/reboot_test"
	cd /home/festino/Miztli_doc_2.0/catkin_ws/build/Hardware/urg_c && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/reboot_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Hardware/urg_c/CMakeFiles/reboot_test.dir/build: /home/festino/Miztli_doc_2.0/catkin_ws/devel/lib/urg_c/reboot_test

.PHONY : Hardware/urg_c/CMakeFiles/reboot_test.dir/build

Hardware/urg_c/CMakeFiles/reboot_test.dir/requires: Hardware/urg_c/CMakeFiles/reboot_test.dir/current/samples/reboot_test.c.o.requires

.PHONY : Hardware/urg_c/CMakeFiles/reboot_test.dir/requires

Hardware/urg_c/CMakeFiles/reboot_test.dir/clean:
	cd /home/festino/Miztli_doc_2.0/catkin_ws/build/Hardware/urg_c && $(CMAKE_COMMAND) -P CMakeFiles/reboot_test.dir/cmake_clean.cmake
.PHONY : Hardware/urg_c/CMakeFiles/reboot_test.dir/clean

Hardware/urg_c/CMakeFiles/reboot_test.dir/depend:
	cd /home/festino/Miztli_doc_2.0/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/festino/Miztli_doc_2.0/catkin_ws/src /home/festino/Miztli_doc_2.0/catkin_ws/src/Hardware/urg_c /home/festino/Miztli_doc_2.0/catkin_ws/build /home/festino/Miztli_doc_2.0/catkin_ws/build/Hardware/urg_c /home/festino/Miztli_doc_2.0/catkin_ws/build/Hardware/urg_c/CMakeFiles/reboot_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Hardware/urg_c/CMakeFiles/reboot_test.dir/depend

