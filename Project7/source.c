#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void Task1();

int main()
{
    setlocale(LC_ALL, "RUS");

}

void Task1()
{
    int a, b;
    srand(time(NULL));
    b = rand() % 3 + 1;

    printf("����� ������� � '������, �������, ������'!\n");
    printf("��������:\n");
    printf("1.������\n");
    printf("2.�������\n");
    printf("3.������\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("�� ������� ������\n");
        break;
    case 2:
        printf("�� ������� �������\n");
        break;
    case 3:
        printf("�� ������� ������\n");
        break;
    default:
        printf("�������� ����� 1, 2 ��� 3\n");
        return 0;
    }

    switch (b)
    {
    case 1:
        printf("� ������ ������\n");
        break;
    case 2:
        printf("� ������ �������\n");
        break;
    case 3:
        printf("� ������ ������\n");
        break;
    }

    if (a == b) {
        printf("�����!\n");
    }
    else if ((a == 1 && b == 2) || (a == 2 && b == 3) || (a == 3 && b == 1)) {
        printf("�� ��������!\n");
    }
    else {
        printf("�� ���������!\n");
    }
}