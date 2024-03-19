#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    int cnt=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int sum=0;
    for(i=0;i<n;i++){
        sum+=ar[i];
    }
    float avg=sum/n;
    for(i=0;i<n;i++){
        if(ar[i]==avg){
            cnt++;
        }
    }
    if(cnt>=1){
        printf("True");
    }
    else
    printf("False");
}