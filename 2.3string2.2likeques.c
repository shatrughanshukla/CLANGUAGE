#include<stdio.h>
void myfunc(char *str){
    int i = 0;
    while (str[i]!= '\0')
    {
        if (str[i] == 'l')
        {
            str[i] = 's';
        }
        i++;
    }
 

}
int main(){
char str[] = "shivam mittal";
myfunc(str);
printf("%s",str);

    return 0;
}