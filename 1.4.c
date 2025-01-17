#include<stdio.h>
void print(int arr[]) {
int n = sizeof(arr)/sizeof(arr[0]);
// // arr is  &arr, and we reference an address using a pointer the size of pointere is genrally 8 so 8/4 = 2.
int i;
for (int i = 0; i < n; i++)
{
    printf("%d\t",arr[i]);
}
}

int main(){
int array[] = {23, 32, 45, 67, 54, 89};
print(array);
    return 0;
}