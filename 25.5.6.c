#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    char c;
    int letterCount = 0, spaceCount = 0, digitCount = 0, otherCount = 0;

    printf("������һЩ�ַ���\n");

    while ((c = getchar()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letterCount++;
        }
        else if (c >= '0' && c <= '9') {
            digitCount++;
        }
        else if (c == ' ') {
            spaceCount++;
        }
        else {
            otherCount++;
        }
    }

    printf("��ĸ = %d, ���� = %d, �ո� = %d, ���� = %d\n", letterCount, digitCount, spaceCount, otherCount);
    return 0;
}
