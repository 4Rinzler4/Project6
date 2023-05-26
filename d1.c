#include <stdio.h>
#define ROWS 4
#define COLS 3
void printVector(int vector[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}
void findMinValues(float matrix[ROWS][COLS], int vector[]) {
    for (int i = 0; i < ROWS; i++) {
        float min = matrix[i][0];  //перше значення рядка встановлюємо як мінімальне

        for (int j = 1; j < COLS; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];  //знайшли нове мінімальне значення
            }
        }
        vector[i] = (int)min;  //записуємо мінімальне значення в вектор
    }
}
int main() {
    float matrix[ROWS][COLS];
    int vector[ROWS];
    // введення матриці
    printf("Введіть елементи матриці %dx%d:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }
    findMinValues(matrix, vector);
    printVector(vector, ROWS);// знаходження вектора
    return 0;
}


