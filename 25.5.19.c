#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>

int main() {
    // ����һ���ַ�ָ�����飬�洢�ַ�������
    const char* s[] = { "man", "woman", "girl", "boy", "sister" };
    // ����һ��ָ���ַ�ָ���ָ�����
    const char** q;
    int k;

    // �������飬��ͨ��ָ��ָ���ָ�����ÿ���ַ���
    for (k = 0; k < 5; k++) {
        q = &s[k]; // ��ָ�� q ָ���ַ�ָ�������е� k ��Ԫ�صĵ�ַ
        printf("%s\n", *q); // ������ q�������Ӧ���ַ���
    }

    return 0;
}