# gtest-c
googletest example with C language and CMake

## Requirements

You will need CMake as well as a C and C++ compiler. This example was tested on Ubuntu 18.04 with the following tools:

- CMake - 3.10.2
- gcc/g++ - 7.5.0

## Building
Create the build directory
```
mkdir build && cd build
```

Generate the build files using CMake. To specify the test build:
```
cmake -DTARGET_GROUP=test ..
```

Run the tests:
```
ctest

OR

./test/test_all
```

You can also build the application:
```
cmake -DTARGET_GROUP=release ..
```

Run the application
```
./app
```