#include <stdio.h>

/*
 * main - Write a C program that prints the size of various types on the computer it is compiled and run on
 *
 * Return: always 0
 */
int main()
{
    char myChar;
    int myInt;
    long int myLongInt;
    long long int myLongLongInt;
    float myFloat;
    {
        printf("size of char: %d bytes\n",sizeof(myChar));
        printf("size of int: %d bytes\n",sizeof(myInt));
        printf("size of long int: %d bytes\n",sizeof(myLongInt));
        printf("size of long long int: %d bytes\n",sizeof(myLongLongInt));
        printf("size of float: %d bytes\n",sizeof(myFloat));
    }
  
    return 0;
}

