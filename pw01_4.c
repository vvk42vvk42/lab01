#include <stdio.h>

int main() {
    int years;
    int days_per_year;
    int total_days;

    years = 3;
    days_per_year = 365;
    total_days = years * days_per_year;

    printf("YEARS = %d\n", years);
    printf("DAYS PER YEAR = %d\n", days_per_year);
    printf("TOTAL DAYS = %d\n", total_days);

    return 0;
}
