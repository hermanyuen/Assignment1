[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10050287&assignment_repo_type=AssignmentRepo)
# CppUnitLite-basic
Used in UW P&CE Certificate Program in C++.

Contains the CppUnitLite framework, and additional "starter code" files for each assignment

Supports C++20

The 'main' branch contains the CppUnitLite files that are used throughout the course.
There are also branches for each assignment, which include starter files ("your code goes here")

Assignment branches:
main/Assignment4

The header files for CppUnitLite are in the include\CppUnitLite directory.  In your project file or makefile, you will need to tell your compiler to seach this directory for headers

Microsoft Visual Studio: add this include directory to the "AdditionalIncludeDirectories"
makefile: add via the INC=-Iinclude/CppUnitLite flag
