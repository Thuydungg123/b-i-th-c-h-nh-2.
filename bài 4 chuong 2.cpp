#include <stdio.h>
#include <string.h>

void xoaDauCachDau(char s[]) {
    int count = 0;
    // Ð?m s? kho?ng tr?ng ? ð?u
    while (s[count] == ' ') {
        count++;
    }
    // D?ch chuy?n chu?i
    if (count > 0) {
        int i = 0;
        while (s[i + count] != '\0') {
            s[i] = s[i + count];
            i++;
        }
        s[i] = '\0';
    }
}

int main() {
    char s[100] = "   Xin chao C!";
    printf("Chuoi ban dau: \"%s\"\n", s);
    
    xoaDauCachDau(s);
    printf("Sau khi xoa cach dau: \"%s\"\n", s);
    return 0;
}
