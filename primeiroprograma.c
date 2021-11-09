#include <stdio.h>

int main(void) 
{
    int a;
    int b;
    int c;
    float media;
    
    printf("Digite sua primeira nota: \n");
    scanf("%d",&a);
     printf("Digite sua segunda nota: \n");
    scanf("%d",&b);
    printf("Digite sua terceira nota: \n");
    scanf("%d",&c);
    
    media = (a+b+c)/3;
    
    printf("A media do aluno :%f",media);
    
    return 0;
}
