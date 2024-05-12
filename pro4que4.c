#include <stdio.h>

int main() {
    int rows, cols, i, j;
printf("my name is soya parth A.\n");
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("\nEnter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    
    int row;
    printf("\nEnter row number: ");
    scanf("%d", &row);
    printf("Elements of row %d: ", row);
    int rowSum = 0;
    for (j = 0; j < cols; j++) {
        printf("%d", arr[row][j]);
        rowSum += arr[row][j];
        if (j != cols - 1) printf(", ");
    }
    printf("\nThe sum of row %d: %d\n", row, rowSum);

    
    int col;
    printf("\nEnter column number: ");
    scanf("%d", &col);
    printf("Elements of column %d: ", col);
    int colSum = 0;
    for (i = 0; i < rows; i++) {
        printf("%d", arr[i][col]);
        colSum += arr[i][col];
        if (i != rows - 1) printf(", ");
    }
    printf("\nThe sum of column %d: %d\n", col, colSum);
printf("...thank you...");
    return 0;
}




