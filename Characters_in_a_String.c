#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int cnt=0;
    fgets(str,sizeof(str),stdin);
   // scanf("%[^
]",str);
    for(int i=0;str[i]!=NULL;i++){
        if(str[i]!='
'){
        cnt++;
        }
    }
    printf("%d",cnt);
}