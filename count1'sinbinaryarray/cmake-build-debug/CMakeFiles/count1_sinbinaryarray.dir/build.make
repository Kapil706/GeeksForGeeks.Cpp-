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
CMAKE_SOURCE_DIR = "C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\count1'sinbinaryarray"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\count1'sinbinaryarray\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/count1_sinbinaryarray.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/count1_sinbinaryarray.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/count1_sinbinaryarray.dir/flags.make

CMakeFiles/count1_sinbinaryarray.dir/main.cpp.obj: CMakeFiles/count1_sinbinaryarray.dir/flags.make
CMakeFiles/count1_sinbinaryarray.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\count1'sinbinaryarray\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/count1_sinbinaryarray.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\count1_sinbinaryarray.dir\main.cpp.obj -c "C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\count1'sinbinaryarray\main.cpp"

CMakeFiles/count1_sinbinaryarray.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/count1_sinbinaryarray.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\count1'sinbinaryarray\main.cpp" > CMakeFiles\count1_sinbinaryarray.dir\main.cpp.i

CMakeFiles/count1_sinbinaryarray.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/count1_sinbinaryarray.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\count1'sinbinaryarray\main.cpp" -o CMakeFiles\count1_sinbinaryarray.dir\main.cpp.s

# Object files for target count1_sinbinaryarray
count1_sinbinaryarray_OBJECTS = \
"CMakeFiles/count1_sinbinaryarray.dir/main.cpp.obj"

# External object files for target count1_sinbinaryarray
count1_sinbinaryarray_EXTERNAL_OBJECTS =

count1_sinbinaryarray.exe: CMakeFiles/count1_sinbinaryarray.dir/main.cpp.obj
count1_sinbinaryarray.exe: CMakeFiles/count1_sinbinaryarray.dir/build.make
count1_sinbinaryarray.exe: CMakeFiles/count1_sinbinaryarray.dir/linklibs.rsp
count1_sinbinaryarray.exe: CMakeFiles/count1_sinbinaryarray.dir/objects1.rsp
count1_sinbinaryarray.exe: CMakeFiles/count1_sinbinaryarray.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\count1'sinbinaryarray\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable count1_sinbinaryarray.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\count1_sinbinaryarray.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/count1_sinbinaryarray.dir/build: count1_sinbinaryarray.exe

.PHONY : CMakeFiles/count1_sinbinaryarray.dir/build

CMakeFiles/count1_sinbinaryarray.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\count1_sinbinaryarray.dir\cmake_clean.cmake
.PHONY : CMakeFiles/count1_sinbinaryarray.dir/clean

CMakeFiles/count1_sinbinaryarray.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\count1'sinbinaryarray" "C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\count1'sinbinaryarray" "C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\count1'sinbinaryarray\cmake-build-debug" "C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\count1'sinbinaryarray\cmake-build-debug" "C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\count1'sinbinaryarray\cmake-build-debug\CMakeFiles\count1_sinbinaryarray.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/count1_sinbinaryarray.dir/depend

