# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\CLionProjects\Stack_on_array

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\CLionProjects\Stack_on_array\cmake-build-debug-mingw

# Include any dependencies generated for this target.
include CMakeFiles/Stack_on_array.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Stack_on_array.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Stack_on_array.dir/flags.make

CMakeFiles/Stack_on_array.dir/main.cpp.obj: CMakeFiles/Stack_on_array.dir/flags.make
CMakeFiles/Stack_on_array.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CLionProjects\Stack_on_array\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Stack_on_array.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Stack_on_array.dir\main.cpp.obj -c C:\CLionProjects\Stack_on_array\main.cpp

CMakeFiles/Stack_on_array.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Stack_on_array.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\CLionProjects\Stack_on_array\main.cpp > CMakeFiles\Stack_on_array.dir\main.cpp.i

CMakeFiles/Stack_on_array.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Stack_on_array.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\CLionProjects\Stack_on_array\main.cpp -o CMakeFiles\Stack_on_array.dir\main.cpp.s

CMakeFiles/Stack_on_array.dir/stack.cpp.obj: CMakeFiles/Stack_on_array.dir/flags.make
CMakeFiles/Stack_on_array.dir/stack.cpp.obj: ../stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CLionProjects\Stack_on_array\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Stack_on_array.dir/stack.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Stack_on_array.dir\stack.cpp.obj -c C:\CLionProjects\Stack_on_array\stack.cpp

CMakeFiles/Stack_on_array.dir/stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Stack_on_array.dir/stack.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\CLionProjects\Stack_on_array\stack.cpp > CMakeFiles\Stack_on_array.dir\stack.cpp.i

CMakeFiles/Stack_on_array.dir/stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Stack_on_array.dir/stack.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\CLionProjects\Stack_on_array\stack.cpp -o CMakeFiles\Stack_on_array.dir\stack.cpp.s

# Object files for target Stack_on_array
Stack_on_array_OBJECTS = \
"CMakeFiles/Stack_on_array.dir/main.cpp.obj" \
"CMakeFiles/Stack_on_array.dir/stack.cpp.obj"

# External object files for target Stack_on_array
Stack_on_array_EXTERNAL_OBJECTS =

Stack_on_array.exe: CMakeFiles/Stack_on_array.dir/main.cpp.obj
Stack_on_array.exe: CMakeFiles/Stack_on_array.dir/stack.cpp.obj
Stack_on_array.exe: CMakeFiles/Stack_on_array.dir/build.make
Stack_on_array.exe: CMakeFiles/Stack_on_array.dir/linklibs.rsp
Stack_on_array.exe: CMakeFiles/Stack_on_array.dir/objects1.rsp
Stack_on_array.exe: CMakeFiles/Stack_on_array.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\CLionProjects\Stack_on_array\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Stack_on_array.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Stack_on_array.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Stack_on_array.dir/build: Stack_on_array.exe
.PHONY : CMakeFiles/Stack_on_array.dir/build

CMakeFiles/Stack_on_array.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Stack_on_array.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Stack_on_array.dir/clean

CMakeFiles/Stack_on_array.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\CLionProjects\Stack_on_array C:\CLionProjects\Stack_on_array C:\CLionProjects\Stack_on_array\cmake-build-debug-mingw C:\CLionProjects\Stack_on_array\cmake-build-debug-mingw C:\CLionProjects\Stack_on_array\cmake-build-debug-mingw\CMakeFiles\Stack_on_array.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Stack_on_array.dir/depend

