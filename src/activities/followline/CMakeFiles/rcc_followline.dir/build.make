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

# Utility rule file for rcc_followline.

# Include the progress variables for this target.
include src/activities/followline/CMakeFiles/rcc_followline.dir/progress.make

src/activities/followline/CMakeFiles/rcc_followline: share/gcompris-qt/rcc/followline.rcc
src/activities/followline/CMakeFiles/rcc_followline: src/activities/followline/followline.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generate followline RCC"

share/gcompris-qt/rcc/followline.rcc: /home/keith/finalwork/GCompris-qt/src/activities/followline/ActivityInfo.qml
share/gcompris-qt/rcc/followline.rcc: /home/keith/finalwork/GCompris-qt/src/activities/followline/LinePart.qml
share/gcompris-qt/rcc/followline.rcc: /home/keith/finalwork/GCompris-qt/src/activities/followline/Followline.qml
share/gcompris-qt/rcc/followline.rcc: /home/keith/finalwork/GCompris-qt/src/activities/followline/followline.svg
share/gcompris-qt/rcc/followline.rcc: /home/keith/finalwork/GCompris-qt/src/activities/followline/followline.js
share/gcompris-qt/rcc/followline.rcc: /home/keith/finalwork/GCompris-qt/src/activities/followline/resource/fireman.svg
share/gcompris-qt/rcc/followline.rcc: /home/keith/finalwork/GCompris-qt/src/activities/followline/resource/background.svg
share/gcompris-qt/rcc/followline.rcc: /home/keith/finalwork/GCompris-qt/src/activities/followline/resource/fire.svg
share/gcompris-qt/rcc/followline.rcc: /home/keith/finalwork/GCompris-qt/src/activities/followline/resource/fire_flame.svg
share/gcompris-qt/rcc/followline.rcc: /home/keith/finalwork/GCompris-qt/src/activities/followline/resource/water_spot.svg
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ../../../share/gcompris-qt/rcc/followline.rcc"
	cd /home/keith/finalwork/GCompris-qt/src/activities/followline && /home/keith/Qt5.7.0/5.7/gcc_64/bin/rcc -binary -o /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/share/gcompris-qt/rcc/followline.rcc - < /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/followline/followline.qrc

rcc_followline: src/activities/followline/CMakeFiles/rcc_followline
rcc_followline: share/gcompris-qt/rcc/followline.rcc
rcc_followline: src/activities/followline/CMakeFiles/rcc_followline.dir/build.make

.PHONY : rcc_followline

# Rule to build all files generated by this target.
src/activities/followline/CMakeFiles/rcc_followline.dir/build: rcc_followline

.PHONY : src/activities/followline/CMakeFiles/rcc_followline.dir/build

src/activities/followline/CMakeFiles/rcc_followline.dir/clean:
	cd /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/followline && $(CMAKE_COMMAND) -P CMakeFiles/rcc_followline.dir/cmake_clean.cmake
.PHONY : src/activities/followline/CMakeFiles/rcc_followline.dir/clean

src/activities/followline/CMakeFiles/rcc_followline.dir/depend:
	cd /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/keith/finalwork/GCompris-qt /home/keith/finalwork/GCompris-qt/src/activities/followline /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/followline /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/followline/CMakeFiles/rcc_followline.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/activities/followline/CMakeFiles/rcc_followline.dir/depend

