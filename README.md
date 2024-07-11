# SimpleCppProjWithCmake

A simple Hello wold Cpp project with Cmake.

Project structure:

├── CMakeLists.txt
├── README.md
├── commonFunctions.cmake
├── lib
│   └── 3pp
├── src
│   ├── app
│   └── helloLib
└── test
    ├── CMakeLists.txt
    └── src


google test is not included by default but can be included
by changing TESTING_REQUIRED flag in root CMakeLists.txt.

## Configure
mkdir -p build
cd build

## Compile 
make -j

## Binaries
created in root_dir/build/bin