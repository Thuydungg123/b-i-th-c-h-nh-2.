#include <stdio.h>
#include <string.h>

void xoaKyTu(char s[], int pos) {
    int len = strlen(s);
    if (pos < 0 || pos >= len) return; // V? trí không h?p l?
    
    for (int i = pos; i < len; i++) {
        s[i] = s[i + 1];
    }
}

int main() {
    char s[100];
    int pos;
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; // Xóa k? t? xu?ng d?ng

    printf("Nhap vi tri can xoa (0-%d): ", (int)strlen(s) - 1);
    scanf("%d", &pos);

    xoaKyTu(s, pos);
    printf("Chuoi sau khi xoa: \"%s\"\n", s);
    return 0;
}
