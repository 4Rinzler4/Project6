#include <stdio.h>
#include <stdlib.h>
#include <time.h>//підключення бібліотек
#define ROWS 3
#define COLS 4
void swapMinMax(int matrix[ROWS][COLS])
{
    int min = matrix[0][0];
    int max = matrix[0][0];
    int minRow = 0;
    int minCol = 0;
    int maxRow = 0;
    int maxCol = 0;
    // Знаходимо мінімальний та максимальний елементи та їхні позиції
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                minRow = i;
                minCol = j;
            }
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
    // Обмін місцями мінімального та максимального елементів
    int temp = matrix[minRow][minCol];
    matrix[minRow][minCol] = matrix[maxRow][maxCol];
    matrix[maxRow][maxCol] = temp;
}
int main()
{
    int matrix[ROWS][COLS];
// Ініціалізуємо генератор випадкових чисел
    srand(time(NULL));
// Заповнюємо матрицю випадковими числами від -100 до 100
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 201 - 100;
        }
    }
// Виведення початкової матриці
    printf("Матриця:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
// Обмін мінімального та максимального елемента
    swapMinMax(matrix);
// Виведення зміненої матриці
    printf("Матриця після обміну:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
