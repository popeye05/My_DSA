#include<stdio.h>
bool checkIfExist(int arr[100], int arrSize)
{
    
    printf("Enter The size of array: ");
    scanf("%d",&arrSize);
    int i,j=0;
    printf("Enter Values: ");
    for(i=0;i<arrSize;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<arrSize;i++)
    {
        for(j=0;j<arrSize;j++)
        {
            if(i!=j && arr[i] == 2*arr[j])
            { 
                return true;
            }
        }
    }
    return false;
}

