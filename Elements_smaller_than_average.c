#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    int sum=0,cnt=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++){
        sum+=ar[i];
    }
    int avg=sum/n;
    for(i=0;i<n;i++){
        if(ar[i]<=avg){
            cnt++;
        }
    }
    printf("%d",cnt);
    
}