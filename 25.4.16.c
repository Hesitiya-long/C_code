#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int n = 0;  // n ��ʾ��ʼ������
    int i, count;
    int found = 0;

    while (!found) {
        n += 1;  // �����ʼ������
        count = n;
        for (i = 0; i < 5; i++) {
            if ((count - 1) % 5 == 0) {
                count = (count - 1) / 5 * 4;
            }
            else {
                break;
            }
        }
        if (i == 5) {
            found = 1;
        }
    }

    printf("������ %d �����ӡ�\n", n);
    return 0;
}
