# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\phamt\CLionProjects\Project5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\phamt\CLionProjects\Project5\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Project5.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Project5.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Project5.dir\flags.make

CMakeFiles\Project5.dir\main.cpp.obj: CMakeFiles\Project5.dir\flags.make
CMakeFiles\Project5.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\phamt\CLionProjects\Project5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project5.dir/main.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.22.27905\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project5.dir\main.cpp.obj /FdCMakeFiles\Project5.dir\ /FS -c C:\Users\phamt\CLionProjects\Project5\main.cpp
<<

CMakeFiles\Project5.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project5.dir/main.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.22.27905\bin\Hostx86\x86\cl.exe" > CMakeFiles\Project5.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\phamt\CLionProjects\Project5\main.cpp
<<

CMakeFiles\Project5.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project5.dir/main.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.22.27905\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project5.dir\main.cpp.s /c C:\Users\phamt\CLionProjects\Project5\main.cpp
<<

CMakeFiles\Project5.dir\Tqueue.cpp.obj: CMakeFiles\Project5.dir\flags.make
CMakeFiles\Project5.dir\Tqueue.cpp.obj: ..\Tqueue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\phamt\CLionProjects\Project5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Project5.dir/Tqueue.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.22.27905\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project5.dir\Tqueue.cpp.obj /FdCMakeFiles\Project5.dir\ /FS -c C:\Users\phamt\CLionProjects\Project5\Tqueue.cpp
<<

CMakeFiles\Project5.dir\Tqueue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project5.dir/Tqueue.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.22.27905\bin\Hostx86\x86\cl.exe" > CMakeFiles\Project5.dir\Tqueue.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\phamt\CLionProjects\Project5\Tqueue.cpp
<<

CMakeFiles\Project5.dir\Tqueue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project5.dir/Tqueue.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.22.27905\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project5.dir\Tqueue.cpp.s /c C:\Users\phamt\CLionProjects\Project5\Tqueue.cpp
<<

CMakeFiles\Project5.dir\Student.cpp.obj: CMakeFiles\Project5.dir\flags.make
CMakeFiles\Project5.dir\Student.cpp.obj: ..\Student.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\phamt\CLionProjects\Project5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Project5.dir/Student.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.22.27905\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project5.dir\Student.cpp.obj /FdCMakeFiles\Project5.dir\ /FS -c C:\Users\phamt\CLionProjects\Project5\Student.cpp
<<

CMakeFiles\Project5.dir\Student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project5.dir/Student.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.22.27905\bin\Hostx86\x86\cl.exe" > CMakeFiles\Project5.dir\Student.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\phamt\CLionProjects\Project5\Student.cpp
<<

CMakeFiles\Project5.dir\Student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project5.dir/Student.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.22.27905\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project5.dir\Student.cpp.s /c C:\Users\phamt\CLionProjects\Project5\Student.cpp
<<

CMakeFiles\Project5.dir\Class.cpp.obj: CMakeFiles\Project5.dir\flags.make
CMakeFiles\Project5.dir\Class.cpp.obj: ..\Class.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\phamt\CLionProjects\Project5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Project5.dir/Class.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.22.27905\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project5.dir\Class.cpp.obj /FdCMakeFiles\Project5.dir\ /FS -c C:\Users\phamt\CLionProjects\Project5\Class.cpp
<<

CMakeFiles\Project5.dir\Class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project5.dir/Class.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.22.27905\bin\Hostx86\x86\cl.exe" > CMakeFiles\Project5.dir\Class.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\phamt\CLionProjects\Project5\Class.cpp
<<

CMakeFiles\Project5.dir\Class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project5.dir/Class.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.22.27905\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project5.dir\Class.cpp.s /c C:\Users\phamt\CLionProjects\Project5\Class.cpp
<<

CMakeFiles\Project5.dir\Scheduler.cpp.obj: CMakeFiles\Project5.dir\flags.make
CMakeFiles\Project5.dir\Scheduler.cpp.obj: ..\Scheduler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\phamt\CLionProjects\Project5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Project5.dir/Scheduler.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.22.27905\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Project5.dir\Scheduler.cpp.obj /FdCMakeFiles\Project5.dir\ /FS -c C:\Users\phamt\CLionProjects\Project5\Scheduler.cpp
<<

CMakeFiles\Project5.dir\Scheduler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project5.dir/Scheduler.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.22.27905\bin\Hostx86\x86\cl.exe" > CMakeFiles\Project5.dir\Scheduler.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\phamt\CLionProjects\Project5\Scheduler.cpp
<<

CMakeFiles\Project5.dir\Scheduler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project5.dir/Scheduler.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.22.27905\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Project5.dir\Scheduler.cpp.s /c C:\Users\phamt\CLionProjects\Project5\Scheduler.cpp
<<

# Object files for target Project5
Project5_OBJECTS = \
"CMakeFiles\Project5.dir\main.cpp.obj" \
"CMakeFiles\Project5.dir\Tqueue.cpp.obj" \
"CMakeFiles\Project5.dir\Student.cpp.obj" \
"CMakeFiles\Project5.dir\Class.cpp.obj" \
"CMakeFiles\Project5.dir\Scheduler.cpp.obj"

# External object files for target Project5
Project5_EXTERNAL_OBJECTS =

Project5.exe: CMakeFiles\Project5.dir\main.cpp.obj
Project5.exe: CMakeFiles\Project5.dir\Tqueue.cpp.obj
Project5.exe: CMakeFiles\Project5.dir\Student.cpp.obj
Project5.exe: CMakeFiles\Project5.dir\Class.cpp.obj
Project5.exe: CMakeFiles\Project5.dir\Scheduler.cpp.obj
Project5.exe: CMakeFiles\Project5.dir\build.make
Project5.exe: CMakeFiles\Project5.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\phamt\CLionProjects\Project5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Project5.exe"
	"D:\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Project5.dir --rc="D:\Windows Kits\10\bin\10.0.17763.0\x86\rc.exe" --mt="D:\Windows Kits\10\bin\10.0.17763.0\x86\mt.exe" --manifests  -- "C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.22.27905\bin\Hostx86\x86\link.exe" /nologo @CMakeFiles\Project5.dir\objects1.rsp @<<
 /out:Project5.exe /implib:Project5.lib /pdb:C:\Users\phamt\CLionProjects\Project5\cmake-build-debug\Project5.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Project5.dir\build: Project5.exe

.PHONY : CMakeFiles\Project5.dir\build

CMakeFiles\Project5.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Project5.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Project5.dir\clean

CMakeFiles\Project5.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\phamt\CLionProjects\Project5 C:\Users\phamt\CLionProjects\Project5 C:\Users\phamt\CLionProjects\Project5\cmake-build-debug C:\Users\phamt\CLionProjects\Project5\cmake-build-debug C:\Users\phamt\CLionProjects\Project5\cmake-build-debug\CMakeFiles\Project5.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Project5.dir\depend

