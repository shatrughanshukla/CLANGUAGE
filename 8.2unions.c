#include<stdio.h>
#include<string.h>
union test{
    int x;
    char arr[4];
    int y;
};
int main(){
union test t1;
t1.x = 0;
t1.arr[1] = 'G';
printf("%s",t1.arr);
    return 0;
}
/*
since x and arr[4] shares the same memory, when we set = 0, all characters of arr set to 0.
0 is ascii value of \0.
when we do "t.arr[2]=G",arr[] becomes "\0G\0\0".
when we print a string using "%s",
the printf funtion starts from the first character and starts printing till it finds \0.
since the first character itself is \0, nothing is printed.
*/