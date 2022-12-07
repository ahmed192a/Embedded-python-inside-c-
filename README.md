# Embedded-python-inside-c-
useful way to embedded python with c++

this is a simple example to show how to use python in c++.

first, we need to install python3.10 and any Visual Studio build tools versoin (Note: edit the generator version in cmake with the version you have installed)

then, we need to link the python library to the project in cmake.

then, we can use python in c++.

## Commands used to configure the project
```
cmake -S . -B build -G "Visual Studio 17 2022"
cmake --build build --config Release
```

## Commands used to run the project
```
cd build
Release\PROJECT_NAME.exe
```

