#include <stdio.h>

int main() {
    char date[11];  // Format: dd/mm/yyyy
    int day, month, year;

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);

    // Extract day, month, year
    sscanf(date, "%2d/%2d/%4d", &day, &month, &year);

    // Array of month abbreviations
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    if (month < 1 || month > 12) {
        printf("Invalid month.\n");
        return 0;
    }

    printf("Date in new format: %02d-%s-%04d\n", day, months[month - 1], year);

    return 0;
}
