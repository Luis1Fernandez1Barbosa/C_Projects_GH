#include<stdio.h>

int main (){
    //Declaracion de variables
    double x=7;
    double z=7.5;
    double y;
    int h=200;
    double f=32.52;
    double g=3;
    
    //Operaciones basicas
    y = x+z;
    double pl=h*f;
    double pl1=g*f;
    
    printf("%f\n",y);
    printf("%f\n",pl);
    printf("%f\n",pl1);
    
    //Precedencia de operadores
    double o;
    double p= x+(--h);
    o=++g;
    pl1=--o;
    pl=(pl1/((--x)*g)*(o-1));
    printf("%f\n",p);
    printf("%f\n",o);
    printf("%f\n",pl);
    printf("%f\n",pl1);
}