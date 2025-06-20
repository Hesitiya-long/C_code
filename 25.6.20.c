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
//        printf("无法打开文件！\n");
//        return 1;
//    }
//
//    printf("请输入10个学生的学号、姓名、成绩（如：1001 LiLi 80）：\n");
//    for (i = 0; i < 10; i++) {
//        scanf("%d %s %f", &student[i].id, student[i].name, &student[i].score);
//        fprintf(fp, "%d %s %.1f\n", student[i].id, student[i].name, student[i].score);
//    }
//    fclose(fp);
//
//    fp = fopen("file1.dat", "r");
//    if (fp == NULL) {
//        printf("无法打开文件！\n");
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
//    printf("最高分学生：学号=%d，姓名=%s，成绩=%.1f\n",
//        max_stu.id, max_stu.name, max_stu.score);
//    printf("最低分学生：学号=%d，姓名=%s，成绩=%.1f\n",
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
//        printf("无法打开文件！\n");
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
//        printf("读取到%d个学生数据\n", i);
//        printf("最高分学生：学号=%d，姓名=%s，成绩=%.1f\n",
//            max_stu.id, max_stu.name, max_stu.score);
//        printf("最低分学生：学号=%d，姓名=%s，成绩=%.1f\n",
//            min_stu.id, min_stu.name, min_stu.score);
//    }
//    else {
//        printf("文件中无有效学生数据！\n");
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
        printf("无法打开文件！\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("文件复制完成！\n");

    fp2 = fopen("file2.dat", "r");
    if (fp2 == NULL) {
        printf("无法打开file2.dat！\n");
        return 1;
    }

    while (fscanf(fp2, "%d %s %f", &student[n].id, student[n].name, &student[n].score) == 3) {
        n++;
    }
    fclose(fp2);
    printf("读取到%d个学生数据\n", n);

    sort_by_score(student, n);

    fp3 = fopen("file3.dat", "w");
    if (fp3 == NULL) {
        printf("无法打开file3.dat！\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp3, "%d %s %.1f\n", student[i].id, student[i].name, student[i].score);
    }
    fclose(fp3);
    printf("文本排序结果已存入file3.dat\n");

    fp4 = fopen("file4.dat", "wb");
    if (fp4 == NULL) {
        printf("无法打开file4.dat！\n");
        return 1;
    }

    fwrite(student, sizeof(Student), n, fp4);
    fclose(fp4);
    printf("二进制排序结果已存入file4.dat\n");

    return 0;
}