#include <stdio.h>

int main() {
    int rows, cols, i, j;
printf("my name is soya parth A.\n");

    printf("Enter the array's row & column size: ");
    scanf("%d", &rows);
    cols = rows; 

    int arr[rows][cols], transpose[cols][rows];

    printf("\nEnter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    printf("\nThe transpose matrix of an array:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
       
    }
 printf("... thank you... ");
    return 0;
}



