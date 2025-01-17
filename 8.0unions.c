// // padding in structures in c.
#include<stdio.h>
#include<string.h>
struct data{
    int i;  // 4
    char f;// 4
    char str[20];// 20
    double d;//8
};
// struct st
// {
//     int x;
//     static int y; // // static variables are global variables and are not part of the structure, they are shared by diff structures diff type of things.
//     // // in c static under struct will give error and in cpp it runs but the answer will be 4 cause the memory allocated for static variable is not there for st it's a globla thing, it's stored somewhere else.
// };
int main(){
struct data Data;
printf("The size of structure data is %d \n",(int)sizeof(Data)); // (struct data)
// printf("The size of struct st is %d \n",(int)sizeof(struct st));
    return 0;


}
// // structures are must to be declared as a global var, not local.

