# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Sh1l0/Desktop/2019/c++/BITSTRING

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Sh1l0/Desktop/2019/c++/BITSTRING/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BITSTRING.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BITSTRING.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BITSTRING.dir/flags.make

CMakeFiles/BITSTRING.dir/main.cpp.o: CMakeFiles/BITSTRING.dir/flags.make
CMakeFiles/BITSTRING.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Sh1l0/Desktop/2019/c++/BITSTRING/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BITSTRING.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BITSTRING.dir/main.cpp.o -c /Users/Sh1l0/Desktop/2019/c++/BITSTRING/main.cpp

CMakeFiles/BITSTRING.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BITSTRING.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Sh1l0/Desktop/2019/c++/BITSTRING/main.cpp > CMakeFiles/BITSTRING.dir/main.cpp.i

CMakeFiles/BITSTRING.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BITSTRING.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Sh1l0/Desktop/2019/c++/BITSTRING/main.cpp -o CMakeFiles/BITSTRING.dir/main.cpp.s

CMakeFiles/BITSTRING.dir/BitString.cpp.o: CMakeFiles/BITSTRING.dir/flags.make
CMakeFiles/BITSTRING.dir/BitString.cpp.o: ../BitString.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Sh1l0/Desktop/2019/c++/BITSTRING/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/BITSTRING.dir/BitString.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BITSTRING.dir/BitString.cpp.o -c /Users/Sh1l0/Desktop/2019/c++/BITSTRING/BitString.cpp

CMakeFiles/BITSTRING.dir/BitString.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BITSTRING.dir/BitString.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Sh1l0/Desktop/2019/c++/BITSTRING/BitString.cpp > CMakeFiles/BITSTRING.dir/BitString.cpp.i

CMakeFiles/BITSTRING.dir/BitString.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BITSTRING.dir/BitString.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Sh1l0/Desktop/2019/c++/BITSTRING/BitString.cpp -o CMakeFiles/BITSTRING.dir/BitString.cpp.s

# Object files for target BITSTRING
BITSTRING_OBJECTS = \
"CMakeFiles/BITSTRING.dir/main.cpp.o" \
"CMakeFiles/BITSTRING.dir/BitString.cpp.o"

# External object files for target BITSTRING
BITSTRING_EXTERNAL_OBJECTS =

BITSTRING: CMakeFiles/BITSTRING.dir/main.cpp.o
BITSTRING: CMakeFiles/BITSTRING.dir/BitString.cpp.o
BITSTRING: CMakeFiles/BITSTRING.dir/build.make
BITSTRING: CMakeFiles/BITSTRING.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Sh1l0/Desktop/2019/c++/BITSTRING/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable BITSTRING"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BITSTRING.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BITSTRING.dir/build: BITSTRING

.PHONY : CMakeFiles/BITSTRING.dir/build

CMakeFiles/BITSTRING.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BITSTRING.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BITSTRING.dir/clean

CMakeFiles/BITSTRING.dir/depend:
	cd /Users/Sh1l0/Desktop/2019/c++/BITSTRING/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Sh1l0/Desktop/2019/c++/BITSTRING /Users/Sh1l0/Desktop/2019/c++/BITSTRING /Users/Sh1l0/Desktop/2019/c++/BITSTRING/cmake-build-debug /Users/Sh1l0/Desktop/2019/c++/BITSTRING/cmake-build-debug /Users/Sh1l0/Desktop/2019/c++/BITSTRING/cmake-build-debug/CMakeFiles/BITSTRING.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BITSTRING.dir/depend
