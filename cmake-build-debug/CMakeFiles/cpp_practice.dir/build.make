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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/imago/Documents/University courses/assingments/cpp_practice"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/imago/Documents/University courses/assingments/cpp_practice/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/cpp_practice.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpp_practice.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpp_practice.dir/flags.make

CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.o: CMakeFiles/cpp_practice.dir/flags.make
CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.o: ../base_class_pointer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/imago/Documents/University courses/assingments/cpp_practice/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.o -c "/Users/imago/Documents/University courses/assingments/cpp_practice/base_class_pointer.cpp"

CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/imago/Documents/University courses/assingments/cpp_practice/base_class_pointer.cpp" > CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.i

CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/imago/Documents/University courses/assingments/cpp_practice/base_class_pointer.cpp" -o CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.s

CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.o.requires:

.PHONY : CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.o.requires

CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.o.provides: CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.o.requires
	$(MAKE) -f CMakeFiles/cpp_practice.dir/build.make CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.o.provides.build
.PHONY : CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.o.provides

CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.o.provides.build: CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.o


# Object files for target cpp_practice
cpp_practice_OBJECTS = \
"CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.o"

# External object files for target cpp_practice
cpp_practice_EXTERNAL_OBJECTS =

cpp_practice: CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.o
cpp_practice: CMakeFiles/cpp_practice.dir/build.make
cpp_practice: CMakeFiles/cpp_practice.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/imago/Documents/University courses/assingments/cpp_practice/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cpp_practice"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp_practice.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpp_practice.dir/build: cpp_practice

.PHONY : CMakeFiles/cpp_practice.dir/build

CMakeFiles/cpp_practice.dir/requires: CMakeFiles/cpp_practice.dir/base_class_pointer.cpp.o.requires

.PHONY : CMakeFiles/cpp_practice.dir/requires

CMakeFiles/cpp_practice.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpp_practice.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpp_practice.dir/clean

CMakeFiles/cpp_practice.dir/depend:
	cd "/Users/imago/Documents/University courses/assingments/cpp_practice/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/imago/Documents/University courses/assingments/cpp_practice" "/Users/imago/Documents/University courses/assingments/cpp_practice" "/Users/imago/Documents/University courses/assingments/cpp_practice/cmake-build-debug" "/Users/imago/Documents/University courses/assingments/cpp_practice/cmake-build-debug" "/Users/imago/Documents/University courses/assingments/cpp_practice/cmake-build-debug/CMakeFiles/cpp_practice.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/cpp_practice.dir/depend

