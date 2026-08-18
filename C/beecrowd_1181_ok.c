#include<stdio.h>

int main()
{
double matVal[12][12];
int lin , col , linhaAlvo;
double valResult;
char Operac;
valResult = 0.0 ;

//Escolha da linha alvo a ser executada operação
//printf("Digite a linha alvo da matriz\n"); // comentado para poder rodar n o beecrowd

scanf(" %d",&linhaAlvo);

// Escolha da operção a ser executada
//printf("Digite a operação desejada(S => soma ou M => Media)\n"); // comentado para poder rodar n o beecrowd

scanf(" %c",&Operac);

// populando a matriz percorrendo linha e coluna

    for ( lin = 0 ; lin < 12 ; lin ++)
    {
        for (col = 0 ; col < 12 ; col ++)
        {
      //  printf("Entre com valor:[%.1i][%.1i]:",lin, col); // comentado para poder rodar n o beecrowd

        scanf("%lf", & matVal[lin][col]);
        }
    }

// estrutura de decisão para fazer operação escolhida

if ( Operac == 'S'|| Operac == 'M')
    {
    for (col = 0 ; col < 12 ; col ++)
        {
        valResult = (valResult + matVal[linhaAlvo][col]);// se operação for soma
        }
    }

    if (Operac == 'M')

        valResult = (valResult/12.0); // se operação for media


    printf("%.1lf\n", valResult); // printa o resultado, esta sem texto antes para rodar no beecrowd


}


