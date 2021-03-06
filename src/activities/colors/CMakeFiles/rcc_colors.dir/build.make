# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/keith/finalwork/GCompris-qt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release

# Utility rule file for rcc_colors.

# Include the progress variables for this target.
include src/activities/colors/CMakeFiles/rcc_colors.dir/progress.make

src/activities/colors/CMakeFiles/rcc_colors: share/gcompris-qt/rcc/colors.rcc
src/activities/colors/CMakeFiles/rcc_colors: src/activities/colors/colors.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generate colors RCC"

share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/ActivityInfo.qml
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/FindIt.qml
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/Colors.qml
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/ColorItem.qml
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/colors.svg
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/findit.js
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/colors.js
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/resource/purple_duck.svg
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/resource/pink_duck.svg
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/resource/black_duck.svg
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/resource/green_duck.svg
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/resource/yellow_duck.svg
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/resource/background.svg
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/resource/blue_duck.svg
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/resource/red_duck.svg
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/resource/orange_duck.svg
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/resource/white_duck.svg
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/resource/brown_duck.svg
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/resource/checkError.svg
share/gcompris-qt/rcc/colors.rcc: /home/keith/finalwork/GCompris-qt/src/activities/colors/resource/grey_duck.svg
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ../../../share/gcompris-qt/rcc/colors.rcc"
	cd /home/keith/finalwork/GCompris-qt/src/activities/colors && /home/keith/Qt5.7.0/5.7/gcc_64/bin/rcc -binary -o /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/share/gcompris-qt/rcc/colors.rcc - < /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/colors/colors.qrc

rcc_colors: src/activities/colors/CMakeFiles/rcc_colors
rcc_colors: share/gcompris-qt/rcc/colors.rcc
rcc_colors: src/activities/colors/CMakeFiles/rcc_colors.dir/build.make

.PHONY : rcc_colors

# Rule to build all files generated by this target.
src/activities/colors/CMakeFiles/rcc_colors.dir/build: rcc_colors

.PHONY : src/activities/colors/CMakeFiles/rcc_colors.dir/build

src/activities/colors/CMakeFiles/rcc_colors.dir/clean:
	cd /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/colors && $(CMAKE_COMMAND) -P CMakeFiles/rcc_colors.dir/cmake_clean.cmake
.PHONY : src/activities/colors/CMakeFiles/rcc_colors.dir/clean

src/activities/colors/CMakeFiles/rcc_colors.dir/depend:
	cd /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/keith/finalwork/GCompris-qt /home/keith/finalwork/GCompris-qt/src/activities/colors /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/colors /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/colors/CMakeFiles/rcc_colors.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/activities/colors/CMakeFiles/rcc_colors.dir/depend

