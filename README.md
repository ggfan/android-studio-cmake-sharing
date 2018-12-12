This is a demonstration of sharing a common CMakeLists.txt-based build between multiple different Android Studio
projects. The build outputs are shared so that building from master/build.gradle will result in .o and .a that can
be consumed by slave1/build.gradle (and vice-versa).

master/build.gradle - You can build shared library from this project and edit shared library files in the IDE (Android
  Studio). The CMakeLists.txt in this project uses add_subdirectory(...) to reference the shared project.  There
  should be only one master/build.gradle.

slave1/build.gradle - You can build shared library from this project but you can't edit shared library files in the IDE.
  The CMakeLists.txt in this project uses ExternalProject_Add(...) to reference the shared project. There can be many
  slave projects.

Notes:
- The parameter BINARY_DIR of add_subdirectory(...) and ExternalProject_Add(...) is set so that build outputs are
  written to a common folder segmented by variant and ABI.
- A future Android Gradle Plugin could supply the variant name to CMake so that user doesn't have to hard-code it in
  build.gradle.
