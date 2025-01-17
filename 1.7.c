#include<stdio.h>
int main(){
int array[5], i;
printf("The size of integer in this compiler is %lu\n",sizeof(int));
for ( i = 0; i < 5; i++)
{
    printf("Adress of array[%d] is %p\n",i, &array[i]); // // sizeof() returns the size of an integer, and %lu is used to display it since the return type of sizeof() is unsigned long.
}


    return 0;
}