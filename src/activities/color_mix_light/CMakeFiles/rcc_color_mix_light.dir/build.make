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

# Utility rule file for rcc_color_mix_light.

# Include the progress variables for this target.
include src/activities/color_mix_light/CMakeFiles/rcc_color_mix_light.dir/progress.make

src/activities/color_mix_light/CMakeFiles/rcc_color_mix_light: share/gcompris-qt/rcc/color_mix_light.rcc
src/activities/color_mix_light/CMakeFiles/rcc_color_mix_light: src/activities/color_mix_light/color_mix_light.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generate color_mix_light RCC"

share/gcompris-qt/rcc/color_mix_light.rcc: /home/keith/finalwork/GCompris-qt/src/activities/color_mix_light/ActivityInfo.qml
share/gcompris-qt/rcc/color_mix_light.rcc: /home/keith/finalwork/GCompris-qt/src/activities/color_mix_light/ColorMixLight.qml
share/gcompris-qt/rcc/color_mix_light.rcc: /home/keith/finalwork/GCompris-qt/src/activities/color_mix_light/color_mix_light.svg
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ../../../share/gcompris-qt/rcc/color_mix_light.rcc"
	cd /home/keith/finalwork/GCompris-qt/src/activities/color_mix_light && /home/keith/Qt5.7.0/5.7/gcc_64/bin/rcc -binary -o /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/share/gcompris-qt/rcc/color_mix_light.rcc - < /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/color_mix_light/color_mix_light.qrc

rcc_color_mix_light: src/activities/color_mix_light/CMakeFiles/rcc_color_mix_light
rcc_color_mix_light: share/gcompris-qt/rcc/color_mix_light.rcc
rcc_color_mix_light: src/activities/color_mix_light/CMakeFiles/rcc_color_mix_light.dir/build.make

.PHONY : rcc_color_mix_light

# Rule to build all files generated by this target.
src/activities/color_mix_light/CMakeFiles/rcc_color_mix_light.dir/build: rcc_color_mix_light

.PHONY : src/activities/color_mix_light/CMakeFiles/rcc_color_mix_light.dir/build

src/activities/color_mix_light/CMakeFiles/rcc_color_mix_light.dir/clean:
	cd /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/color_mix_light && $(CMAKE_COMMAND) -P CMakeFiles/rcc_color_mix_light.dir/cmake_clean.cmake
.PHONY : src/activities/color_mix_light/CMakeFiles/rcc_color_mix_light.dir/clean

src/activities/color_mix_light/CMakeFiles/rcc_color_mix_light.dir/depend:
	cd /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/keith/finalwork/GCompris-qt /home/keith/finalwork/GCompris-qt/src/activities/color_mix_light /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/color_mix_light /home/keith/finalwork/build-GCompris-qt-Desktop_Qt_5_7_0_GCC_64bit-Release/src/activities/color_mix_light/CMakeFiles/rcc_color_mix_light.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/activities/color_mix_light/CMakeFiles/rcc_color_mix_light.dir/depend

