# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Clion\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Clion\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\PushAllZerostoEndofArray

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\PushAllZerostoEndofArray\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PushAllZerostoEndofArray.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PushAllZerostoEndofArray.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PushAllZerostoEndofArray.dir/flags.make

CMakeFiles/PushAllZerostoEndofArray.dir/main.cpp.obj: CMakeFiles/PushAllZerostoEndofArray.dir/flags.make
CMakeFiles/PushAllZerostoEndofArray.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\PushAllZerostoEndofArray\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PushAllZerostoEndofArray.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\PushAllZerostoEndofArray.dir\main.cpp.obj -c C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\PushAllZerostoEndofArray\main.cpp

CMakeFiles/PushAllZerostoEndofArray.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PushAllZerostoEndofArray.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\PushAllZerostoEndofArray\main.cpp > CMakeFiles\PushAllZerostoEndofArray.dir\main.cpp.i

CMakeFiles/PushAllZerostoEndofArray.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PushAllZerostoEndofArray.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\PushAllZerostoEndofArray\main.cpp -o CMakeFiles\PushAllZerostoEndofArray.dir\main.cpp.s

# Object files for target PushAllZerostoEndofArray
PushAllZerostoEndofArray_OBJECTS = \
"CMakeFiles/PushAllZerostoEndofArray.dir/main.cpp.obj"

# External object files for target PushAllZerostoEndofArray
PushAllZerostoEndofArray_EXTERNAL_OBJECTS =

PushAllZerostoEndofArray.exe: CMakeFiles/PushAllZerostoEndofArray.dir/main.cpp.obj
PushAllZerostoEndofArray.exe: CMakeFiles/PushAllZerostoEndofArray.dir/build.make
PushAllZerostoEndofArray.exe: CMakeFiles/PushAllZerostoEndofArray.dir/linklibs.rsp
PushAllZerostoEndofArray.exe: CMakeFiles/PushAllZerostoEndofArray.dir/objects1.rsp
PushAllZerostoEndofArray.exe: CMakeFiles/PushAllZerostoEndofArray.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\PushAllZerostoEndofArray\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PushAllZerostoEndofArray.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PushAllZerostoEndofArray.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PushAllZerostoEndofArray.dir/build: PushAllZerostoEndofArray.exe

.PHONY : CMakeFiles/PushAllZerostoEndofArray.dir/build

CMakeFiles/PushAllZerostoEndofArray.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PushAllZerostoEndofArray.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PushAllZerostoEndofArray.dir/clean

CMakeFiles/PushAllZerostoEndofArray.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\PushAllZerostoEndofArray C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\PushAllZerostoEndofArray C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\PushAllZerostoEndofArray\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\PushAllZerostoEndofArray\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\PushAllZerostoEndofArray\cmake-build-debug\CMakeFiles\PushAllZerostoEndofArray.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PushAllZerostoEndofArray.dir/depend

