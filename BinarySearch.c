#include<stdio.h>
#include<stdlib.h>
void binSearch(int a[],int n, int key)
{
int l=0,h=n-1;
int mid;
while(l<=h)
{
    
    mid=(l+h)/2;
    if(a[mid]==key)
    {
        printf("Element Found:%d",a[mid]);
        exit(0);
    }
  
    // return a[mid];
    else if(key<a[mid])
    h=mid-1;
    else
    l=mid+1;
}
printf("Key element :%d not found",key);
}
int main()
{
    int a[100],n,i,k;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter Elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter key element:");
    scanf("%d",&k);
    binSearch(a,n,k);
return 0;
}
