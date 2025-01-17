// // one dimensional and two dimensional array. 
#include<stdio.h>
int main(){
// // int a[3][3] = {{4,2,9},{3,8,7},{1,5,6}};
int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        // // i=0 n j=0 then inner loop runs and i=0 n j=1 then goes on.
        {
            printf("Enter the value of [%d],[%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        // // i=0 n j=0 then inner loop runs and i=0 n j=1 then goes on.
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/* Difference between dynamic arrays and linked lists:

1. **Arrays** (including dynamically allocated arrays):
   - **Static arrays** (e.g., `int arr[10];`) are not dynamic because their size is fixed at compile time. Once you declare an array with a certain size, you cannot change its size.
   - **Dynamically allocated arrays** (e.g., using `malloc()` or `calloc()` in C) allow you to allocate memory for an array at runtime, based on the input or needs of your program. However, **even dynamic arrays have a fixed size** once allocated. If you want to change the size of a dynamically allocated array, you'd need to manually reallocate memory using functions like `realloc()`.
   - Despite dynamic memory allocation, arrays still require contiguous memory, and you cannot easily insert or delete elements from the middle of the array without shifting other elements.

2. **Linked Lists**:
   - A **linked list** is inherently dynamic. Each element (called a node) is allocated separately and contains a pointer to the next node in the list.
   - Unlike arrays, **linked lists don’t require contiguous memory**, and you can easily grow or shrink the list by adding or removing nodes without reallocating or shifting elements.
   - You can insert or delete nodes anywhere in the list with ease.

### Key Differences:
- **Array (dynamic or static)**: Fixed size after allocation, requires contiguous memory, inserting/removing elements is inefficient.
- **Linked List**: Truly dynamic, no fixed size, each node is allocated separately, and it's easy to insert or remove nodes at any point.

### Summary:
The dynamic memory allocation you learned about (e.g., `malloc()`) was for an array, but it doesn't make arrays as flexible as linked lists. The allocated size of the array is fixed, while linked lists are flexible by nature.

So, what you implemented was **not a linked list**. It was a dynamically allocated array, which is still different from a linked list.*/