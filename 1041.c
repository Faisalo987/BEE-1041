#include <stdio.h>

int main()

{

double x,y;

scanf("%lf %lf",&x,&y);


if(x>0 && y>0){


printf("Q1\n");


}

if(x>0 && y<0){


printf("Q4\n");

}

if(x<0 && y<0){


printf("Q3\n");

}


if(x<0 && y>0){


printf("Q2\n");


}

if(x==0 && y==0){

printf("Origem\n");

}

if(x==0 && y){

printf("Eixo Y\n");

}

if(y==0 && x){

printf("Eixo X\n");

}




return 0;


}
