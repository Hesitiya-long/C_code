#define _CRT_SECURE_NO_WARNINGS

//
//#include <stdio.h>
//#include <string.h>
//
//typedef struct {
//    int id;
//    char name[20];
//    float score;
//} Student;
//
//int main() {
//    FILE* fp;
//    Student student[10], max_stu, min_stu;
//    int i;
//
//    fp = fopen("file1.dat", "w");
//    if (fp == NULL) {
//        printf("�޷����ļ���\n");
//        return 1;
//    }
//
//    printf("������10��ѧ����ѧ�š��������ɼ����磺1001 LiLi 80����\n");
//    for (i = 0; i < 10; i++) {
//        scanf("%d %s %f", &student[i].id, student[i].name, &student[i].score);
//        fprintf(fp, "%d %s %.1f\n", student[i].id, student[i].name, student[i].score);
//    }
//    fclose(fp);
//
//    fp = fopen("file1.dat", "r");
//    if (fp == NULL) {
//        printf("�޷����ļ���\n");
//        return 1;
//    }
//    fscanf(fp, "%d %s %f", &max_stu.id, max_stu.name, &max_stu.score);
//    min_stu = max_stu;
//
//    for (i = 1; i < 10; i++) {
//        fscanf(fp, "%d %s %f", &student[i].id, student[i].name, &student[i].score);
//        if (student[i].score > max_stu.score) {
//            max_stu = student[i];
//        }
//        if (student[i].score < min_stu.score) {
//            min_stu = student[i];
//        }
//    }
//    fclose(fp);
//
//    printf("��߷�ѧ����ѧ��=%d������=%s���ɼ�=%.1f\n",
//        max_stu.id, max_stu.name, max_stu.score);
//    printf("��ͷ�ѧ����ѧ��=%d������=%s���ɼ�=%.1f\n",
//        min_stu.id, min_stu.name, min_stu.score);
//
//    return 0;
//}




//#include <stdio.h>
//#include <string.h>
//
//typedef struct {
//    int id;
//    char name[20];
//    float score;
//} Student;
//
//int main() {
//    FILE* fp;
//    Student student, max_stu, min_stu;
//    int i = 0;
//    int first = 1; 
//
//    fp = fopen("file1.dat", "r");
//    if (fp == NULL) {
//        printf("�޷����ļ���\n");
//        return 1;
//    }
//
//    while (!feof(fp)) {
//        if (fscanf(fp, "%d %s %f", &student.id, student.name, &student.score) == 3) {
//            if (first) {
//                max_stu = min_stu = student;
//                first = 0;
//            }
//            else {
//                if (student.score > max_stu.score) {
//                    max_stu = student;
//                }
//                if (student.score < min_stu.score) {
//                    min_stu = student;
//                }
//            }
//            i++;
//        }
//    }
//    fclose(fp);
//
//    if (i > 0) {
//        printf("��ȡ��%d��ѧ������\n", i);
//        printf("��߷�ѧ����ѧ��=%d������=%s���ɼ�=%.1f\n",
//            max_stu.id, max_stu.name, max_stu.score);
//        printf("��ͷ�ѧ����ѧ��=%d������=%s���ɼ�=%.1f\n",
//            min_stu.id, min_stu.name, min_stu.score);
//    }
//    else {
//        printf("�ļ�������Чѧ�����ݣ�\n");
//    }
//
//    return 0;
//}


#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[20];
    float score;
} Student;

void swap(Student* a, Student* b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}
void sort_by_score(Student arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].score < arr[j + 1].score) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    FILE* fp1, * fp2, * fp3, * fp4;
    Student student[50];
    int n = 0;

    fp1 = fopen("file1.dat", "r");
    fp2 = fopen("file2.dat", "w");
    if (fp1 == NULL || fp2 == NULL) {
        printf("�޷����ļ���\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("�ļ�������ɣ�\n");

    fp2 = fopen("file2.dat", "r");
    if (fp2 == NULL) {
        printf("�޷���file2.dat��\n");
        return 1;
    }

    while (fscanf(fp2, "%d %s %f", &student[n].id, student[n].name, &student[n].score) == 3) {
        n++;
    }
    fclose(fp2);
    printf("��ȡ��%d��ѧ������\n", n);

    sort_by_score(student, n);

    fp3 = fopen("file3.dat", "w");
    if (fp3 == NULL) {
        printf("�޷���file3.dat��\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp3, "%d %s %.1f\n", student[i].id, student[i].name, student[i].score);
    }
    fclose(fp3);
    printf("�ı��������Ѵ���file3.dat\n");

    fp4 = fopen("file4.dat", "wb");
    if (fp4 == NULL) {
        printf("�޷���file4.dat��\n");
        return 1;
    }

    fwrite(student, sizeof(Student), n, fp4);
    fclose(fp4);
    printf("�������������Ѵ���file4.dat\n");

    return 0;
}