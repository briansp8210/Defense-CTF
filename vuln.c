#include <stdio.h>

void shell(){
    system("/bin/sh");
}

int main(){
    char buffer[20];
    gets(buffer);
    return 0;
}
