#include <stdio.h>
int main()
{
    int a[3][3],i,j,key;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
       printf("\n Enter The Value Of Array:");
       scanf("%d",&a[i][j]);
    }
        printf("\n2d Array Elements are:");
        for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",a[i][j]);
    }
        printf("\nEnter to search:");
        scanf("%d",&key);
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        if(a[i][j]==key)
    {
        printf("Elements Found at a[%d][%d]pas.",i,j);
        return 0;
    }
    }
    {
        printf("\nElement Not Found.");
        return 0;
    }
}
