# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "D:/Microsoft Visual Studio/2019/Professional/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "D:/Microsoft Visual Studio/2019/Professional/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:/code/3823B1PM2_BEST

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:/code/3823B1PM2_BEST/build

# Include any dependencies generated for this target.
include 1-type/CMakeFiles/deadline.dir/depend.make

# Include the progress variables for this target.
include 1-type/CMakeFiles/deadline.dir/progress.make

# Include the compile flags for this target's objects.
include 1-type/CMakeFiles/deadline.dir/flags.make

1-type/CMakeFiles/deadline.dir/deadline/test.c.obj: 1-type/CMakeFiles/deadline.dir/flags.make
1-type/CMakeFiles/deadline.dir/deadline/test.c.obj: 1-type/CMakeFiles/deadline.dir/includes_C.rsp
1-type/CMakeFiles/deadline.dir/deadline/test.c.obj: ../1-type/deadline/test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:/code/3823B1PM2_BEST/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object 1-type/CMakeFiles/deadline.dir/deadline/test.c.obj"
	cd D:/code/3823B1PM2_BEST/build/1-type && C:/Users/ilche/gcc/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/deadline.dir/deadline/test.c.obj -c D:/code/3823B1PM2_BEST/1-type/deadline/test.c

1-type/CMakeFiles/deadline.dir/deadline/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/deadline.dir/deadline/test.c.i"
	cd D:/code/3823B1PM2_BEST/build/1-type && C:/Users/ilche/gcc/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:/code/3823B1PM2_BEST/1-type/deadline/test.c > CMakeFiles/deadline.dir/deadline/test.c.i

1-type/CMakeFiles/deadline.dir/deadline/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/deadline.dir/deadline/test.c.s"
	cd D:/code/3823B1PM2_BEST/build/1-type && C:/Users/ilche/gcc/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:/code/3823B1PM2_BEST/1-type/deadline/test.c -o CMakeFiles/deadline.dir/deadline/test.c.s

# Object files for target deadline
deadline_OBJECTS = \
"CMakeFiles/deadline.dir/deadline/test.c.obj"

# External object files for target deadline
deadline_EXTERNAL_OBJECTS =

1-type/deadline.exe: 1-type/CMakeFiles/deadline.dir/deadline/test.c.obj
1-type/deadline.exe: 1-type/CMakeFiles/deadline.dir/build.make
1-type/deadline.exe: 1-type/CMakeFiles/deadline.dir/linklibs.rsp
1-type/deadline.exe: 1-type/CMakeFiles/deadline.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:/code/3823B1PM2_BEST/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable deadline.exe"
	cd D:/code/3823B1PM2_BEST/build/1-type && "D:/Microsoft Visual Studio/2019/Professional/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe" -E rm -f CMakeFiles/deadline.dir/objects.a
	cd D:/code/3823B1PM2_BEST/build/1-type && C:/Users/ilche/gcc/bin/ar.exe cr CMakeFiles/deadline.dir/objects.a @CMakeFiles/deadline.dir/objects1.rsp
	cd D:/code/3823B1PM2_BEST/build/1-type && C:/Users/ilche/gcc/bin/gcc.exe -g -Wl,--whole-archive CMakeFiles/deadline.dir/objects.a -Wl,--no-whole-archive -o deadline.exe -Wl,--out-implib,libdeadline.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/deadline.dir/linklibs.rsp

# Rule to build all files generated by this target.
1-type/CMakeFiles/deadline.dir/build: 1-type/deadline.exe

.PHONY : 1-type/CMakeFiles/deadline.dir/build

1-type/CMakeFiles/deadline.dir/clean:
	cd D:/code/3823B1PM2_BEST/build/1-type && $(CMAKE_COMMAND) -P CMakeFiles/deadline.dir/cmake_clean.cmake
.PHONY : 1-type/CMakeFiles/deadline.dir/clean

1-type/CMakeFiles/deadline.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" D:/code/3823B1PM2_BEST D:/code/3823B1PM2_BEST/1-type D:/code/3823B1PM2_BEST/build D:/code/3823B1PM2_BEST/build/1-type D:/code/3823B1PM2_BEST/build/1-type/CMakeFiles/deadline.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : 1-type/CMakeFiles/deadline.dir/depend

