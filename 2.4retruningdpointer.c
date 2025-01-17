#include<stdio.h>
char* myfunc(char *str){
    int i = 0;
    while (*(str+i)!= '\0')
    {
        if (str[i] == 'l')
        {
            *(str+i) = 's';
        }
        i++;
    }
 
    return str; 
}
int main(){
char str[] = "shivam mittal";
char* p;
p = myfunc(str);
printf("%s",str);

    return 0;
}