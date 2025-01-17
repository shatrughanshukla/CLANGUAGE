#include<stdio.h>
struct information{
int rollno;
char name[20];
char city[20];
}s1, s2;
int main(){
struct information s1, s2;

printf("roll no s1\n");
scanf("%d",&s1.rollno);
printf("roll no s2\n");
scanf("%d",&s2.rollno);
printf("name s1\n");
scanf("%s",s1.name);
printf("name s2\n");
scanf("%s",s2.name);
printf("city s1\n");
scanf("%s",s1.city);
printf("city s2\n");
scanf("%s",s2.city);

printf("name of s1 %s\t roll no of s1 %d\t city of s1 %s\t \n",s1.name, s1.rollno, s1.city);
printf("name of s2 %s\t roll no of s2 %d\t city of s2 %s\t \n",s2.name, s2.rollno, s2.city);

    return 0;
}