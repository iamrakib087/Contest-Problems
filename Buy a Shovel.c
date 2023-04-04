#include<stdio.h>
int main(){
int x,r,t;
scanf("%d %d",&r,&t);
for(x=1; ; x++){
        int sum=x*r;
        if(sum%10==t || sum%10==0){
            break;
        }
}

printf("%d",x);

return 0;}
