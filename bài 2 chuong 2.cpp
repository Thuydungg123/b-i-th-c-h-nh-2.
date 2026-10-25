#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int count[256] = {0}; // M?ng ð?m s? l?n xu?t hi?n c?a t?ng k? t? theo m? ASCII

    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Xóa k? t? xu?ng d?ng '\n' n?u có do fgets nh?n vào
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Ð?m s? l?n xu?t hi?n c?a m?i k? t?
    for (int i = 0; i < len; i++) {
        unsigned char ch = str[i];
        count[ch]++;
    }

    // In k?t qu? th?ng kê
    printf("\nThong ke so lan xuat hien cua tung ky tu:\n");
    for (int i = 0; i < len; i++) {
        unsigned char ch = str[i];
        // Ch? in l?n ð?u tiên g?p k? t? ðó ð? tránh in l?p l?i
        if (count[ch] > 0) {
            if (ch == ' ') {
                printf("Ky tu 'khoang trang': %d lan\n", count[ch]);
            } else {
                printf("Ky tu '%c': %d lan\n", ch, count[ch]);
            }
            count[ch] = 0; // Ðánh d?u ð? in xong k? t? này
        }
    }

    return 0;
}
