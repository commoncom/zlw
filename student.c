
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STUDENT_NUM 50


bool IsInSet(int pos, int number)
{
    for (int i = 0; i < pos; i++)
    {
        if (student[i] == number)
        {
            return true;
        }
    }
    return false;
}

void RandSeat(Student [] students, int n)
{
    for int i=0; i < n; i++ {

    };
    if (pos == STUDENT_NUM)
    {
        return;
    }
    srand((unsigned int)time(NULL));

    while (IsInSet(pos, studentNum) || (pos > 0 && (studentNum == student[pos - 1] + 1 || studentNum == student[pos - 1] - 1)))
    {
        studentNum = rand() % STUDENT_NUM + 1;
    }
    student[pos] = studentNum;
    RandSeat(pos + 1);
}
struct Student {
    int id
    char name
    int seet
};
int main()
{
    int n; // 人数
    scanf(n); // 输入人数
    Student students[n] = {0};
    for(int i = 0; i < n; i++)
    {
        scanf("%d %s %d", students[i].id, students[i].name, students[i].seet);
    }
    RandSeat(students, n);
    printf("%d\n", student);
    return 0;
}
