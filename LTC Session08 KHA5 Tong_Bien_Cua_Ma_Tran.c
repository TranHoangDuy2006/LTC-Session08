#include <stdio.h>

int main() 
{
    int matrix[3][3];

    printf("\nNhap cac phan tu cua Matrix 3 x 3:\n");
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("\nHang [%d] cot [%d]: ", i, j);
            
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (i == 0 || i == 2 || j == 0 || j == 2) 
            {
                sum += matrix[i][j];
            }
        }
    }

    printf("\nTong cac phan tu nam tren bien cua Matrix 3 x 3: %d", sum);

    printf("\n\n");

    return 0;
}
