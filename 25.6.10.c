#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
    int num;
    char name[8];
    char sex;
    int age;
    double grade;
};

int main() {
    struct student students[] = {
        {101, "Zhang", 'M', 19, 95.6}, {102, "Wang", 'F', 18, 92.2},
        {103, "Zhao", 'M', 19, 85.7}, {104, "Li", 'M', 20, 96.3},
        {105, "Gao", 'M', 19, 90.2}, {106, "Lin", 'M', 18, 91.2},
        {107, "Ma", 'F', 18, 98.7}, {108, "Zhen", 'M', 21, 88.7},
        {109, "Xu", 'M', 19, 90.1}, {110, "Mao", 'F', 22, 94.7}
    };
    int n = sizeof(students) / sizeof(students[0]);
    struct student* ptr[10];
    for (int i = 0; i < n; i++) {
        ptr[i] = &students[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ptr[j]->grade > ptr[j + 1]->grade) {
                struct student* temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
    printf("排序前：\n");
    printf("学号\t姓名\t性别\t年龄\t成绩\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%c\t%d\t%.1f\n", students[i].num, students[i].name,
            students[i].sex, students[i].age, students[i].grade);
    }
    printf("\n排序后（按成绩升序）：\n");
    printf("学号\t姓名\t性别\t年龄\t成绩\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%c\t%d\t%.1f\n", ptr[i]->num, ptr[i]->name,
            ptr[i]->sex, ptr[i]->age, ptr[i]->grade);
    }

    return 0;
}