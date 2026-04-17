//angel palacios gonzalez
//matricula 2211112

#include<stdio.h>

int suma(int n);
//principal
int main()
{
	int n=5;
printf(suma es %\n", suma(n));
reurnt 0;
}
//definicion de la funcion recursiva
int suma(int n){

//1. caso base:definir la recuersion cuando nes 0 o 1
if (n <= 1){
    return 1;
}
//2. paso recuersivo: la funcion se llama a si misma con (n-1)
else{
    return n+suma(n-1);
}
}
