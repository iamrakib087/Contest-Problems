#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    while (a--) {
        int x;
        scanf("%d", &x);
        int r=1,t=x-1;
        printf("%d %d\n",r,t);
    }
    return 0;
}
