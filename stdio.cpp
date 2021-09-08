#include <stdio.h>

int main() {
    for (int i = 0; i < 1e7; ++i) {
        int tmp;
        scanf("%d", &tmp);
        ++tmp;
        printf("%d\n", tmp);
    }
}
