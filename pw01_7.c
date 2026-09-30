#include <stdio.h>

void load_mem() {
    printf("MEM");
}

void load_cpu() {
    printf("CPU");
}

int main() {
    printf("BOOT: ");
    load_mem();
    printf(" OK ");
    load_cpu();
    printf(" OK:END\n");

    return 0;
}
