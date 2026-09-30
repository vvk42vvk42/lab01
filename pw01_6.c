#include <stdio.h>

#define DAYS_CONST 365
#define HOURS_CONST 24
#define SECONDS_CONST 3600

int main() {
    int years = 18;
    int days = years * DAYS_CONST;
    long hours = days * HOURS_CONST;
    long seconds = hours * SECONDS_CONST;

    printf("Тики: %ld | Часы: %ld | Дни: %d | Годы: %d\n", seconds, hours, days, years);

    return 0;
}

