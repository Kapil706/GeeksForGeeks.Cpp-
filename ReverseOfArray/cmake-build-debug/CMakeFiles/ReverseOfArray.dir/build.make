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
CMAKE_SOURCE_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\ReverseOfArray

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\ReverseOfArray\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ReverseOfArray.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ReverseOfArray.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ReverseOfArray.dir/flags.make

CMakeFiles/ReverseOfArray.dir/main.cpp.obj: CMakeFiles/ReverseOfArray.dir/flags.make
CMakeFiles/ReverseOfArray.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\ReverseOfArray\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ReverseOfArray.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ReverseOfArray.dir\main.cpp.obj -c C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\ReverseOfArray\main.cpp

CMakeFiles/ReverseOfArray.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReverseOfArray.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\ReverseOfArray\main.cpp > CMakeFiles\ReverseOfArray.dir\main.cpp.i

CMakeFiles/ReverseOfArray.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReverseOfArray.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\ReverseOfArray\main.cpp -o CMakeFiles\ReverseOfArray.dir\main.cpp.s

# Object files for target ReverseOfArray
ReverseOfArray_OBJECTS = \
"CMakeFiles/ReverseOfArray.dir/main.cpp.obj"

# External object files for target ReverseOfArray
ReverseOfArray_EXTERNAL_OBJECTS =

ReverseOfArray.exe: CMakeFiles/ReverseOfArray.dir/main.cpp.obj
ReverseOfArray.exe: CMakeFiles/ReverseOfArray.dir/build.make
ReverseOfArray.exe: CMakeFiles/ReverseOfArray.dir/linklibs.rsp
ReverseOfArray.exe: CMakeFiles/ReverseOfArray.dir/objects1.rsp
ReverseOfArray.exe: CMakeFiles/ReverseOfArray.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\ReverseOfArray\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ReverseOfArray.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ReverseOfArray.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ReverseOfArray.dir/build: ReverseOfArray.exe

.PHONY : CMakeFiles/ReverseOfArray.dir/build

CMakeFiles/ReverseOfArray.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ReverseOfArray.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ReverseOfArray.dir/clean

CMakeFiles/ReverseOfArray.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\ReverseOfArray C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\ReverseOfArray C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\ReverseOfArray\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\ReverseOfArray\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\ReverseOfArray\cmake-build-debug\CMakeFiles\ReverseOfArray.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ReverseOfArray.dir/depend

