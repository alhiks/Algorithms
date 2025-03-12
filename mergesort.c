#include<stdio.h>
void merge(int a[],int b[],int n,int m)
{
    int i,j,k,c[m+n];
    i=j=k=0;
    while(i<n && j<m)
    {
        
        
            if(a[i]<b[j])
            
            {
                c[k]=a[i];
                k++;
                i++;
            }
            else
            {
                c[k]=b[j];
                k++;
                j++;
            }
           
        
    }
    for(;i<n;i++)
    {
        c[k]=a[i];
        k++;
    }
    for(;j<m;j++)
    {
        c[k]=b[j];
        k++;
    }
    for(k=0;k<(m+n);k++)
    {
        printf("\nElement:%d\n",c[k]);
    }
}
int main()
{
    int a[100],n,i,b[100],m;
    printf("Enter the number of elements in list 1: ");
    scanf("%d",&n);
    printf("Enter elements of list 1:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the number of elements:");
    scanf("%d",&m);
    printf("Enter elements of list 2:\n");
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    merge(a,b,n,m);
}