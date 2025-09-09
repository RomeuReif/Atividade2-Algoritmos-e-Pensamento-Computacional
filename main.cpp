#include <stdio.h>
#include <stdbool.h>

// inicio do programa imc

int main(){
    float altura, peso, media, resultadoIMC;
    float somaIMC = 0;
    int contadorPessoas = 0;
    bool estaCalculando = true;
    char opcao;

    printf("-----------------------------------------\n\n");
    printf("Bem vindo a calculadora de IMC\n");
    printf("Calcule o seu IMC e melhore a sua saude\n\n");
    printf("-----------------------------------------\n\n");

    while (estaCalculando) // enquanto for true e estiver calculando o imc, ele fica em loop
    {
        printf("Digite seu peso em KGs(ex: 62.00): \n");
        scanf("%f", &peso);
        if (peso <= 0)  // verifica se peso é menor ou igual a 0
        {
            while (peso <= 0) // enquanto peso for menor ou igual a 0, continua o loop
            {
                printf("ERRO!: Peso digitado incorretamente, tente novamente!\n");
                printf("Digite seu peso novamente(ex: 62.00): \n");
                scanf("%f", &peso);
            }
            
        }

        printf("Digite sua altura em METROS(ex: 1.63):  \n");
        scanf("%f", &altura);
        if (altura <= 0) // verifica se a altura é menor ou igual a 0
        {
            while (altura <= 0) // enquanto altura for menor ou igual a 0, continua o loop
            {
                printf("ERRO!: Altura digitado incorretamente, tente novamente!\n");
                printf("Digite sua altura novamente(ex: 1.63): \n");
                scanf("%f", &altura);
            }
            
        }
        

        resultadoIMC = peso / (altura * altura); // calculo do imc
        contadorPessoas++; // soma + 1 a cada vez que calcula um novo imc
        
        // classificao do imc com base do calculco
        if (resultadoIMC < 16)
        {
            printf("Seu IMC deu %.2f e sua classificacao ficou em MAGREZA GRAVE!\n", resultadoIMC);
        } else if (resultadoIMC >= 16 && resultadoIMC < 17) 
        {
            printf("Seu IMC deu %.2f e sua classificao ficou em MAGREZA MODERADA!\n", resultadoIMC);
        } else if (resultadoIMC >= 17 && resultadoIMC < 18.5) 
        {
            printf("Seu IMC deu %.2f e sua classificao ficou em MAGREZA LEVE!\n", resultadoIMC);
        } else if (resultadoIMC >= 18.5 && resultadoIMC < 25) 
        {
            printf("Seu IMC deu %.2f e sua classificao ficou em SAUDAVEL!\n", resultadoIMC);
        } else if (resultadoIMC >= 25 && resultadoIMC < 30)
        {
           printf("Seu IMC deu %.2f e sua classificao ficou em SOBREPESO!\n", resultadoIMC);
        } else if (resultadoIMC >= 30 && resultadoIMC < 35)
        {
            printf("Seu IMC deu %.2f e sua classificao ficou em OBESIDADE GRAU I!\n", resultadoIMC);
        } else if (resultadoIMC >= 35 && resultadoIMC < 40)
        {
            printf("Seu IMC deu %.2f e sua classificao ficou em OBESIDADE GRAU II!\n", resultadoIMC);
        } else 
        {
            printf("Seu IMC deu %.2f e sua classificao ficou em OBESIDADE GRAU III!\n", resultadoIMC);
        }

        somaIMC += resultadoIMC; // para ter a media do imc de todas as pessoas que calcularam
        

        // menu de opcao
        printf("-----------------------------------------\n\n");
        printf("Deseja continuar calculando IMC? \n");
        printf("1 - Sim, quero continuar calculando!\n2 - Nao, quero sair! \n");
        scanf(" %c", &opcao);
        printf("-----------------------------------------\n\n");
        
        if (opcao != '1' && opcao != '2') // verifica se o usuario digitou algo diferente entre 1 ou 2
        {
            while (opcao != '1' && opcao != '2') // enquanto for diferente de 1 ou 2, fica em loop
            {
                printf("Opcao invalida! Digite 1 ou 2.\n");
                printf("Deseja continuar calculando IMC? \n");
                printf("1 - Sim, quero continuar calculando!\n2 - Nao, quero sair! \n");
                scanf(" %c", &opcao);
            }
        }
        if (opcao == '2') // opcao de saida do loop
        {
            printf("-----------------------------------------\n\n");
            printf("Saindo da calculadora....\n");
            printf("Quantidade de pessoa(s) que calculou imc foi de: %d\n", contadorPessoas);
            media =  somaIMC / contadorPessoas;
            printf("Media geral dos IMCS foi de: %.2f\n\n", media);
            estaCalculando = false;
            break;
        }
          
    }
    
    printf("-----------------------------------------\n\n");
    printf("Fim do programa, obrigado por usar a nossa calculadora! \nTenha uma otima semana!\n");
    printf("-----------------------------------------\n\n");
    return 0;
}
