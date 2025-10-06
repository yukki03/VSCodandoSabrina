/******************************************************************************
                                                                                Índice
Funções - Calcular o IMC, Regra de Três, Converter milhas.

TODO: Introduzir contador para vezes que o programa faz contas
*******************************************************************************/
                                                                                //Bibliotécas
#include <stdio.h>      //Padrão
#include <locale.h>     //Aceita caracteres pt
#include <string.h>     //Compara caracteres
#include <unistd.h>     //Função sleep();
                                                                                //Variáveis
int contador;
double peso, altura, a, b, c, m;
char resposta[3];

                                                                                //Funções - IMC
double imc(double peso, double altura) {
	printf("\n Calculando o IMC - insira teu peso e altura \n");
	printf(" Peso (ex.: 65.5): ");
	scanf("%lf",&peso);
	printf(" Altura (ex.: 1.70): ");
	scanf("%lf",&altura);
	return peso/(altura*altura);
}
                                                                                //Funções - Regra de Três
double tres(double a, double b, double c) {
	printf("\n Calculando regra de três simples - insira os 3 valores A, B e C \n");
	printf("\n A: ");
	scanf("%lf",&a);
	printf("\n B: ");
	scanf("%lf",&b);
	printf("\n C: ");
	scanf("%lf",&c);
	return (b*c)/a;
}
                                                                                //Funções - Milhas para KM
double mkm(double m){
    printf("\n Vamos converter milhas em kilometros:\n");
    printf(" Milhas (ex. 12.32): ");
    scanf("%lf",&m);
    return m*1.609344;
}
                                                                                //Funções - Fim do programa
char fimPrograma(char resposta[3]){
    if (strcmp(resposta, "N") == 0 || strcmp(resposta, "n") == 0) {
        printf("\n Obrigado por sua resposta! Até uma próxima!\n");
        return 0;
    }
    return 1;
}
                                                                                //Main
int main(void)
{
    setlocale(LC_ALL, "");
    

    printf("\n Bem-vindo! Gostaria de fazer algum cálculo? [Sim] para mais opções, [N] para encerrar esse programa.\n - ");
    scanf("%s", resposta);
                                                                                //Saída rápida
    if (!fimPrograma(resposta)) return 0;
    
                                                                                //While - Escolha a função
    while(strcmp(resposta,"N") != 0 || strcmp(resposta, "n") != 0)
    {
        printf("\n [IMC] para calcular o seu IMC \n [R3] para fazer uma conta de regra de três simples \n [MKM] para transformar milhas em km\n - ");
        scanf("%s",resposta);
        if (!fimPrograma(resposta)) return 0;                                   // If - IMC
        if(strcmp(resposta, "IMC") == 0 || strcmp(resposta, "imc") == 0 ){
            sleep(3);
            printf("\n O seu IMC é de: %.f\n",imc(peso,altura));
            printf("\n Gostaria de fazer mais algum cálculo? [Sim] para mais opções, [N] para encerrar esse programa.\n - ");
            scanf("%s",resposta);
            if (!fimPrograma(resposta)) return 0;
        }
        else if(strcmp(resposta, "R3") == 0 || strcmp(resposta, "r3") == 0 ){   //IF - Regra de 3
            sleep(3);
            printf("\nO resultado da regra de três é de: %.1f",tres(a,b,c));
            printf("\n Gostaria de fazer mais algum cálculo? [Sim] para mais opções, [N] para encerrar esse programa.\n - ");
            scanf("%s",resposta);
            if (!fimPrograma(resposta)) return 0;
        }
        else if(strcmp(resposta, "MKM") == 0 || strcmp(resposta, "mkm") == 0 ){   //IF - Milhas para KM
            sleep(3);
            printf("\n A conversão de milhas em KM deu: %.2lf\n",mkm(m));
            printf("\n Gostaria de fazer mais algum cálculo? [Sim] para mais opções, [N] para encerrar esse programa.\n - ");
            scanf("%s",resposta);
            if (!fimPrograma(resposta)) return 0;
        }
    }

	return 0;
}
