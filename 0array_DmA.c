// //
#include<stdio.h>
#include<stdlib.h> // required for malloc() and free().

int main(){
int* array; //pointer to the array
int syze;

// // Ask the user for the size of the array
printf("Enter the size of the array\n");
scanf("%d",&syze);
// //dynamically allocate integer for the syze integer
array =(int *)malloc(syze * sizeof(int));
/*After this line, array points to the dynamically allocated memory block. You can now treat array like an array, because it's pointing to a contiguous block of memory that can hold integers.*/

/*The statement arr = (int *)malloc(size * sizeof(int)); is used in C to dynamically allocate memory for an array of integers at runtime. Here's a detailed explanation of each part of the statement:

1. malloc(size * sizeof(int)):
malloc:
Stands for "memory allocation."
It is a function in C's standard library (<stdlib.h>) that allocates a specified amount of memory during runtime.
It returns a pointer to the first byte of the allocated memory block.

size * sizeof(int):
This is the amount of memory that needs to be allocated.
size is the number of elements in the array (determined by user input in your case).
sizeof(int) is used to determine how much memory is required to store a single int in bytes (usually 4 bytes on most systems, but this can vary depending on the platform).
So, size * sizeof(int) computes the total number of bytes required to store the entire array of integers. For example, if the user wants an array of 10 integers, and sizeof(int) is 4 bytes, then the total memory allocated will be 10 * 4 = 40 bytes.

2. (int *):
Typecasting the result:
malloc() returns a void * pointer, meaning it's a generic pointer that points to the allocated memory but does not specify the data type.
(int *) is a typecast that converts the generic void * pointer returned by malloc() to a pointer of type int * (i.e., a pointer to an integer).
This ensures that the memory block allocated by malloc() is treated as an array of integers.

3. arr = (int *)malloc(size * sizeof(int));:
arr:
This is the pointer variable that will store the address of the dynamically allocated memory block. After this statement, arr will point to the first element of the dynamically allocated array.
So, this statement:
Allocates memory for size number of integers.
Casts the returned pointer to an int * type.
Stores the address of the allocated memory in the arr pointer.*/

if (array == NULL) // Always check if malloc() returns NULL, which indicates memory allocation failure.
{
    printf("Memory allocation failed\n");
    return 1;
}

    printf("Enter %d elements: \n",syze);
    for (int i = 0; i < syze; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("youEntered\n");
    for (int i = 0; i < syze; i++)
    {
        printf("%d",array[i]);
    }
    printf("\n");
    // // Free the dynamically allocated memory.
    free (array);
    
    return 0;
}
 