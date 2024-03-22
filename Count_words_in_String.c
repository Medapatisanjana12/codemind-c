#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int cnt=0;
    int word=0;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!=NULL;i++){
        if(str[i]>='a' && str[i]<='z'){
            if(!word){
                word=1;
                cnt++;
            }
        }
        else{
            word=0;
        }
    }
    printf("%d",cnt);
}