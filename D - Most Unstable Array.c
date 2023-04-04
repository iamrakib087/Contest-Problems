#include<stdio.h>
int main(){
int c;
scanf("%d",&c);
while(c--){
    int r,t;
    scanf("%d %d",&r,&t);
    if(r==1){
        printf("%d\n",r*0);
    }
else if(r==2){
    printf("%d\n",t);
}
else{
    printf("%d\n",t*2);
}
}



return 0;}
