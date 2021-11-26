/*  INSTRUÇÕES DO CÓDIGO



- Feito por: Davi Matias Araújo com ajudas de Gabriel Pires Martins
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#define n 100

//função que converte um número binário para decimal
void ConversaoBinarioDecimal(char numero[n])
{
    //declaração das variáveis
    int tamanho, potencia, i;
    double x, y = 0;

    //calculando a quantidade de bits do número inserido
    tamanho = strlen(numero);
    potencia = tamanho - 1;

    //fazendo a conversão
    for(i = 0; i < tamanho; i++){
        x = numero[i] - 48;
        x = x * pow(2, potencia);
        y += x;
        potencia--;
    }

    //exibindo o valor na base decimal
    printf("Na base decimal: %.1f\n", y);
}

//função que converte binario para decimal mas retorna o valor em decimal
double BinDec(char numero[n])
{
    //declaração das variáveis
    int tamanho, potencia, i;
    double x, y = 0;

    //calculando a quantidade de bits do número inserido
    tamanho = strlen(numero);
    potencia = tamanho - 1;

    //fazendo a conversão
    for(i = 0; i < tamanho; i++){
        x = numero[i] - 48;
        x = x * pow(2, potencia);
        y += x;
        potencia--;
    }
    
    return y;
}

//função que converte um número binário para decinal
void ConversaoDecimalBinario(double num)
{
    //declaração das variáveis
    int potencia, primeiro = 1;

    printf("Na base binaria: ");

    //convertendo e exibindo o número em binário
    for(potencia = 31; potencia >= 0; potencia--){
        if(num >= pow(2, potencia)){
            printf("1");
            num -= pow(2, potencia);
            primeiro = 0;
        } else if(!primeiro){
            printf("0");
        }
    }
    puts("");
}

//função que converte de decimal pra hexadecimal
void ConversaoDecimalHexadecimal(double num)
{
    //declaração das variaveis
    int  i=-1, tam, res, j=-1;
    double aux = num;

    //calculando o tamanho do vetor
    while(num != 0){
        i++;
        res = (int) num % 16;
        num = (int) num/16;
    }

    //vetor onde as informações serão inseridas
    int vetor[i];
    tam = i;
    i = -1;

    //convertendo para hexadecimal
    while(aux != 0){
        i++;
        res = (int) aux % 16;
        aux = (int) aux/16;
        vetor[i] = res;
    }

    //imprimindo o vetor
    printf("Na base hexadecimal: ");
    for(i = tam; i >= 0; i--){
        if(vetor[i] < 10){
            printf("%d", vetor[i]);
        } else {
            switch (vetor[i]){
                case 10:
                    printf("A");
                    break;
                case 11:
                    printf("B");
                    break;
                case 12:
                    printf("C");
                    break;
                case 13:
                    printf("D");
                    break;
                case 14:
                    printf("E");
                    break;
                case 15:
                    printf("F");
                    break;
                default:
                    break;
            }
        }
    }
    puts("");
}

//função que converte de hexadecimal para decimal
void ConversaoHexadecimalDecimal(char numero[n])
{
    //declaração das variáveis
    int potencia, i, tamanho;
    double x, y = 0;

    //verificando o tamanho da string
    tamanho = strlen(numero);
    potencia = tamanho-1;

    //convertendo para decimal
    for(i = 0; i < tamanho; i++){
        switch(numero[i]){
            case '0':
                break;
            case '1':
                x = 1 * pow(16, potencia);
                y += x;
                break;
            case '2':
                x = 2 * pow(16, potencia);
                y += x;
                break;
            case '3':
                x = 3 * pow(16, potencia);
                y += x;
                break;
            case '4':
                x = 4 * pow(16, potencia);
                y += x;
                break;
            case '5':
                x = 5 * pow(16, potencia);
                y += x;
                break;
            case '6':
                x = 6 * pow(16, potencia);
                y += x;
                break;
            case '7':
                x = 7 * pow(16, potencia);
                y += x;
                break;
            case '8':
                x = 8 * pow(16, potencia);
                y += x;
                break;
            case '9':
                x = 9 * pow(16, potencia);
                y += x;
                break;
            case 'A':
                x = 10 * pow(16, potencia);
                y += x;
                break;
            case 'B':
                x = 11 * pow(16, potencia);
                y += x;
                break;
            case 'C':
                x = 12 * pow(16, potencia);
                y += x;
                break;
            case 'D':
                x = 13 * pow(16, potencia);
                y += x;
                break;
            case 'E':
                x = 14 * pow(16, potencia);
                y += x;
                break;
            case 'F':
                x = 15 * pow(16, potencia);
                y += x;
                break;
        }
        potencia--;
    }
    printf("Na base decimal: %.1f", y);
}

//função que converte de hexadecimal pra binário
void ConversaoHexadecimalBinario(char numero[n])
{
    //declaração das variaveis
    char c;
    int i, tamanho;

    //pegando o tamanho da string
    tamanho = strlen(numero);

    //convertendo
    printf("Na base binaria: ");
    for(i = 0; i < tamanho; i++){
        c = numero[i];

        switch (c){
            case '0':
                printf("0000");
                break;
            case '1':
                printf("0001");
                break;
            case '2':
                printf("0010");
                break;
            case '3':
                printf("0011");
                break;
            case '4':
                printf("0100");
                break;
            case '5':
                printf("0101");
                break;
            case '6':
                printf("0110");
                break;
            case '7':
                printf("0111");
                break;
            case '8':
                printf("1000");
                break;
            case '9':
                printf("1001");
                break;
            case 'A':
                printf("1010");
                break;
            case 'B':
                printf("1011");
                break;
            case 'C':
                printf("1100");
                break;
            case 'D':
                printf("1101");
                break;
            case 'E':
                printf("1110");
                break;
            case 'F':
                printf("1111");
                break;
        }
    }
    puts("");
}

//função para converter de binário para hexadecimal
void ConversaoBinarioHexadecimal(char numero[n])
{
    double x;
    x = BinDec(numero);
    ConversaoDecimalHexadecimal(x);
}

//função que printa o menu
void Menu()
{
    printf("Em qual base seu numero vai ser inserido?\n\n1 - Binario\n2 - Decimal\n3 - Hexadecimal\n\nEscolha: ");
}

//função que organiza as escolhas
void Escolha()
{
    //declaração das variáveis
    int invalido=0, escolha, escolha1;
    double x;
    char numero[n];

    //mensagem inicial
    system("cls");
    printf("Bem Vindo ao conversor de bases, feito por Davi Matias.");
    Menu();
    scanf("%d", &escolha);
    system("cls");

    //divisão a partir da escolha
    while(escolha != 0){
        if(escolha == 1){
            //escolha binario
            printf("Insira seu numero em binario: ");
            scanf("%s", &numero);
            puts("\nEsta e a conversao:\n");
            ConversaoBinarioDecimal(numero);
            ConversaoBinarioHexadecimal(numero);
            invalido = 0;
        } else if (escolha == 2){
            //escolha decimal
            printf("Insira seu numero em decimal: ");
            scanf("%le", &x);
            puts("\nEsta e a conversao:\n");
            ConversaoDecimalBinario(x);
            ConversaoDecimalHexadecimal(x);
            invalido = 0;
        } else if (escolha == 3){
            //escolha hexadecimal
            printf("Insira seu numero em hexadecimal: ");
            scanf("%s", &numero);
            puts("\nEsta e a conversao:\n");
            ConversaoHexadecimalBinario(numero);
            ConversaoHexadecimalDecimal(numero);
            invalido = 0;
        } else {
            puts("Escolha invalida.");
            Sleep(3000);
            invalido = 1;
            system("cls");
        }

        puts("\n");
        //mostrar quando um número valido for inserido
        while(invalido == 0){
            //verificando se o usuário quer sair do programa
            printf("Quer adicionar outro numero?\n\n9 - Adicionar outro numero\n0 - Sair do Programa\n\nEscolha: ");
            scanf("%d", &escolha1);
            system("cls");

            if(escolha1 == 0){
                puts("Obrigado por utilizar o programa. Ate a proxima!");
                Sleep(3000);
                system("cls");
                return;
            } else if (escolha1 == 9){
                invalido = 1;
            }  else {
                puts("Escolha invalida.");
                Sleep(3000);
                system("cls");
            }
        }

        //apresentando o menu novamente
        system("cls");
        Menu();
        scanf("%d", &escolha);
        system("cls");
    }
}

int main()
{
    Escolha();
    return 0;
}