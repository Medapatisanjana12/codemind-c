#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int z;
    scanf("%d",&z);
    int cnt=0;
    for(int i=0;i<n;i++){
        if(ar[i]==z){
            cnt++;
    }
}
    if(cnt>=1){
        printf("True");
    }
    else
    printf("False");
}