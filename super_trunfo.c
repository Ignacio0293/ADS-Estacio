#include <stdio.h>
    int main (){

        char nome[20] = "Vinicius"; //Variável para denominar o nome de quem está criando as cartas, com o objetivo de tornar a comunicação clara e direta
        char estado1[20] = "sp"; //Para estados, codigos e cidades foi utilizado "char" para criarmos strings a serem preenchidas com conjuntos de caracteres
        char estado2[20] = "rj";
        char codigo1[20] = "sp01";
        char codigo2[20] = "rj02";
        char cidade1[30] = "araraquara";
        char cidade2[30] = "macaé";
        int populacao1 = 10000; //a tag int foi utilizada em População e Turismo, por compreender números inteiros
        int populacao2 = 15000;
        float area1 = 100;//Ja o float foi utilizado pois Área e PIB compreender números mais complexos
        float area2 = 120;
        float pib1 = 100;
        float pib2 = 100;
        int turismo1 = 20;
        int turismo2 = 15;
        //Deixei listada todas as variáveis uma a uma para facilitar no meu entendimento inicial e evitar erros na hora de digitar, como se fosse seguir uma receita de bolo        

        printf("Olá, qual seu nome? \n");
        scanf("%s", nome);

        //Fiz os questionamentos para preencher cada carta, de maneira sequencial das variáveis. Primeiro da carta 1 e depois da carta 2
        printf("%s, digite a sigla de um estado: ", nome);//printf utilizamos para imprimir uma mensagem ao usuário
        scanf("%s", estado1);//scanf é utilizado para ler o que o usuário irá digitar
        printf("Crie um código para a carta, sendo a sigla do estado, seguido de um número de 1 a 4: ");
        scanf("%s", codigo1); //todas as variáveis "String" não necessitam de & para a denominação de cada uma       
        printf("Agora, digite o nome de uma cidade desse estado: ");
        scanf("%s", cidade1);
        printf("Me diga a população dessa cidade: ");
        scanf("%d", &populacao1);
        printf("Qual a área dessa cidade: ");
        scanf("%f",&area1);
        printf ("Agora me informe o PIB dessa cidade: ");
        scanf("%f", &pib1);
        printf("E para finalizar, %s, me diga quantos pontos turísticos essa cidade tem: ", nome);
        scanf("%d", &turismo1);
        printf("\n");//Como meu conhecimento ainda é básico, utilizei dessa maneira para pular linhas entre um assunto e outro deixando o resultado final mais claro e de fácil leitura

        printf("Muito bem, %s, agora iremos preencher os mesmos dados para a segunda carta, ok?!\n", nome);
        printf("\n");

        printf("estado: ");
        scanf("%s", estado2);
        printf("O código, sendo a sigla do estado, seguido de um número de 1 a 4: ");
        scanf("%s", codigo2);        
        printf("Nome da cidade: ");
        scanf("%s", cidade2);
        printf("População: ");
        scanf("%d", &populacao2);
        printf("Área: ");
        scanf("%f",&area2);
        printf ("PIB: ");
        scanf("%f", &pib2);
        printf("Quantidade de pontos turísticos: ");
        scanf("%d", &turismo2);
        printf("\n");
        
        printf("Perfeito, %s, a seguir você pode conferir os dados das duas cartas cadastradas para o nosso Super trunfo:\n", nome);
        printf("\n");

        //Exibi o resultado dos cadastros dos dados de cada carta uma após a outra, para facilitar na leitura de dados e visualização e confirmação de que não existe nenhum erro no percurso
        printf("Carta 1:\n");
        printf("Estado: %s\n", estado1);
        printf("Código da carta: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Quantidade de pontos turísticos: %d\n", turismo1);
        printf("\n");

        printf("Carta 2:\n");
        printf("Estado: %s\n", estado2);
        printf("Código da carta: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Quantidade de pontos turísticos: %d\n", turismo2);
        printf("\n");




    

        







    return 0;
    }
