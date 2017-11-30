#include <stdio.h>

void hijack();

__attribute__ ((constructor)) void init(void) {
    hijack();
}

char* gets(char *s) {
    printf("hijack gets function successfully\n");
}

void hijack() {
    // do something
}
