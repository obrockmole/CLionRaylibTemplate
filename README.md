# Raylib Template for CLion

> It is important to note, this template requires installing Raylib through the vcpgk package manager.

## Installation
- To get started, clone the repository and open the project in CLion.
- Once the project is open, make sure you have a vcpgk repository set up in your project. If you do not have one set up, use the url `https://github.com/microsoft/vcpkg` for the installation.
- Install the Raylib package using the vcpkg interface in CLion, or by running the command:
```shell
vcpkg install raylib:x64-windows
```
- It is very important you update your CMake options under Settings -> Build, Execution, Development -> CMake. Under CMake options, you must link your vcpkg install directory using the `-DCMAKE_TOOLCHAIN_FILE` option.
- The install location may be different but the default is your `user/.vcpkg-clion/vcpkg/scripts/buildsystems/vcpkg.cmake` directory, so adding the following to the options list should work.
```shell
-DCMAKE_TOOLCHAIN_FILE=C:/Users/user/.vcpkg-clion/vcpkg/scripts/buildsystems/vcpkg.cmake
```
> Please double check your vcpkg install location first.
- Once the package is installed and the CMake options are properly set, you can run the project and start coding!
