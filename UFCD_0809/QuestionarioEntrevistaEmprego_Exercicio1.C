#include <stdio.h>
#include <locale.h>
#include <stdlib.h>             
#include <unistd.h>             
#include <string.h>  

//Area reservada para declaração de variaveis:
char nome[30], nomeComparador[30], diurnoDisp[3], vaga[10];
int idade, anosAtuacao, salario;


int nomeEntrevistado(){ //funcao para mostrar o nome do entrevistado
    setlocale(LC_ALL, "");  
    
    //IF para repetir o nome no inicio do output e evitar voltar a escrever o nome
    if(strcmp(nome,nomeComparador) == 0){ //nos meus testes funcinou criar uma nova variavel p comparar se há ou não um valor em nome, como melhorar?
        printf("Qual é teu nome completo?\n");
        fgets(nome,sizeof(nome),stdin);
        nome[strcspn(nome, "\r\n")] = '\0'; //alternativa ao getchar() quando se usa fgets.
    }
    sleep(5);
    system("clear");
    return printf("- Olá, %s! - \n- Responda 5 perguntas corretamente para que possas passar na entrevista! -\n\n", nome);}
    
int main() {                    
    setlocale(LC_ALL, "");    
    
    //entrevista de emprego - fazer questoes ao empregado, guardar valores - entre 5 a 10
    nomeEntrevistado(); //questão 1 - como a váriavel nome foi criada fora da main, não é preciso mencionar-la dentro da função, pois a mesma já tem acesso.
    printf("1. Tens disponibilidade para horário diúrno?\n"); 
    scanf("%s", diurnoDisp);
    if(strcmp(diurnoDisp, "Sim") == 0 || strcmp(diurnoDisp, "sim") == 0 || strcmp(diurnoDisp, "S") == 0 || strcmp(diurnoDisp, "s") == 0){
        printf("Resposta correta, siga para a próxima questão.\n");
    }
    else{
        printf("Resposta errada! A entrevista acaba aqui. Tua resposta final foi: %s",diurnoDisp);
        return 0;
    }
    
    nomeEntrevistado(); //questao 2
    printf("2. Qual é a tua idade?\n");
    scanf("%d",&idade);
    if(idade >= 18){
        printf("Resposta correta, siga para a próxima questão.\n");
    }
    else{
        printf("Resposta errada! A entrevista acaba aqui. Tua resposta final foi: %d",idade);
        return 0;
    }

    nomeEntrevistado(); //questao 3
    printf("3. Qual vaga desejas?\n");
    printf(" A) Engenheiro\n B) Computador\n C) Balconista\n D) Desenvolvedor\n");
    scanf("%s",vaga);
    if(
        strcmp(vaga, "D") == 0 ||
        strcmp(vaga, "d") == 0 ||
        strcmp(vaga, "Desenvolvedor") == 0 ||
        strcmp(vaga, "desenvolvedor") == 0 )
        {
        printf("Resposta correta, siga para a próxima questão.\n");
    }
    else{
        printf("Resposta errada! A entrevista acaba aqui. Tua resposta final foi: %s",vaga);
        return 0;
    }

    nomeEntrevistado(); //questao 4
    printf("4. Há quantos anos atuas na area?\n");
    scanf("%d",&anosAtuacao);
    if(anosAtuacao >= 3){
        printf("Resposta correta, siga para a última questão.\n");
    }
    else{
        printf("Resposta errada! A entrevista acaba aqui. Tua resposta final foi: %d",anosAtuacao);
        return 0;
    }
    
    nomeEntrevistado(); //questao 5
    printf("5. Por fim, qual é a tua pretenção salárial?\n");
    scanf("%d",&salario);
    if(salario <= 4000){
        printf("Parabéns! Tens tudo que precisas para trabalhar conosco! Aguarde nosso contacto.");
    }
    else{
        printf("Resposta errada! A entrevista acaba aqui. Tua resposta final foi: %d",salario);
        return 0;
    }
return 0;}
