// // pass by value
// #include<stdio.h>
// void swap(int x, int y){  
//     int temp = x;
//     x = y;
//     y = temp;
// }
// int main(){
// int a =  323 , b = 455;
// printf("The value of a and b before swap is %d and %d \n",a,b);
// swap(a,b);
// printf("The value of a and b after swap is %d and %d \n",a,b);

//     return 0;
// }

// // pass by reference / swap by reference is available in cpp not c so the code will give error.

// #include<stdio.h>
// void swap(int &x, int &y){  
//     int temp = x;
//     x = y;
//     y = temp;
// }
// int main(){
// int a =  323 , b = 455;
// printf("The value of a and b before swap is %d and %d \n",a,b);
// swap(a,b);
// printf("The value of a and b after swap is %d and %d \n",a,b);

//     return 0;
// }

/*
The correct approach (and the one you initially showed) uses references, which automatically give you access to the original variables.
There is no need to deal with addresses or pointers.

The & symbol in the function signature void swap(int &x, int &y) means x and y are references, not pointers.
A reference in C++ allows you to directly access and modify the original variable without needing explicit pointers or dereferencing (*).

x and y in the function are references to a and b.
When you do x = y, it's as if you are directly doing a = b.
There’s no need to work with addresses (&x, &y) because references already give you direct access to the variables.
That's why the working version is:

void swap(int &x, int &y){  
    int temp = x;
    x = y;
    y = temp;
}
In summary, references in C++ let you access the original variables directly, and that’s why you use the variables x and y directly instead of trying to swap their addresses.
*/

// // pass by pointers.
#include<stdio.h>
// // void swap(int *4000, int *4004)
void swap(int *x, int *y){  // // we don't write int* because we're not passing pointers we're passing addresses and those addresses we're masking with pointers.
    int temp = *x; // // x is still 4000so we need to dereference it, similarly for y.
    *x = *y;
    *y = temp;
}
int main(){
int a =  323 , b = 455;
printf("The value of a and b before swap is %d and %d \n",a,b);
swap(&a,&b);
printf("The value of a and b after swap is %d and %d \n",a,b);

    return 0;
}