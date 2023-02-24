#include<stdio.h>
int main()
{
    int n;
    int a[8]={34,35,65,31,25,89,64,30};
    int i,j,key,tc,y=0;
    printf("enter the no of test cases");
    scanf("%d",&tc);
    do{
        printf("enter the key");
        scanf("%d",&key);
        y++;
        for(j=0;j<8;j++)
        {
            if(a[j]==key)
            {
                printf("key found at index %d\n",j);
                printf("number of iterations are %d\n",j+1);
                break;
            }
        }
    }while(y!=tc);
    return 0;
}