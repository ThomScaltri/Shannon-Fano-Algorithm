# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lzs.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lzs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lzs.dir/flags.make

CMakeFiles/lzs.dir/main.c.o: CMakeFiles/lzs.dir/flags.make
CMakeFiles/lzs.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lzs.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lzs.dir/main.c.o   -c /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/main.c

CMakeFiles/lzs.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lzs.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/main.c > CMakeFiles/lzs.dir/main.c.i

CMakeFiles/lzs.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lzs.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/main.c -o CMakeFiles/lzs.dir/main.c.s

CMakeFiles/lzs.dir/bit_op.c.o: CMakeFiles/lzs.dir/flags.make
CMakeFiles/lzs.dir/bit_op.c.o: ../bit_op.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/lzs.dir/bit_op.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lzs.dir/bit_op.c.o   -c /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/bit_op.c

CMakeFiles/lzs.dir/bit_op.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lzs.dir/bit_op.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/bit_op.c > CMakeFiles/lzs.dir/bit_op.c.i

CMakeFiles/lzs.dir/bit_op.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lzs.dir/bit_op.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/bit_op.c -o CMakeFiles/lzs.dir/bit_op.c.s

CMakeFiles/lzs.dir/utils.c.o: CMakeFiles/lzs.dir/flags.make
CMakeFiles/lzs.dir/utils.c.o: ../utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/lzs.dir/utils.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lzs.dir/utils.c.o   -c /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/utils.c

CMakeFiles/lzs.dir/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lzs.dir/utils.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/utils.c > CMakeFiles/lzs.dir/utils.c.i

CMakeFiles/lzs.dir/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lzs.dir/utils.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/utils.c -o CMakeFiles/lzs.dir/utils.c.s

CMakeFiles/lzs.dir/stream.c.o: CMakeFiles/lzs.dir/flags.make
CMakeFiles/lzs.dir/stream.c.o: ../stream.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/lzs.dir/stream.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lzs.dir/stream.c.o   -c /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/stream.c

CMakeFiles/lzs.dir/stream.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lzs.dir/stream.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/stream.c > CMakeFiles/lzs.dir/stream.c.i

CMakeFiles/lzs.dir/stream.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lzs.dir/stream.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/stream.c -o CMakeFiles/lzs.dir/stream.c.s

CMakeFiles/lzs.dir/initializer.c.o: CMakeFiles/lzs.dir/flags.make
CMakeFiles/lzs.dir/initializer.c.o: ../initializer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/lzs.dir/initializer.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lzs.dir/initializer.c.o   -c /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/initializer.c

CMakeFiles/lzs.dir/initializer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lzs.dir/initializer.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/initializer.c > CMakeFiles/lzs.dir/initializer.c.i

CMakeFiles/lzs.dir/initializer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lzs.dir/initializer.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/initializer.c -o CMakeFiles/lzs.dir/initializer.c.s

CMakeFiles/lzs.dir/ShF.c.o: CMakeFiles/lzs.dir/flags.make
CMakeFiles/lzs.dir/ShF.c.o: ../ShF.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/lzs.dir/ShF.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lzs.dir/ShF.c.o   -c /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/ShF.c

CMakeFiles/lzs.dir/ShF.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lzs.dir/ShF.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/ShF.c > CMakeFiles/lzs.dir/ShF.c.i

CMakeFiles/lzs.dir/ShF.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lzs.dir/ShF.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/ShF.c -o CMakeFiles/lzs.dir/ShF.c.s

CMakeFiles/lzs.dir/file.c.o: CMakeFiles/lzs.dir/flags.make
CMakeFiles/lzs.dir/file.c.o: ../file.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/lzs.dir/file.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lzs.dir/file.c.o   -c /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/file.c

CMakeFiles/lzs.dir/file.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lzs.dir/file.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/file.c > CMakeFiles/lzs.dir/file.c.i

CMakeFiles/lzs.dir/file.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lzs.dir/file.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/file.c -o CMakeFiles/lzs.dir/file.c.s

# Object files for target lzs
lzs_OBJECTS = \
"CMakeFiles/lzs.dir/main.c.o" \
"CMakeFiles/lzs.dir/bit_op.c.o" \
"CMakeFiles/lzs.dir/utils.c.o" \
"CMakeFiles/lzs.dir/stream.c.o" \
"CMakeFiles/lzs.dir/initializer.c.o" \
"CMakeFiles/lzs.dir/ShF.c.o" \
"CMakeFiles/lzs.dir/file.c.o"

# External object files for target lzs
lzs_EXTERNAL_OBJECTS =

lzs: CMakeFiles/lzs.dir/main.c.o
lzs: CMakeFiles/lzs.dir/bit_op.c.o
lzs: CMakeFiles/lzs.dir/utils.c.o
lzs: CMakeFiles/lzs.dir/stream.c.o
lzs: CMakeFiles/lzs.dir/initializer.c.o
lzs: CMakeFiles/lzs.dir/ShF.c.o
lzs: CMakeFiles/lzs.dir/file.c.o
lzs: CMakeFiles/lzs.dir/build.make
lzs: CMakeFiles/lzs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable lzs"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lzs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lzs.dir/build: lzs

.PHONY : CMakeFiles/lzs.dir/build

CMakeFiles/lzs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lzs.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lzs.dir/clean

CMakeFiles/lzs.dir/depend:
	cd /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/cmake-build-debug /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/cmake-build-debug /Users/thom/Desktop/SH-F/Shannon-Fano-Algorithm/cmake-build-debug/CMakeFiles/lzs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lzs.dir/depend

