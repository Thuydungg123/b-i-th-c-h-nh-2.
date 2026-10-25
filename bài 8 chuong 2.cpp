#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuanHoaTenRieng(char s[]) {
    int n = strlen(s);
    
    // 1. Chuy?n toàn b? chu?i v? ch? thý?ng trý?c
    for (int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
    }

    int i = 0, j = 0;
    // B? qua kho?ng tr?ng ? ð?u chu?i
    while (s[i] == ' ' && s[i] != '\0') {
        i++;
    }

    int viTriDauTu = 1; // C? ðánh d?u b?t ð?u c?a m?t t? m?i
    while (i < n) {
        if (s[i] == ' ') {
            // Ch? gi? l?i m?t kho?ng tr?ng duy nh?t gi?a các t?
            if (s[i - 1] != ' ') {
                s[j++] = ' ';
            }
            viTriDauTu = 1;
        } else {
            if (viTriDauTu) {
                s[j++] = toupper(s[i]); // Vi?t hoa ch? cái ð?u t?
                viTriDauTu = 0;
            } else {
                s[j++] = s[i]; // Các k? t? sau gi? nguyên (thý?ng)
            }
        }
        i++;
    }
    
    // Xóa kho?ng tr?ng th?a ? cu?i chu?i n?u có
    if (j > 0 && s[j - 1] == ' ') {
        j--;
    }
    s[j] = '\0'; // K?t thúc chu?i
}

int main() {
    char s[100] = "  ngUYen    vAN    aN  ";
    printf("Truoc khi chuan hoa: \"%s\"\n", s);
    chuanHoaTenRieng(s);
    printf("Sau khi chuan hoa:   \"%s\"\n", s);
    return 0;
}
