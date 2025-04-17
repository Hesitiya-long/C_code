#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 20 // ���峣����ʾ�ַ�������󳤶�

// �������������ڽ��������ַ���
void swap(char* str1, char* str2);

int main() {
    char str1[MAX_LEN], str2[MAX_LEN], str3[MAX_LEN];

    // ��ʾ�û������ַ���
    printf("������3���ַ�����ÿ���ַ����Իس�����:\n");

    // ʹ�� fgets ��ȡ���벢ȥ�����з�
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // ȥ�����з�

    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // ȥ�����з�

    fgets(str3, sizeof(str3), stdin);
    str3[strcspn(str3, "\n")] = '\0'; // ȥ�����з�

    // ���ַ�����������
    if (strcmp(str1, str2) > 0) swap(str1, str2);
    if (strcmp(str2, str3) > 0) swap(str2, str3);
    if (strcmp(str1, str2) > 0) swap(str1, str2);

    // ��������Ľ��
    printf("�����Ľ��Ϊ��\n");
    printf("%s\n%s\n%s\n", str1, str2, str3);

    return 0;
}

// ���������ַ���������
void swap(char* str1, char* str2) {
    char temp[MAX_LEN];
    strcpy(temp, str1); // �� str1 ���Ƶ���ʱ�ַ��� temp
    strcpy(str1, str2); // �� str2 ���Ƶ� str1
    strcpy(str2, temp); // �� temp ���Ƶ� str2
}
