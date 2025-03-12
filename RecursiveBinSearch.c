#include<stdio.h>
#include<stdlib.h>
void rbinsearch(int a[],int n,int key)
{
    int l=0,h=n-1,mid;
    if (l==h)
    {
        if(a[l]==key)
            printf("Element Found");
        else
        printf("Element Not Found");
    }
    else{
        mid=(l+h)/2;
        if (a[mid]==key)
        printf("Element Found");
        else if (a[mid]>key)
        rbinsearch(a,mid,key);
        else
        rbinsearch(a,mid+1,key);
    }

}
int main()
{
    int a[10],i,n,k;
    printf("Enter Size of elements:");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter Key element:");
    scanf("%d",&k);
    rbinsearch(a,n,k);
}
