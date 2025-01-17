#include<stdio.h>
// int main(){
// int arr[5];
// arr++;  // we can't do this cause how can we increase the memory allocated i.e. not correct.
// printf("%d",arr);
//     return 0;
// }
int main(){
int arr[5] = {20, 43, 343, 23, 21};
arr[0]++;                                 // // i++ and ++i
printf("%d",arr[0]);
    return 0;
}