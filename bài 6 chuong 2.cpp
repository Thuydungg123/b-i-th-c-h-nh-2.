#include <stdio.h>
#include <string.h>

// Hàm xóa kho?ng tr?ng th?a ? gi?a các t?
void chuanHoaKhoangTrangGiua(char s[]) {
    int i, j = 0;
    int len = strlen(s);
    int inWord = 0; // Bi?n c? ð? ðánh d?u ðang ? trong m?t t?

    for (i = 0; i < len; i++) {
        // N?u k? t? hi?n t?i không ph?i là kho?ng tr?ng
        if (s[i] != ' ') {
            s[j++] = s[i]; // Chép k? t? vào v? trí m?i
            inWord = 1;     // Ðánh d?u ðang ? trong t?
        } 
        // N?u là kho?ng tr?ng và trý?c ðó ðang ? trong m?t t? (kho?ng tr?ng ð?u tiên sau t?)
        else if (inWord == 1) {
            s[j++] = ' '; // Chép m?t kho?ng tr?ng duy nh?t
            inWord = 0;    // Ðánh d?u ð? ra ngoài t?
        }
        // Các kho?ng tr?ng th?a ti?p theo s? b? b? qua
    }

    // N?u k? t? cu?i cùng c?a chu?i m?i là kho?ng tr?ng (do chu?i g?c có kho?ng tr?ng ? cu?i)
    // th? ta c?n xóa nó ði.
    if (j > 0 && s[j-1] == ' ') {
        s[j-1] = '\0';
    } else {
        s[j] = '\0'; // K?t thúc chu?i thông thý?ng
    }
}

int main() {
    char s1[] = "Hello     World  Test";
    printf("Chuoi ban dau: |%s|\n", s1);
    chuanHoaKhoangTrangGiua(s1);
    printf("Chuoi sau khi xoa: |%s|\n", s1);

    char s2[] = "  Ngay  hom nay    troi   dep   tooool  ";
    printf("\nChuoi ban dau: |%s|\n", s2);
    // Ð? ?: Chu?i này có kho?ng tr?ng ? Ð?U và CU?I, hàm này ch? x? l? GI?A.
    // K?t qu? s? gi? l?i t?i ða 1 kho?ng tr?ng ? ð?u ho?c cu?i n?u có.
    chuanHoaKhoangTrangGiua(s2);
    printf("Chuoi sau khi xoa: |%s|\n", s2);

    return 0;
}
