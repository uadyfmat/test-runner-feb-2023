#include <stdio.h>
#define MAX 30

int main() {
    char text[MAX];
    fgets(text, MAX, stdin);
    printf("%s", text);

    return 0;
}
