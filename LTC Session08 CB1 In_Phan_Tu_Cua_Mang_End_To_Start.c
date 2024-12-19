#include <stdio.h>

int main ()
{
    int arr[5] = {1, 2, 3, 4, 5};
    
    int length = sizeof(arr) / sizeof(arr[0]);
    
    printf("\nMang duoc sap xep tu duoi len tren la: ");
    
    printf("\n\n");
        
        for(int i = length - 1; i >= 0; i--)
            {
                printf("%d ", arr[i]);
            }
    
    printf("\n\n");
    
    return 0;
}