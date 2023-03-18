#include <stdio.h>

int main()
{
    int myChar;
    int myInt;
    int myLongInt;
    int myLongLongInt;
    int myFloat;
    {
        printf("size of char: %d bytes\n",sizeof(myChar));
        printf("size of int: %d bytes\n",sizeof(myInt));
        printf("size of long int: %d bytes\n",sizeof(myLongInt));
        printf("size of long long int: %d bytes\n",sizeof(myLongLongInt));
        printf("size of float: %d bytes\n",sizeof(myFloat));
    }
  
    return 0;
}

