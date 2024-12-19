#include <stdio.h>

int main ()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    
    int size = sizeof(arr) / sizeof(arr[0]);

    int findValue;
    
    printf("\nNhap vao mot phan tu cua mang de kiem tra: ");
    
    scanf("%d", &findValue);

    for(int i = 0; i < size; i++)
        {
            if(arr[i] == findValue)
                {
                    printf("\nPhan tu %d o vi tri thu %d cua mang!", findValue, arr[i]);
                    
                    printf("\n\n");
                    
                    return 0;            
                }
        }
    
    printf("\nKhong tim thay phan tu %d trong mang!", findValue);
    
    printf("\n\n");

    return 0;
}