#include <stdio.h>
#include <string.h>
int main() {
    int n;
    char a[21];
    char b[21];
    scanf("%d",&n);
    for(int i=0; i < 2 * n - 1; i++) {
        scanf("%s", b);
        for(int j = 0; j < strlen(b); j++){
            a[j] ^= b[j];
        }
    }
    printf("%s", a);
    return 0;
}
