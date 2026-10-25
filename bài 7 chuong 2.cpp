#include <stdio.h>
#include <string.h>

// Hàm ðem so tu trong chuoi
int demSoTu(char s[]) {
    int len = strlen(s);
    int count = 0;
    int trongTu = 0; // 0: ðang ngoài tu (gap khoang trang/tab), 1: ðang trong tu 

    for (int i = 0; i < len; i++) {
        // Kiem tra neu ky tu KHÔNG phai khoang trang và KHÔNG ph?i tab
        if (s[i] != ' ' && s[i] != '\t') {
            // Neu truoc ðó ðang o ngoài tu, thi ðây là bat ðau mot tu moi
            if (trongTu == 0) {
                count++;
                trongTu = 1; // Ðánh dau ða vào trong tu 
            }
        } 
        // Neu gap khoang trang hoac tab
        else {
            trongTu = 0; // Ðánh dau ða ra ngoài tu 
        }
    }
    return count;
}

int main() {
    char s1[] = "Hello World";
    printf("Chuoi: \"%s\" -> So tu: %d\n", s1, demSoTu(s1));

    char s2[] = "  Lap\ttrinh   C co ban  ";
    printf("Chuoi: \"%s\" (co tab va khoang trang thua) -> So tu: %d\n", s2, demSoTu(s2));

    char s3[] = "OneWordOnly";
    printf("Chuoi: \"%s\" -> So tu: %d\n", s3, demSoTu(s3));

    char s4[] = "   "; // Chuoi chi có khoang trang
    printf("Chuoi: \"%s\" -> So tu: %d\n", s4, demSoTu(s4));

    return 0;
}
