#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int ar[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    int cnt=0;
    int x;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ar[i][j]==x){
                cnt++;
            }
    }
 }
    if(cnt>=1){
        printf("1");
    }
    else if(cnt==0){
    printf("0");
    }
}