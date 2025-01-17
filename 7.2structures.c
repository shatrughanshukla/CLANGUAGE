#include<stdio.h>
struct information{
    int rollno;
    char name[20];
    char city[20];

};
int main(){
struct information student[1000];
int i,n;
printf("Enter the total no of students :\n");
scanf("%d",&n);
for ( i = 0; i < n; i++)
{
    printf("The information of student %d is :\n",(i+1));

    scanf("%d",&student[i].rollno);
    scanf("%s",student[i].name);
    scanf("%s",student[i].city);
}
for ( i = 0; i < n; i++)
{
    printf("The details of student %d is : \n",(i+1));
    printf("roll no %d\t name %s\t city %s\t\n",student[i].rollno,student[i].name,student[i].city);
}
    return 0;
}
