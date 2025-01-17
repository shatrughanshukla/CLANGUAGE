#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "Prepsters";
    char s2[] = "Prepsters";

    int i = strcmp(s1,s2);

    if (i == 0)
    {
        printf("s1 and s2 are equal\n");
    }
    else
        printf("s1 and s2 aren't equal\n");

    printf("The strcmp value is %d\n",i);

    return 0;
}