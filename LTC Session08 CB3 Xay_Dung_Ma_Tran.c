#include <stdio.h>

int main () 
{
    int n;

    printf("\nNhap vao kich thuoc Matrix n x n: ");
    
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("\nVui long nhap mot so nguyen lon hon 0!\n");
        
        return 1;
    }

    int matrix[n][n];

    printf("\nNhap cac gia tri cho Matrix %d x %d:\n", n, n);
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("\nHang [%d] cot [%d] : ", i, j);
            
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix ban da nhap la:\n");
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d\t", matrix[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}