#include<stdio.h>
int bs(int[],int,int,int);
int main()
{
    int x,y;
    int a[5]={10,20,30,40,50};
    int low=0;
    int high=4;
    printf("enter the key to search");
    scanf("%d",&y);
    x=bs(a,y,0,4);
    printf("\n%d",x);
    return 0;
}
int bs(int a[5],int y,int low,int high)
{
    int i=0;
    while(low<=high)
    {
        i++;
        int mid=low+(high-low)/2;
        if(a[mid]==y)
        {
            printf("number of iterations %d",i);
            return y;
        }
        if(y<a[mid])
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        }
    }

    
    