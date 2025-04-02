#include <stdio.h>
#include <locale.h> //Digitei o código no codeblocks, e pesquisei para utilizar essa biblioteca como forma de reconhecer a acentuação da lingua portuguesa

    int main (){
        setlocale(LC_ALL, "Portuguese_Brazil");

        char nome[20]; //Variável para denominar o nome de quem está criando as cartas, com o objetivo de tornar a comunicação clara e direta
        char estado1[20],estado2[20]; //Para estados, codigos e cidades foi utilizado "char" para criarmos strings a serem preenchidas com conjuntos de caracteres
        char codigo1[20],codigo2[20];
        char cidade1[30],cidade2[30];
        int populacao1,populacao2; //a tag int foi utilizada em População e Turismo, por compreender números inteiros
        float area1,area2;//Ja o float foi utilizado pois Área e PIB compreender números mais complexos
        float pib1,pib2;
        int turismo1,turismo2;
        float densidade1,densidade2;
        float pibpc1, pibpc2;
        //Na primeira parte do desafio, nivel iniciante, eu estava com dificuldade em deixar cada variavel listada para tornar o código mais limpo, a partir de agora consegui deixar mais organizado e de facil entendimento

        printf("Olá, qual seu primeiro nome? \n");
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
        printf("Agora me informe o PIB dessa cidade: ");
        scanf("%f", &pib1);
        printf("E para finalizar, %s, me diga quantos pontos turísticos essa cidade tem: ", nome);
        scanf("%d", &turismo1);
        printf("\n");//Como meu conhecimento ainda é básico, utilizei dessa maneira para pular linhas entre um assunto e outro deixando o resultado final mais claro e de fácil leitura

        printf("Muito bem, %s, agora iremos preencher os mesmos dados para a segunda carta, ok?!\n", nome);
        printf("\n");

        printf("Estado: ");
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

        densidade1 = (float) populacao1/area1; //Para ambas as contas foi utilizado Casting para forçar a conversão dos dados inteiros de população em float, para que o programa não arredondasse o resultado
        densidade2 = (float) populacao2/area2;
        pibpc1 = (float) pib1/populacao1;
        pibpc2 = (float) pib2/populacao2;
        //Aqui adicionei as operações matemáticas aprendidas no nivel aventureiro para realizar a segunda parte do desafio

        printf("Perfeito, %s, a seguir você pode conferir os dados das duas cartas cadastradas para o nosso Super trunfo. Além disso, também irei calcular os resultados da Densidade populacional e do PIB per capita:\n", nome);
        printf("\n");

        //Exibi o resultado dos cadastros dos dados de cada carta uma após a outra, para facilitar na leitura de dados e visualização e confirmação de que não existe nenhum erro no percurso
        printf("Carta 1:\n");
        printf("Estado: %s\n", estado1);
        printf("Código da carta: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d Habitantes\n", populacao1);
        printf("Área: %.2fkm²\n", area1);
        printf("PIB: %.2f Bilhões de Reais\n", pib1);
        printf("Quantidade de pontos turísticos: %d\n", turismo1);
        printf ("Densidade populacional: %.2f habitantes por km²\n", densidade1);
        printf("PIB per Capita: %.2f Reais\n",pibpc1);
        printf("\n");


        printf("Carta 2:\n");
        printf("Estado: %s\n", estado2);
        printf("Código da carta: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d Habitantes\n", populacao2);
        printf("Área: %.2fkm²\n", area2);
        printf("PIB: %.2f Bilhões de Reais\n", pib2);
        printf("Quantidade de pontos turísticos: %d\n", turismo2);
        printf ("Densidade populacional: %.2f habitantes por km²\n", densidade2);
        printf("PIB per Capita: %.2f Reais\n",pibpc2);
        printf("\n");














    return 0;
    }