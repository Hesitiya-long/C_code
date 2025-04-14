#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <math.h>
#include <string.h>

// ��������
int octalToDecimal(const char* octalNumber);

int main() {
    char octalNumber[100];

    // ����˽�����
    printf("������һ���˽�����: ");
    scanf("%s", octalNumber);

    // ת��Ϊʮ����
    int decimalNumber = octalToDecimal(octalNumber);

    // ������
    printf("�˽����� %s ת��Ϊʮ��������: %d\n", octalNumber, decimalNumber);

    return 0;
}

// �˽���ת��Ϊʮ���Ƶĺ���
int octalToDecimal(const char* octalNumber) {
    int decimalNumber = 0;
    int length = strlen(octalNumber);

    for (int i = 0; i < length; i++) {
        int digit = octalNumber[i] - '0'; // ���ַ�ת��Ϊ����
        decimalNumber += digit * pow(8, length - i - 1);
    }

    return decimalNumber;
}
