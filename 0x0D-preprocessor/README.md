0x0D-preprocessor

The C preprocessor modifies a source code file before
handing it over to the compiler.
There are essentially three uses of the preprocessor--directives,
constants, and macros.

#What are macros and how to use them
* A macro is a preprocessor directive that defines a symbolic name
or a group of symbols that can be replaced by a text value before
the program is compiled.
* Macros are defined using the #define preprocessor directive,
followed by the macro name and the replacement text.

#What are the most common predefined macros
The common predefined macros are GNU C extensions.

#How to include guard your header files

#ifndef HEADER_FILE_NAME_H
#define HEADER_FILE_NAME_H

// your header file code goes here

#endif
