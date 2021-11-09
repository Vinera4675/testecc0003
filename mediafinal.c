#include <stdio.h>

int main ()
{
float mp,avf,mf;

printf ("Digite a nota da sua media parcial: \n");
scanf("%f",&mp);
 printf("Digite a sua nota da avaliaçao final: \n");
 scanf("%f",&avf);

 mf = (mp+avf)/2;

if (mf >= 5.0 && mf<= 10.0) 
{

    printf ("Aprovado");
}
else if (mf < 5.0 && mf >= 1.0)
{

    printf("Reprovado");

}
else {
    printf("Valores errados");

}
 
return 0;
}