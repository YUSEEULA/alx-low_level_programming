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
        printf("size of char: %d byte(s)\n",sizeof(myChar));
        printf("size of int: %d byte(s)\n",sizeof(myInt));
        printf("size of long int: %d byte(s)\n",sizeof(myLongInt));
        printf("size of long long int: %d byte(s)\n",sizeof(myLongLongInt));
        printf("size of float: %d byte(s)\n",sizeof(myFloat));
    }
  
    return 0;
}

