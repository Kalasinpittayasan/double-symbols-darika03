#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    if (n % 2 != 0) {
        printf("Wrong input");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("%c", i % 2 == 0 ? '*' : '+');
    }
    return 0;
}
