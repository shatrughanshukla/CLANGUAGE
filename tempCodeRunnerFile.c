#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data data;  // Declare a union variable
    
    data.i = 10;
    printf("data.i = %d\n", data.i);  // Outputs: 10
    
    data.f = 220.5;
    printf("data.f = %.2f\n", data.f);  // Outputs: 220.50
    
    // Notice that the value of data.i has been overwritten when we assigned data.f
    printf("data.i = %d\n", data.i);  // The value is now overwritten (undefined value)
    
    data.c = 'A';
    printf("data.c = %c\n", data.c);  // Outputs: A
    
    return 0;
}
