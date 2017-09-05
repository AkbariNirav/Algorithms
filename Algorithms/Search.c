#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 519251 ;
    int i,j,ele,half;
    int Array[n];
    half = n/2;
    for(i=0;i<n;i++)
    {
        Array[i]=i+1;
    }
    printf("\nEnter the element you want to search : ");
    scanf("%d",&ele);
    if(n%2==0 && Array[half]==ele)
    {
        printf("Required element is at %d and is : %d",(half),Array[half]);
    }
    else
    {
        for(j=0;j<(n/4)+1;j++)
        {
            if(Array[j]==ele)
            {
                printf("Required element is at %d and is : %d",j,Array[j]);
                break;
            }
            else if(Array[n-j]==ele)
            {
                printf("Required element is at %d and is : %d",n-j,Array[n-j]);
                break;
            }
            else if(Array[(half)+j]==ele)
            {
                printf("Required element is at %d and is : %d",(half)+j,Array[(half)+j]);
                break;
            }
            else if(Array[(half)-j]==ele)
            {
                printf("Required element is at %d and is : %d",(half)-j,Array[(half)-j]);
                break;
            }
        }
    }
    return 0;
}
