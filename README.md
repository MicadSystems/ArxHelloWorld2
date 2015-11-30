# ArxHelloWorld2

Can run unit tests without compiling any AutoCAD functions in `ArxHelloWorld.cpp` `acrxEntryPoint()`.

Uncommenting the line in `ArxHelloWorld.cpp` causes the unit tests to die with:

    Result Message:	Failed to set up the execution context to run the test

This project requires `LIB` and `INCLUDE` envars to be set to 

`INCLUDE={PATH TO}\Autodesk\ObjectARX_Nautilus_Alpha2\inc;{PATH TO}\Autodesk\ObjectARX_Nautilus_Alpha2\inc-x64`

`LIB={PATH TO}\Autodesk\ObjectARX_Nautilus_Alpha2\lib-x64`

Before running the tests the test runner needs to be set to x64:  Test > Test Settings > Default Processor Architecture > X64
