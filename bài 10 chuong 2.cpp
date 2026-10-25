#include <stdio.h>
#include <string.h>

// Hàm tra ve con tro chua tu "Tên" trong chuoi ho tên
char* layTen(char s[]) {
    int len = strlen(s);
    
    // Xóa kho?ng tr?ng th?a ? cu?i chu?i (n?u có)
    while (len > 0 && s[len - 1] == ' ') {
        s[len - 1] = '\0';
        len--;
    }
    
    // Tim vi trí khoang trang cuoi cùng tu phai sang trái bang hàm strrchr
    char* p = strrchr(s, ' ');
    
    if (p == NULL) {
        return s; // Neu chuoi chi có 1 tu duy nhat
    } else {
        return p + 1; // Tra ve chuoi bat ðau tu sau khoang trang cuoi cùng
    }
}

int main() {
    char s[100] = "Tran Thi Mai Huong";
    printf("Ho va ten: %s\n", s);
    printf("Ten:       %s\n", layTen(s));
    return 0;
}
