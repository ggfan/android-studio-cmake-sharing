This is a demonstration of sharing a common CMakeLists.txt-based build between two different Android Studio projects.
The build outputs are shared so that building from app1 will result in .o and .a that can be consumed by app2.

Key points:
- The app-level CMakeLists.txt refer to the shared CMakeLists.txt via add_subdirectories.
- The bin dir parameter of add_subdirectories is set so that build outputs are written to a common folder.
