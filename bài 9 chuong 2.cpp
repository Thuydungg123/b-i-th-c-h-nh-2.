#include <stdio.h>
#include <string.h>

void daoNguocChuoi(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
}

int main() {
    char s[100] = "Lap trinh C";
    printf("Chuoi goc:       %s\n", s);
    daoNguocChuoi(s);
    printf("Chuoi dao nguoc: %s\n", s);
    return 0;
}
