#include <stdio.h>

enum Demo {
    A = 5,
    B = 10,
    C = 20
};

int main() {
    printf("Enum values:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    return 0;
}
