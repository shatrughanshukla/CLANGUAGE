// // In pass by value we can't itereate the elements, {2, 4, 5} here suppose we passed 2 than now how we're going to iterate further?
// // i.e. we consider pass by reference, cause that uses addresses.
#include<stdio.h>
void myfunc(int *array, int size){  // // array[] will also work
    for (int i = 0; i < size; i++)
    {
        if (array[i] == 67)    // // arr[i] == == *(arr + i) // arr[] -- > *arr
        {                                // // } *(array+i) will also work.
            array[i] = 0;
        }
        
    }
    
}
int main(){
    int arr[] = {33, 56, 54, 67, 78};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("The size of arr is %d \n",n);  // // why we don't declare it inside the function ? -> as when we call arr void takes it as *array which is a pointer after which it size become 8 n 8 /4 = 2, here arr is whole array so size is 20.  
    myfunc(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}