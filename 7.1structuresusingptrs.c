// // using pointers
#include<stdio.h>
struct information{
int rollno;
char name[20];
char city[20];
};
int main(){

struct information *s1ptr, s1;
s1ptr = &s1;
/*
s1ptr: This is a pointer of type struct information, meaning it can store the address of a variable of type struct information.
s1: This is a regular variable of type struct information.
s1ptr = &s1: Here, the pointer s1ptr is initialized to point to the address of the variable s1.
*/

printf("roll no\n");
scanf("%d",&s1ptr->rollno);
/*
s1ptr->rollno: The -> operator is used to access members of the structure via the pointer s1ptr.
s1ptr->rollno is equivalent to (*s1ptr).rollno.
It accesses the rollno member of the structure s1 that s1ptr points to.
&s1ptr->rollno: The scanf function needs the address of rollno to store the input, so you provide the address of s1ptr->rollno (which is &s1.rollno).
*/
printf("name\n");
scanf("%s",s1ptr->name);
printf("city\n");
scanf("%s",s1ptr->city);

printf("name %s\t roll no %d\t city %s\t ",s1ptr->name, s1ptr->rollno, s1ptr->city);

    return 0;
}
/*
Pointer Basics: A pointer is a variable that stores the address of another variable. In this case, s1ptr stores the address of the structure s1.

Dereferencing the Pointer:

When you use the -> operator, you are dereferencing the pointer, i.e., accessing the members of the structure that the pointer is pointing to.
The syntax s1ptr->rollno is shorthand for (*s1ptr).rollno, which means "access the rollno member of the structure that s1ptr points to."

*/

// // according to me whenever we use * when declaring a datatype it acts as pointer otherwise it acts as dereferencer.