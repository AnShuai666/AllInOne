# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/yhl/software/clion-2018.2.6/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/yhl/software/clion-2018.2.6/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/as/Qt5/clion_qt_test001

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/as/Qt5/clion_qt_test001/build

# Utility rule file for QT_TEST001_autogen.

# Include the progress variables for this target.
include CMakeFiles/QT_TEST001_autogen.dir/progress.make

CMakeFiles/QT_TEST001_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/as/Qt5/clion_qt_test001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target QT_TEST001"
	/home/yhl/software/clion-2018.2.6/bin/cmake/linux/bin/cmake -E cmake_autogen /home/as/Qt5/clion_qt_test001/build/CMakeFiles/QT_TEST001_autogen.dir/AutogenInfo.cmake Debug

QT_TEST001_autogen: CMakeFiles/QT_TEST001_autogen
QT_TEST001_autogen: CMakeFiles/QT_TEST001_autogen.dir/build.make

.PHONY : QT_TEST001_autogen

# Rule to build all files generated by this target.
CMakeFiles/QT_TEST001_autogen.dir/build: QT_TEST001_autogen

.PHONY : CMakeFiles/QT_TEST001_autogen.dir/build

CMakeFiles/QT_TEST001_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/QT_TEST001_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/QT_TEST001_autogen.dir/clean

CMakeFiles/QT_TEST001_autogen.dir/depend:
	cd /home/as/Qt5/clion_qt_test001/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/as/Qt5/clion_qt_test001 /home/as/Qt5/clion_qt_test001 /home/as/Qt5/clion_qt_test001/build /home/as/Qt5/clion_qt_test001/build /home/as/Qt5/clion_qt_test001/build/CMakeFiles/QT_TEST001_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QT_TEST001_autogen.dir/depend
