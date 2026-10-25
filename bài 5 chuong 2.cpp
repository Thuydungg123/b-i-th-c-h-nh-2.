#include <stdio.h>
#include <string.h>

// Hàm xóa khoang trang o cuoi chuoi (Right Trim)
void xoaKhoangTrangCuoi(char s[]) {
    int len = strlen(s);
    if (len == 0) return; // Chu?i r?ng th? không làm g?

    // Bat ðau tu ky tu cuoi cùng cua chuoi
    int i = len - 1;
    // Lùi dan neu gap khoang trang
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    // Ðat ky tu ket thúc chuoi vào vi trí moi
    s[i + 1] = '\0';
}

int main() {
    // Thêm các dau gach ðung '|' ðe de nhin thay khoang trang
    char s1[] = "Hello World   ";
    printf("Chuoi ban dau: |%s|\n", s1);
    xoaKhoangTrangCuoi(s1);
    printf("Chuoi sau khi xoa: |%s|\n", s1);

    char s2[] = "  Lap trinh C     ";
    printf("\nChuoi ban dau: |%s|\n", s2);
    xoaKhoangTrangCuoi(s2);
    printf("Chuoi sau khi xoa: |%s|\n", s2);

    return 0;
}
