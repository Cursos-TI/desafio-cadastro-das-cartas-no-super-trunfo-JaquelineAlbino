#include <stdio.h>


int main() {


    char Estado1;
    char Estado2;
    char Codigodacartaum[4];
    char Codigodacartadois[4];
    char nomedacidade1[20];
    char nomedacidade2[20];
    int populacao1;
    int populacao2;
    float Area1; 
    float Area2; 
    float PIB1;
    float PIB2;
    int numerosdepontosturisticos1;
    int numerosdepontosturisticos2;
    
    printf("Insira os dados da carta 01 \n");
    
    printf("Digite o Estado: \n");
    scanf(" %c", &Estado1);
 
    printf("Digite o Codigodacarta: \n");
    scanf(" %s", &Codigodacartaum);

    printf("Digite o nomedacidade: \n");
    scanf("%s", &nomedacidade1);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a Area: \n");
    scanf("%f", &Area1);

    printf("Digite a PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite a numerosdepontosturisticos: \n");
    scanf("%d", &numerosdepontosturisticos1);



    printf("Insira os dados da carta 02 \n");
    
    printf("Digite o Estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite o Codigodacarta: \n");
    scanf(" %s", &Codigodacartadois);

    printf("Digite o nomedacidade: \n");
    scanf("%s", &nomedacidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a Area: \n");
    scanf("%f", &Area2);

    printf("Digite a PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite a numerosdepontosturisticos: \n");
    scanf("%d", &numerosdepontosturisticos2);



    printf("Carta 01: \n");

    printf("Estado: %c\n", Estado1);
    printf("Codigodacarta: %s\n", Codigodacartaum);
    printf("nomedacidade: %s\n", nomedacidade1);
    printf("populacao %d\n", populacao1);
    printf("area %f\n", Area1);
    printf("PIB %.2f\n", PIB1);
    printf("numerosdepontosturisticos %d\n", numerosdepontosturisticos1);

    printf("Carta 02: \n");

    printf("Estado: %c\n", Estado2);
    printf("Codigodacarta: %s\n", Codigodacartadois);
    printf("nomedacidade: %s\n", nomedacidade2);
    printf("populacao %d\n", populacao2);
    printf("area %f\n", Area2);
    printf("PIB %.2f\n", PIB2);
    printf("numerosdepontosturisticos %d\n", numerosdepontosturisticos2);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
