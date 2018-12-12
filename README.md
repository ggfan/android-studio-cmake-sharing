This is a demonstration of sharing a common CMakeLists.txt-based build between two different Android Studio projects.
The build outputs are shared so that building from app1 will result in .o and .a that can be consumed by app2.

Key points:
- The app-level CMakeLists.txt refer to the shared CMakeLists.txt via ExternalProject_Add.
- The bin dir parameter of BINARY_DIR is set so that build outputs are written to a common folder segmented by variant and ABI.

Android Studio Notes:
- A future Android Gradle Plugin could supply the variant name to CMake so that user doesn't have to hard-code it in build.gradle.
- I'm guessing Android Studio won't pick up the files and flags for the shared project. Is it possible to make this work?
