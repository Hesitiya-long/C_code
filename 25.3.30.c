#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// �����Ƿ������Ϸ���߼�
int ask_to_play_again() {
    char begin;
    printf("��Ҫ��ս��߼��𲻣�Y/N \n");
    scanf(" %c", &begin);  // ע��ǰ���и��ո�ȷ�������ϴ�����Ļ��з�
    if (begin == 'Y' || begin == 'y') {
        return 1;  // �û�ѡ�������Ϸ
    }
    printf("лл���ټ�!\n");
    return 0;  // �û�ѡ���˳���Ϸ
}

// ��Ϸ�������߼�
void caizi(void) {
    int n;
    int count = 1;
    srand((unsigned int)time(NULL));  // ���Ͻ��ش������������
    int m = (rand() % 100) + 1;

    printf("��Ϸ��ʼ������������:\n");

    while (1) {
        scanf("%d", &n);

        if (n == m) {
            printf("�����ˣ�ʹ���� %d �Σ�\n", count);

            // ���ݲ²������������ͬ������
            if (count == 1) {
                printf("�����������ˣ�Ĥ��\n");
            }
            else if (count <= 5) {
                printf("�������������ˣ��ǳ���\n");
            }
            else if (count <= 10) {
                printf("���Ǵ�ʦ�������ˣ�����\n");
            }
            else if (count <= 15) {
                printf("������ʯ�������ˣ�ŭ��\n");
            }
            else {
                printf("��ļ������д����Ŷ��\n");
            }

            // ѯ���Ƿ������Ϸ
            if (ask_to_play_again()) {
                caizi();  // ���¿�ʼ��Ϸ
            }
            break;
        }
        else if (n < m) {
            puts("̫С��!");
            puts("��������:");
        }
        else {
            puts("̫����!");
            puts("��������:");
        }

        count++;  // ������
    }
}

int main(void) {
    caizi();
    return 0;
}
