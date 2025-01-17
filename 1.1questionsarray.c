#include<stdio.h>
int main(){
int arr[5] = {3,4,7,5,9};
printf("%p %p\n", &arr,&arr+1); // &arr[0] and &arr can seem similar in many cases, but they are not exactly the same.
printf("%p %p\n", &arr,&arr+2); // if 2000 is the base value than arr+1 gives 2020 and arr+2 gives 2040 as it repeats the same.
printf("%p %p\n", arr,arr+2); // if arr is written without [] it gives adress.
// // &arr gives the adress of whole array but arr gives the location of 1st element of array so a+2 will give location of 3rd element of the array.
    return 0;
}
/*Explanation:
&arr: This gives the address of the entire array arr. In C, when you use &arr, it treats the array as a whole, meaning it gives the address of the entire array (not just the first element).

&arr + 1: This moves the pointer to the address immediately after the entire array. Since arr is an array of 5 integers, &arr + 1 will move the pointer by the size of the whole array (i.e., by 5 * sizeof(int) bytes).

ASLR is the reason why memory addresses printed by &arr and &arr + 1 are different each time you run the program. 
Address Space Layout Randomization (ASLR), which randomizes the memory addresses used by your program to make it harder for attackers to predict where data or code will be located
*/ 