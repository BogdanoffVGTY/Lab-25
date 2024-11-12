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

    printf("Давай сыграем в 'Камень, ножницы, бумага'!\n");
    printf("Выберите:\n");
    printf("1.Камень\n");
    printf("2.Ножницы\n");
    printf("3.Бумага\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Вы выбрали камень\n");
        break;
    case 2:
        printf("Вы выбрали ножницы\n");
        break;
    case 3:
        printf("Вы выбрали бумага\n");
        break;
    default:
        printf("Выберите между 1, 2 или 3\n");
        return 0;
    }

    switch (b)
    {
    case 1:
        printf("Я выбрал камень\n");
        break;
    case 2:
        printf("Я выбрал ножницы\n");
        break;
    case 3:
        printf("Я выбрал бумагу\n");
        break;
    }

    if (a == b) {
        printf("Ничья!\n");
    }
    else if ((a == 1 && b == 2) || (a == 2 && b == 3) || (a == 3 && b == 1)) {
        printf("Вы победили!\n");
    }
    else {
        printf("Вы проиграли!\n");
    }
}