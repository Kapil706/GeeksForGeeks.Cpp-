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
CMAKE_SOURCE_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SearchingElementInMatrix

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SearchingElementInMatrix\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SearchingElementInMatrix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SearchingElementInMatrix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SearchingElementInMatrix.dir/flags.make

CMakeFiles/SearchingElementInMatrix.dir/main.cpp.obj: CMakeFiles/SearchingElementInMatrix.dir/flags.make
CMakeFiles/SearchingElementInMatrix.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SearchingElementInMatrix\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SearchingElementInMatrix.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SearchingElementInMatrix.dir\main.cpp.obj -c C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SearchingElementInMatrix\main.cpp

CMakeFiles/SearchingElementInMatrix.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SearchingElementInMatrix.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SearchingElementInMatrix\main.cpp > CMakeFiles\SearchingElementInMatrix.dir\main.cpp.i

CMakeFiles/SearchingElementInMatrix.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SearchingElementInMatrix.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SearchingElementInMatrix\main.cpp -o CMakeFiles\SearchingElementInMatrix.dir\main.cpp.s

# Object files for target SearchingElementInMatrix
SearchingElementInMatrix_OBJECTS = \
"CMakeFiles/SearchingElementInMatrix.dir/main.cpp.obj"

# External object files for target SearchingElementInMatrix
SearchingElementInMatrix_EXTERNAL_OBJECTS =

SearchingElementInMatrix.exe: CMakeFiles/SearchingElementInMatrix.dir/main.cpp.obj
SearchingElementInMatrix.exe: CMakeFiles/SearchingElementInMatrix.dir/build.make
SearchingElementInMatrix.exe: CMakeFiles/SearchingElementInMatrix.dir/linklibs.rsp
SearchingElementInMatrix.exe: CMakeFiles/SearchingElementInMatrix.dir/objects1.rsp
SearchingElementInMatrix.exe: CMakeFiles/SearchingElementInMatrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SearchingElementInMatrix\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SearchingElementInMatrix.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SearchingElementInMatrix.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SearchingElementInMatrix.dir/build: SearchingElementInMatrix.exe

.PHONY : CMakeFiles/SearchingElementInMatrix.dir/build

CMakeFiles/SearchingElementInMatrix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SearchingElementInMatrix.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SearchingElementInMatrix.dir/clean

CMakeFiles/SearchingElementInMatrix.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SearchingElementInMatrix C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SearchingElementInMatrix C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SearchingElementInMatrix\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SearchingElementInMatrix\cmake-build-debug C:\Users\kapil\CLionProjects\GeeksForGeeks.Cpp-\SearchingElementInMatrix\cmake-build-debug\CMakeFiles\SearchingElementInMatrix.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SearchingElementInMatrix.dir/depend

