
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
int N = 0;
// 方案1：主要思路： 将座位记录到数组
// 将数组排序，然后查找数组中重复的元素，记录到一个数组中，同时记录空闲位置
// 将重复的数组的seet值改为空闲的位置， 修改studentts中student的seet的值（问题：重复学生的seet怎么排）

// 方案2：主要思路：遍历students集合，查看

int main()
{
    int n;
    scanf(n);
    N = n;
    Student students[n] = {0};
    int seets[n] = {0};
    int arr[n] = {0};
    for(int i = 0; i < n; i++)
    {
        scanf("%d %s %d", students[i].id, students[i].name, students[i].seet);
        seets[i] = seet;
    }
    arr = sort(seets);  // 查找数组中重复的元素和未使用的位置,记录到一个数组中
    for (i = 0; i < n; i++) {
        if inArray(students[i], arr, n) {
            // 调整位置，将其插入空闲位置

        }
    }
    return 0;
}
bool inArray(Student s,int arr[N], int n) {
  for (i = 0; i < n; i++) {
      if arr[i] == s {
          return true
      }
  }
  return false
}
// 排序并记录重复位置h
int sort(int seets[N]) {
    int temp;
    int arr[N] = {0};
    int k = 0, j=0;
    for (int i=1; i < N; i++) { // 排序
        if seets[i] < seets[i-1] {  // 交换
            temp = seets[i];
            seets[i] = seets[i-1];
            seets[i-1] = temp
        }
    }
    // 记录重复位置以及未使用的位置
    int b[N] = {0};
    for (int i=1; i < N; i++) {
        if (seets[i] == seets[i-1]) { // 记录重复位置
            arr[k] = seet[i-1];
        } else {
            k++;
        }
        // TODO 未使用的位置如何记录？
    }
    return arr
}


