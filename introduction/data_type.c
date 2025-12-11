#include<stdio.h>
void main(){
    int a; //variable declaration
    int b=5; //variable initialization

    printf("%d",a);
    printf("\n%d",b);

    float c=45.8;
    printf("\n%.2f",c);

    double l=5487498.468576;
    printf("\n%lf",l);

    char d='A';
printf("\n%c",d);

const float pi=3.1412f;
printf("\n%.4f",pi);

//size operator
printf("\n%d byte",sizeof(a));
printf("\n%d byte",sizeof(int));

printf("\n%d byte",sizeof(c));
printf("\n%d byte",sizeof(float));

printf("\n%d byte",sizeof(l));
printf("\n%d byte",sizeof(double));

printf("\n%d byte",sizeof(d));
printf("\n%d byte",sizeof(char));
    


}