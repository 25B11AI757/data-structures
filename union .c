#include <stdio.h>
#include <string.h>

// Define a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    // Assign integer value
    data.i = 10;
    printf("data.i = %d\n", data.i);

    // Assign float value (overwrites integer)
    data.f = 220.5;
    printf("data.f = %.2f\n", data.f);

    // Assign string value (overwrites float)
    strcpy(data.str, "Hello");
    printf("data.str = %s\n", data.str);

    // Notice how only the last assigned value is valid
    printf("\nMemory size occupied by union: %lu\n", sizeof(data));

    return 0;
}
