#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Day d;

    printf("Days of the Week:\n");
    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("%d -> ", d);

        switch (d) {
            case SUNDAY:    printf("SUNDAY\n"); break;
            case MONDAY:    printf("MONDAY\n"); break;
            case TUESDAY:   printf("TUESDAY\n"); break;
            case WEDNESDAY: printf("WEDNESDAY\n"); break;
            case THURSDAY:  printf("THURSDAY\n"); break;
            case FRIDAY:    printf("FRIDAY\n"); break;
            case SATURDAY:  printf("SATURDAY\n"); break;
        }
    }

    return 0;
}
