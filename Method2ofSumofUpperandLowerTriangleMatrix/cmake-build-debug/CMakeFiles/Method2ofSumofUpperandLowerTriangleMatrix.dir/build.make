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
CMAKE_SOURCE_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\Method2ofSumofUpperandLowerTriangleMatrix

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\Method2ofSumofUpperandLowerTriangleMatrix\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/flags.make

CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/main.cpp.obj: CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/flags.make
CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\Method2ofSumofUpperandLowerTriangleMatrix\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Method2ofSumofUpperandLowerTriangleMatrix.dir\main.cpp.obj -c C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\Method2ofSumofUpperandLowerTriangleMatrix\main.cpp

CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\Method2ofSumofUpperandLowerTriangleMatrix\main.cpp > CMakeFiles\Method2ofSumofUpperandLowerTriangleMatrix.dir\main.cpp.i

CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\Method2ofSumofUpperandLowerTriangleMatrix\main.cpp -o CMakeFiles\Method2ofSumofUpperandLowerTriangleMatrix.dir\main.cpp.s

# Object files for target Method2ofSumofUpperandLowerTriangleMatrix
Method2ofSumofUpperandLowerTriangleMatrix_OBJECTS = \
"CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/main.cpp.obj"

# External object files for target Method2ofSumofUpperandLowerTriangleMatrix
Method2ofSumofUpperandLowerTriangleMatrix_EXTERNAL_OBJECTS =

Method2ofSumofUpperandLowerTriangleMatrix.exe: CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/main.cpp.obj
Method2ofSumofUpperandLowerTriangleMatrix.exe: CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/build.make
Method2ofSumofUpperandLowerTriangleMatrix.exe: CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/linklibs.rsp
Method2ofSumofUpperandLowerTriangleMatrix.exe: CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/objects1.rsp
Method2ofSumofUpperandLowerTriangleMatrix.exe: CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\Method2ofSumofUpperandLowerTriangleMatrix\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Method2ofSumofUpperandLowerTriangleMatrix.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Method2ofSumofUpperandLowerTriangleMatrix.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/build: Method2ofSumofUpperandLowerTriangleMatrix.exe

.PHONY : CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/build

CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Method2ofSumofUpperandLowerTriangleMatrix.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/clean

CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\Method2ofSumofUpperandLowerTriangleMatrix C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\Method2ofSumofUpperandLowerTriangleMatrix C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\Method2ofSumofUpperandLowerTriangleMatrix\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\Method2ofSumofUpperandLowerTriangleMatrix\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\Method2ofSumofUpperandLowerTriangleMatrix\cmake-build-debug\CMakeFiles\Method2ofSumofUpperandLowerTriangleMatrix.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Method2ofSumofUpperandLowerTriangleMatrix.dir/depend

