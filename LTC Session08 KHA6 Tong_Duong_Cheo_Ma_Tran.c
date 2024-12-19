#include <stdio.h>

const int rows = 4;

const int cols = 4;

int main() 
{
    
    int matrix[rows][cols];
    
    int diagonalSum = 0;

    printf("\nNhap phan tu cho Matrix %d x %d:\n", rows, cols);
    
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("\nHang [%d] cot [%d]: ", i, j);
            
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix ban da nhap la:\n\n");
    
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d\t", matrix[i][j]);
        }
        
        printf("\n");

    }
    
    printf("\nCac phan tu tren duong cheo chinh trong Matrix la: ");
    
    for (int i = 0; i < 4; i++) 
    {
        printf("%d", matrix[i][i]);
            
            if(i < 3)
                {
                    printf(", ");
                }
        
        diagonalSum += matrix[i][i];
        
    }

    printf("\nTong cac phan tu tren duong cheo cua Matrix la: %d\n\n", diagonalSum);

    return 0;
}