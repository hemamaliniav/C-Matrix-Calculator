#include <stdio.h>

void Input(int a[10][10], int b[10][10], int Row, int Column);
void Addition(int a[10][10], int b[10][10], int solution[10][10], int Row, int Column);
void Subtraction(int a[10][10], int b[10][10], int solution[10][10], int Row, int Column);
void Transpose_A(int a[10][10], int solution[10][10], int Row, int Column);
void Transpose_B(int b[10][10], int solution[10][10], int Row, int Column);

int main(void) {
    int A[10][10];
    int B[10][10];
    int add_result[10][10];
    int sub_result[10][10];
    int A_T_result[10][10];
    int B_T_result[10][10];
    int menu;

    int row, column;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &column);

    if (row < 1 || row > 10 || column < 1 || column > 10) {
        printf("Invalid dimensions!\n");
        return 1;
    }

    Input(A, B, row, column);

    printf("Matrix A:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    do {
        puts("operands in menu");
        printf("operand 1: Addition(requires same dimensions)\n");
        printf("operand 2: Subtraction(requires same dimensions)\n");
        printf("operand 3: Transpose A\n");
        printf("operand 4: Transpose B\n");
        printf("Enter 0 to exit and check out\n");
        printf("Enter the operand code:\n");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                Addition(A, B, add_result, row, column);
                printf("Addition result:\n");

                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < column; j++) {
                        printf("%d ", add_result[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                Subtraction(A, B, sub_result, row, column);
                printf("Subtraction result:\n");

                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < column; j++) {
                        printf("%d ", sub_result[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                Transpose_A(A, A_T_result, row, column);
                for (int i = 0; i < column; i++) {
                    for (int j = 0; j < row; j++) {
                        printf("%d ", A_T_result[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                Transpose_B(B, B_T_result, row, column);
                for (int i = 0; i < column; i++) {
                    for (int j = 0; j < row; j++) {
                        printf("%d ", B_T_result[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 0:
                printf("Exiting calculator...\n");
                break;

            default:
                printf("Kindly enter valid operand code!");
                break;
        }

    } while (menu != 0);

    return 0;
}

void Input(int a[10][10], int b[10][10], int Row, int Column) {
    printf("Enter Matrix A:\n");
    for (int i = 0; i < Row; i++) {
        for (int j = 0; j < Column; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Matrix B:\n");
    for (int i = 0; i < Row; i++) {
        for (int j = 0; j < Column; j++) {
            scanf("%d", &b[i][j]);
        }
    }
}

void Addition(int a[10][10], int b[10][10], int solution[10][10], int Row, int Column) {
    for (int i = 0; i < Row; i++) {
        for (int j = 0; j < Column; j++) {
            solution[i][j] = a[i][j] + b[i][j];
        }
    }
}

void Subtraction(int a[10][10], int b[10][10], int solution[10][10], int Row, int Column) {
    for (int i = 0; i < Row; i++) {
        for (int j = 0; j < Column; j++) {
            solution[i][j] = a[i][j] - b[i][j];
        }
    }
}

void Transpose_A(int a[10][10], int solution[10][10], int Row, int Column) {
    for (int i = 0; i < Column; i++) {
        for (int j = 0; j < Row; j++) {
            solution[i][j] = a[j][i];
        }
    }
}

void Transpose_B(int b[10][10], int solution[10][10], int Row, int Column) {
    for (int i = 0; i < Column; i++) {
        for (int j = 0; j < Row; j++) {
            solution[i][j] = b[j][i];
        }
    }
}
