#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int a = 1, b = 1, temp, i;
    printf("%12d%12d", a, b); // ���ǰ����

    for (i = 3; i <= 20; i += 2)
    {
        temp = a + b; // ������һ��
        printf("%12d", temp); // �����һ��

        a = b; // ����a
        b = temp; // ����b

        temp = a + b; // �ټ�����һ��
        printf("%12d\n", temp); // ���������

        a = b; // ����a
        b = temp; // ����b
    }

    return 0;
}
