#include <stdio.h>

int main ()
{
    int matrix[3][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12}};

    int max = matrix[0][0];
    
    for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 4; j++)
                {
                    if(matrix[i][j] > matrix[0][0])
                        {
                            max = matrix[i][j];
                        }
                }
        }

    printf("\nGia tri lon nhat trong Matrix la: %d", max);
    
    printf("\n\n");

    return 0;
}