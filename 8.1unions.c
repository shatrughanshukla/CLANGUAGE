#include<stdio.h>
#include<string.h>
struct st{
    short s2[5];
    union {
        float f;
        long l;
    }u;
};
int main(){
printf("%d\n",(int)sizeof(struct st));
    return 0;
} 