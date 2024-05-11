
    
    
    
    #include <stdio.h>

int main() {
    int row, col;
    printf("my name is soya parth A.\n");
    printf("question 2:-Write a Program to find the largest element from a given 2D array.\n");
    
    printf("Enter the array's row size: ");
    scanf("%d", &row);
    
    printf("Enter the array's column size: ");
    scanf("%d", &col);
    
    int arr[row][col];
    
    printf("\nEnter array's elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    int max = arr[0][0];
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    
    printf("\nThe largest element is: %d\n", max);
    printf(" ... thank you ...");
    return 0;
}
