#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int z;
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    scanf("%d",&z);
    int cnt=0;
    for(int i=0;i<n;i++){
        if(ar[i]==z){
            cnt++;
        }
    }
    printf("%d",cnt);
}