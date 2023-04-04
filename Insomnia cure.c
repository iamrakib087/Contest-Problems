#include<stdio.h>
int main(){
int i,p,q,r,s,d,count=0;
scanf("%d",&p);
scanf("%d",&q);
scanf("%d",&r);
scanf("%d",&s);
scanf("%d",&d);
for(i=1; i<=d; i++){
    if(i%p==0 || i%q==0 || i%r==0 || i%s==0){
        count++;
    }
}
printf("%d",count);

return 0;}
