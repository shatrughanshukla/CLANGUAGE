// #include<stdio.h>
// int main(){
// int x = 50;
// printf("The value of address in hexadecimal is %p\n",&x);
// printf("The value at %p adress is : %d \n",&x,*&x); // *&x value at address of x. // // * -> derefference // //
//     return 0;
// }

// // int *p; we'll not declare a pointer like this. * means dereference.
// // Int the concept of pointers we're creting a variable say p which just so happens to be a pointer, e.g
// // int x; here we're creating a variable of int type.
// /// int* ptr; here we've declared a variable which basically is a pointer.  ***** use this always ****
// // ptr is of 8 bytes on 64 bit device and 4 bytes on 32 bit device.
// // itn *p = &x; --> here u're intialising a variable of int type and u're saying value at ptr and thn u're giving the value of ampercent x.
// // int* p = &x; --> I'm declaring a variable p of pointer type and giving the value of ampercent x to it.
// // * and & are just like + - multiply.

#include<stdio.h>
int main(){
    int x = 13;
    int* ptr;
    ptr = &x;
    printf("%p\n",&x);
    printf("%p\n",ptr);
    printf("%p\n",&ptr);
    printf("%d\n",*ptr);

    *ptr = 23;
    printf("%d\n",x);
    return 0;
}