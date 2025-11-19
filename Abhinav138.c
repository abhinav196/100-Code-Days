#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    enum Role r;

    // Array of names matching enum values
    const char *roleNames[] = {
        "",         // index 0 (unused because enum starts from 1)
        "ADMIN",
        "USER",
        "GUEST"
    };

    printf("Enum values and names:\n");

    for (r = ADMIN; r <= GUEST; r++) {
        printf("%s = %d\n", roleNames[r], r);
    }

    return 0;
}
