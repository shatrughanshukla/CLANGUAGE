#include<stdio.h>
#include<string.h>
int main(){
char source[20] = "Hello ";
char target[] = "shatrughan ji";
strcat(source, target);   //strcat(destination, source)
printf("The value of target after concatenantion is %s\n",target);
printf("The value of source after concatenantion is %s\n",source);
/*After strcat(source, target): -- The source string will now hold "Hello shatrughan ji", since the target string is concatenated to it.
-- target remains unchanged because strcat() does not modify the source string.
-- The destination string must have enough space to hold the combined strings, meaning the total length of destination after concatenation must not exceed its allocated size.
*/
    return 0;
}