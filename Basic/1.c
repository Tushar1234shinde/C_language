#include<stdio.h>
void main(){

    int num;
    int total=0;

    
    for(int i=0; i<=10;i++){
        scanf("%d",&num);
    
if(num>0){
    total=total+num;

}
else{
   printf("%d",total);
   break;
}
}

}