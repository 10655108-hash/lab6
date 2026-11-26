#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

void task963() {
    int list[5][8] = {
        {25, 28, 30, 24, 27, 29, 26, 22},
        {23, 25, 27, 28, 24, 26, 21, 29},
        {22, 24, 25, 23, 26, 21, 20, 27},
        {20, 23, 22, 25, 21, 24, 23, 19},
        {18, 21, 20, 22, 19, 23, 24, 20}
    };
    int n, a = 0;
    printf("\nЗадание номер 963\n");
    for (int i = 0; i < 5; i++) {
        printf("%d курс: ", i + 1);
        for (int j = 0; j < 8; j++) {
            printf("%d ", list[i][j]);
        }
        printf("\n");
    }
    printf("Введите номер курса: ");
    scanf("%d", &n);
    if (n < 1 || n > 5) {
        printf("Некорректный номер курса\n");
        return;
    }
    for (int i = 0; i < 8; i++) {
        a = a + list[n - 1][i];
    }
    printf("Количество студентов на %d курсе: %d\n", n, a);
}

void task977() {
    int n, list[100][100], a = 1;
    printf("\nЗадание номер 977\n");
    printf("Введите n: ");
    scanf("%d", &n);
    for (int i = 0; i < (n + 1) / 2; i++) {
        for (int j = i; j < n - i; j++) {
            list[i][j] = a++;
        }
        for (int j = i + 1; j < n - i; j++) {
            list[j][n - i - 1] = a++;
        }
        for (int j = n - i - 2; j >= i; j--) {
            list[n - i - 1][j] = a++;
        }
        for (int j = n - i - 2; j > i; j--) {
            list[j][i] = a++;
        }
    }
    printf("Матрица:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d", list[i][j]);
        }
        printf("\n");
    }
}

void task1003() {
    int b= 0,a = 0, k;
    int list[8][8] = {
        {25, 28, 30, 24, 27, 29, 26, 22},
        {25, 28, 30, 24, 27, 29, 26, 22},
        {25, 28, 30, 24, 27, 29, 26, 22},
        {23, 25, 27, 28, 24, 26, 21, 29},
        {22, 24, 25, 23, 26, 21, 20, 27},
        {20, 23, 22, 25, 21, 24, 23, 19},
        {18, 21, 20, 22, 19, 23, 24, 20},
        {22, 24, 25, 23, 26, 21, 20, 27}
    };
    printf("\nЗадание номер 1003\n");
    printf("Введите k: ");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (list[i][j] %k == 0) {
                a = a + 1;
                if (list[i][j] > b) {
                    b = list[i][j];
                }
            }
        }
    }
    printf("В этой матрице элементов кратно k: %d", a);
    printf("\nСамый большой элементы кратный k: %d", b);
}

void task930() {
    int b= 0, a = 0;
    int list[8][8] = {
        {25, 28, 30, 24, 27, 29, 26, 22},
        {25000, 28, 30, 24, 27, 29, 26, 22},
        {25, 28, 30, 24, 27, 29, 26, 22},
        {23, 25, 27, 28, 24, 26, 21, 29},
        {22, 24, 25, 23, 26, 21, 20, 27},
        {20, 23, 22, 25, 21, 24, 23, 19},
        {18, 21, 20, 22, 19, 23, 24, 20},
        {22, 24, 25, 23, 26, 21, 20, 27}
    };
    printf("\nЗадание номер 930\n");
    for (int i = 0; i < 8; i++) {
        printf("%5d", list[0][i]);
        a = a + list[0][i];
    }
    for (int i = 1; i < 8; i++) {
        printf("\n");
        for (int j = 0; j < 8; j++) {
            if (list[i][j] < a) {
                list[i][j] = a;
            }
            printf("%5d", list[i][j]);
        }
    }
}

void task998() {
    int list[8][8] = {
        {25, 28, 30, 24, 27, 29, 26, 22},
        {25000, 28, 30, 24, 27, 29, 26, 22},
        {25, 28, 30, 24, 27, 29, 26, 22},
        {23, 25, 27, 28, 24, 26, 21, 29},
        {22, -24, 25, 23, 26, 21, 20, 27},
        {20, -23, -22, 25, 21, 24, 23, 19},
        {-18,- 21, 20, -22, 19, 23, 24, 20},
        {22, -24, 25, -23, 26, 21, 20, 27}
    };
    printf("\nЗадание номер 930\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j <= 8; j++) {
            if (list[i][j] >= 0) {
                list[i][j] = 1;
            } else {
                list[i][j] = 0;
            }
            if (j <= i) {
                printf("%5d", list[i][j]);
            }
        }
        printf("\n");
    }
}


int main(void)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int tasknum;
    do {
        printf("\nВведите порядковый номер задания: ");
        scanf("%d", &tasknum);

        switch (tasknum) {
            case 1:
                task963();
                break;

            case 2:
                task977();
                break;

            case 3:
                task1003();
                break;

            case 4:
                task930();
                break;

            case 5:
                task998();
                break;

            case 0:
                printf("Выход\n");
                break;

            default:
                printf("Неверный выбор!\n");
        }

    } while (tasknum != 0);

    return 0;
}