#include<stdio.h>
#include<math.h>
int main(){
    int n,m;
    int i,j;
    scanf("%d %d",&n,&m);
    int ar[n][m];
    for(i=0;i<n;i++){
        for( j=0;j<m;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    int sum[j]={0};
    for(i=0;i<n;i++){
        for( j=0;j<m;j++){
            sum[j]+=ar[i][j];
        }
    }
    for( j=0;j<m;j++){
        printf("%d ",sum[j]);
    }
}