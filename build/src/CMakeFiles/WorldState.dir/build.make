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
CMAKE_SOURCE_DIR = /home/toor/tp_game_project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/toor/tp_game_project

# Include any dependencies generated for this target.
include build/src/CMakeFiles/WorldState.dir/depend.make

# Include the progress variables for this target.
include build/src/CMakeFiles/WorldState.dir/progress.make

# Include the compile flags for this target's objects.
include build/src/CMakeFiles/WorldState.dir/flags.make

build/src/CMakeFiles/WorldState.dir/WorldState.cpp.o: build/src/CMakeFiles/WorldState.dir/flags.make
build/src/CMakeFiles/WorldState.dir/WorldState.cpp.o: src/WorldState.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/toor/tp_game_project/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object build/src/CMakeFiles/WorldState.dir/WorldState.cpp.o"
	cd /home/toor/tp_game_project/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WorldState.dir/WorldState.cpp.o -c /home/toor/tp_game_project/src/WorldState.cpp

build/src/CMakeFiles/WorldState.dir/WorldState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorldState.dir/WorldState.cpp.i"
	cd /home/toor/tp_game_project/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/toor/tp_game_project/src/WorldState.cpp > CMakeFiles/WorldState.dir/WorldState.cpp.i

build/src/CMakeFiles/WorldState.dir/WorldState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorldState.dir/WorldState.cpp.s"
	cd /home/toor/tp_game_project/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/toor/tp_game_project/src/WorldState.cpp -o CMakeFiles/WorldState.dir/WorldState.cpp.s

build/src/CMakeFiles/WorldState.dir/WorldState.cpp.o.requires:

.PHONY : build/src/CMakeFiles/WorldState.dir/WorldState.cpp.o.requires

build/src/CMakeFiles/WorldState.dir/WorldState.cpp.o.provides: build/src/CMakeFiles/WorldState.dir/WorldState.cpp.o.requires
	$(MAKE) -f build/src/CMakeFiles/WorldState.dir/build.make build/src/CMakeFiles/WorldState.dir/WorldState.cpp.o.provides.build
.PHONY : build/src/CMakeFiles/WorldState.dir/WorldState.cpp.o.provides

build/src/CMakeFiles/WorldState.dir/WorldState.cpp.o.provides.build: build/src/CMakeFiles/WorldState.dir/WorldState.cpp.o


# Object files for target WorldState
WorldState_OBJECTS = \
"CMakeFiles/WorldState.dir/WorldState.cpp.o"

# External object files for target WorldState
WorldState_EXTERNAL_OBJECTS =

lib/libWorldState.a: build/src/CMakeFiles/WorldState.dir/WorldState.cpp.o
lib/libWorldState.a: build/src/CMakeFiles/WorldState.dir/build.make
lib/libWorldState.a: build/src/CMakeFiles/WorldState.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/toor/tp_game_project/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../lib/libWorldState.a"
	cd /home/toor/tp_game_project/build/src && $(CMAKE_COMMAND) -P CMakeFiles/WorldState.dir/cmake_clean_target.cmake
	cd /home/toor/tp_game_project/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/WorldState.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
build/src/CMakeFiles/WorldState.dir/build: lib/libWorldState.a

.PHONY : build/src/CMakeFiles/WorldState.dir/build

build/src/CMakeFiles/WorldState.dir/requires: build/src/CMakeFiles/WorldState.dir/WorldState.cpp.o.requires

.PHONY : build/src/CMakeFiles/WorldState.dir/requires

build/src/CMakeFiles/WorldState.dir/clean:
	cd /home/toor/tp_game_project/build/src && $(CMAKE_COMMAND) -P CMakeFiles/WorldState.dir/cmake_clean.cmake
.PHONY : build/src/CMakeFiles/WorldState.dir/clean

build/src/CMakeFiles/WorldState.dir/depend:
	cd /home/toor/tp_game_project && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/toor/tp_game_project /home/toor/tp_game_project/src /home/toor/tp_game_project /home/toor/tp_game_project/build/src /home/toor/tp_game_project/build/src/CMakeFiles/WorldState.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : build/src/CMakeFiles/WorldState.dir/depend

