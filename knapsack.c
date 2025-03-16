/*
1. get no of objects
2. profits and weights
3. ratio of profits to weights
4. sort the ratio in descending order
5. select the first object with the highest ratio
6. select untill maximum capacity is obtained





*/




#include<stdio.h>
int main()
{
    float weight[100],profit[100],ratio[100],cap,temp,totalProfit=0;
    int obj,i,j;
    printf("Enter total no. of objects present:");
    scanf("%d",&obj);
    printf("Enter Capacity of Knapsack:");
    scanf("%f",&cap);
    printf("Enter Objects profit and its corresponding weights:\n");
    for(int i=0;i<obj;i++)
    {
        printf("Enter object %d weight and Profit:",i+1);
        scanf("%f %f",&weight[i],&profit[i]);
       
    }
    // calculating profit by weight ratio
    for(int i=0;i<obj;i++)
    {
      ratio[i]=profit[i]/weight[i];
    }
// sorting the ratiosin descending order in order to get max profit 
    for(i=0;i<obj;i++)
    {
        for(j=i+1;j<obj;j++)
        {
            if(ratio[i]<ratio[j])
            {
                temp=ratio[j];
                ratio[j]=ratio[i];
                ratio[i]=temp;
                temp=profit[j];
                profit[j]=profit[i];
                profit[i]=temp;
                temp=weight[j];
                weight[j]=weight[i];
                weight[i]=temp;
            }
        }
    }
    // now solving the knapsack problem
    for(i=0;i<obj;i++)
    {
        if(weight[i]>cap)
        {
            break;
        }
        else{
            cap=cap-weight[i];
            totalProfit+=profit[i];

        }
    }
    if(i<obj)
    totalProfit+=cap/weight[i];
printf("Max profit =%f",totalProfit);
return 0;
}