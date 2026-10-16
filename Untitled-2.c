#include <stdio.h>
#include <locale.h>

int task(void)
{
    int A, B;
    int condition;

    printf("Введите два целых числа A и B: ");

    scanf("%d %d", &A, &B);

    condition = ((A % 2 != 0) != (B % 2 != 0));

    printf("Включить сирену (1 - да, 0 - нет): %d\n",
           condition);

    return 0;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    task();
} 