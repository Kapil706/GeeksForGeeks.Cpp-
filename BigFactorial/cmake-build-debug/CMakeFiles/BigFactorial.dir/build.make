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
CMAKE_SOURCE_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\BigFactorial

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\BigFactorial\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BigFactorial.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BigFactorial.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BigFactorial.dir/flags.make

CMakeFiles/BigFactorial.dir/main.cpp.obj: CMakeFiles/BigFactorial.dir/flags.make
CMakeFiles/BigFactorial.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\BigFactorial\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BigFactorial.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\BigFactorial.dir\main.cpp.obj -c C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\BigFactorial\main.cpp

CMakeFiles/BigFactorial.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BigFactorial.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\BigFactorial\main.cpp > CMakeFiles\BigFactorial.dir\main.cpp.i

CMakeFiles/BigFactorial.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BigFactorial.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\BigFactorial\main.cpp -o CMakeFiles\BigFactorial.dir\main.cpp.s

# Object files for target BigFactorial
BigFactorial_OBJECTS = \
"CMakeFiles/BigFactorial.dir/main.cpp.obj"

# External object files for target BigFactorial
BigFactorial_EXTERNAL_OBJECTS =

BigFactorial.exe: CMakeFiles/BigFactorial.dir/main.cpp.obj
BigFactorial.exe: CMakeFiles/BigFactorial.dir/build.make
BigFactorial.exe: CMakeFiles/BigFactorial.dir/linklibs.rsp
BigFactorial.exe: CMakeFiles/BigFactorial.dir/objects1.rsp
BigFactorial.exe: CMakeFiles/BigFactorial.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\BigFactorial\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BigFactorial.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BigFactorial.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BigFactorial.dir/build: BigFactorial.exe

.PHONY : CMakeFiles/BigFactorial.dir/build

CMakeFiles/BigFactorial.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BigFactorial.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BigFactorial.dir/clean

CMakeFiles/BigFactorial.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\BigFactorial C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\BigFactorial C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\BigFactorial\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\BigFactorial\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\BigFactorial\cmake-build-debug\CMakeFiles\BigFactorial.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BigFactorial.dir/depend

