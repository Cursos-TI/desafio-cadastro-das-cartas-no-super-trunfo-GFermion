#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
/* 
Desafio Iniciante.
optei por usar uma letra e um numero pra agilizar na hora de codar.
optei por utilizar o seguinte formato: e(estado), seguido por um numero de 1 a 8, uma letra para um dos atributos da cidade, seguido por um numero de 1 a 4.
e = estado.
n = numero da cidade.
p = população.
t = numero de pontos turísticos.
pib = PIB.
a = área.
nome = nome da cidade.
*/
// Estados.
char e1, e2, e3, e4, e5, e6, e7, e8;
// cidades do estado 1.
int e1n1, e1n2, e1n3, e1n4, e1p1, e1p2, e1p3, e1p4, e1t1, e1t2, e1t3, e1t4;
float e1pib1, e1pib2, e1pib3, e1pib4, e1a1, e1a2, e1a3, e1a4;
// cidades do estado 2.
int e2n1, e2n2, e2n3, e2n4, e2p1, e2p2, e2p3, e2p4, e2t1, e2t2, e2t3, e2t4;
float e2pib1, e2pib2, e2pib3, e2pib4, e2a1, e2a2, e2a3, e2a4;
// cidades do estado 3.
int e3n1, e3n2, e3n3, e3n4, e3p1, e3p2, e3p3, e3p4, e3t1, e3t2, e3t3, e3t4;
float e3pib1, e3pib2, e3pib3, e3pib4, e3a1, e3a2, e3a3, e3a4;
// cidades do estado 4.
int e4n1, e4n2, e4n3, e4n4, e4p1, e4p2, e4p3, e4p4, e4t1, e4t2, e4t3, e4t4;
float e4pib1, e4pib2, e4pib3, e4pib4, e4a1, e4a2, e4a3, e4a4;
// cidades do estado 5.
int e5n1, e5n2, e5n3, e5n4, e5p1, e5p2, e5p3, e5p4, e5t1, e5t2, e5t3, e5t4;
float e5pib1, e5pib2, e5pib3, e5pib4, e5a1, e5a2, e5a3, e5a4;
// cidades do estado 6.
int e6n1, e6n2, e6n3, e6n4, e6p1, e6p2, e6p3, e6p4, e6t1, e6t2, e6t3, e6t4;
float e6pib1, e6pib2, e6pib3, e6pib4, e6a1, e6a2, e6a3, e6a4;
// cidades do estado 7.
int e7n1, e7n2, e7n3, e7n4, e7p1, e7p2, e7p3, e7p4, e7t1, e7t2, e7t3, e7t4;
float e7pib1, e7pib2, e7pib3, e7pib4, e7a1, e7a2, e7a3, e7a4;
// cidades do estado 8.
int e8n1, e8n2, e8n3, e8n4, e8p1, e8p2, e8p3, e8p4, e8t1, e8t2, e8t3, e8t4;
float e8pib1, e8pib2, e8pib3, e8pib4, e8a1, e8a2, e8a3, e8a4;

// Inicio da entrada de dados pelo usuario.
// Primeiro estado com suas 4 cidades.
printf("Entre com o nome do primeiro estado (uma letra entre A e H): ");
scanf(" %c", &e1);
// Primeira cidade
printf("Vamos entrar com os dados da primeira cidade do estado %c\n", e1);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e1n1, &e1p1, &e1a1, &e1pib1, &e1t1);
// Segunda Cidade
printf("Vamos entrar com os dados da Segunda cidade do estado %c\n", e1);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e1n2, &e1p2, &e1a2, &e1pib2, &e1t2);
// Terceira Cidade
printf("Vamos entrar com os dados da terceira cidade do estado %c\n", e1);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e1n3, &e1p3, &e1a3, &e1pib3, &e1t3);
// Quarta Cidade
printf("Vamos entrar com os dados da quarta cidade do estado %c\n", e1);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e1n4, &e1p4, &e1a4, &e1pib4, &e1t4);

// Segundo estado com suas 4 cidades.
printf("Entre com o nome do segundo estado (uma letra entre A e H): ");
scanf(" %c", &e2);
// Primeira cidade
printf("Vamos entrar com os dados da primeira cidade do estado %c\n", e2);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e2n1, &e2p1, &e2a1, &e2pib1, &e2t1);
// Segunda Cidade
printf("Vamos entrar com os dados da Segunda cidade do estado %c\n", e2);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e2n2, &e2p2, &e2a2, &e2pib2, &e2t2);
// Terceira Cidade
printf("Vamos entrar com os dados da terceira cidade do estado %c\n", e2);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e2n3, &e2p3, &e2a3, &e2pib3, &e2t3);
// Quarta Cidade
printf("Vamos entrar com os dados da quarta cidade do estado %c\n", e2);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e2n4, &e2p4, &e2a4, &e2pib4, &e2t4);

// Terceiro estado com suas 4 cidades.
printf("Entre com o nome do terceiro estado (uma letra entre A e H): ");
scanf(" %c", &e3);
// Primeira cidade
printf("Vamos entrar com os dados da primeira cidade do estado %c\n", e3);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e3n1, &e3p1, &e3a1, &e3pib1, &e3t1);
// Segunda Cidade
printf("Vamos entrar com os dados da Segunda cidade do estado %c\n", e3);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e3n2, &e3p2, &e3a2, &e3pib2, &e3t2);
// Terceira Cidade
printf("Vamos entrar com os dados da terceira cidade do estado %c\n", e3);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e3n3, &e3p3, &e3a3, &e3pib3, &e3t3);
// Quarta Cidade
printf("Vamos entrar com os dados da quarta cidade do estado %c\n", e3);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e3n4, &e3p4, &e3a4, &e3pib4, &e3t4);

// Quarto estado com suas 4 cidades.
printf("Entre com o nome do quarto estado (uma letra entre A e H): ");
scanf(" %c", &e4);
// Primeira cidade
printf("Vamos entrar com os dados da primeira cidade do estado %c\n", e4);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e4n1, &e4p1, &e4a1, &e4pib1, &e4t1);
// Segunda Cidade
printf("Vamos entrar com os dados da Segunda cidade do estado %c\n", e4);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e4n2, &e4p2, &e4a2, &e4pib2, &e4t2);
// Terceira Cidade
printf("Vamos entrar com os dados da terceira cidade do estado %c\n", e4);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e4n3, &e4p3, &e4a3, &e4pib3, &e4t3);
// Quarta Cidade
printf("Vamos entrar com os dados da quarta cidade do estado %c\n", e4);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e4n4, &e4p4, &e4a4, &e4pib4, &e4t4);

// Quinto estado com suas 4 cidades.
printf("Entre com o nome do quintp estado (uma letra entre A e H): ");
scanf(" %c", &e5);
// Primeira cidade
printf("Vamos entrar com os dados da primeira cidade do estado %c\n", e5);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e5n1, &e5p1, &e5a1, &e5pib1, &e5t1);
// Segunda Cidade
printf("Vamos entrar com os dados da Segunda cidade do estado %c\n", e5);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e5n2, &e5p2, &e5a2, &e5pib2, &e5t2);
// Terceira Cidade
printf("Vamos entrar com os dados da terceira cidade do estado %c\n", e5);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e5n3, &e5p3, &e5a3, &e5pib3, &e5t3);
// Quarta Cidade
printf("Vamos entrar com os dados da quarta cidade do estado %c\n", e5);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e5n4, &e5p4, &e5a4, &e5pib4, &e5t4);

// Sexto estado com suas 4 cidades.
printf("Entre com o nome do sexto estado (uma letra entre A e H): ");
scanf(" %c", &e6);
// Primeira cidade
printf("Vamos entrar com os dados da primeira cidade do estado %c\n", e6);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e6n1, &e6p1, &e6a1, &e6pib1, &e6t1);
// Segunda Cidade
printf("Vamos entrar com os dados da Segunda cidade do estado %c\n", e6);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e6n2, &e6p2, &e6a2, &e6pib2, &e6t2);
// Terceira Cidade
printf("Vamos entrar com os dados da terceira cidade do estado %c\n", e6);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e6n3, &e6p3, &e6a3, &e6pib3, &e6t3);
// Quarta Cidade
printf("Vamos entrar com os dados da quarta cidade do estado %c\n", e6);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e6n4, &e6p4, &e6a4, &e6pib4, &e6t4);

// Setimo estado com suas 4 cidades.
printf("Entre com o nome do setimo estado (uma letra entre A e H): ");
scanf(" %c", &e7);
// Primeira cidade
printf("Vamos entrar com os dados da primeira cidade do estado %c\n", e7);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e7n1, &e7p1, &e7a1, &e7pib1, &e7t1);
// Segunda Cidade
printf("Vamos entrar com os dados da Segunda cidade do estado %c\n", e7);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e7n2, &e7p2, &e7a2, &e7pib2, &e7t2);
// Terceira Cidade
printf("Vamos entrar com os dados da terceira cidade do estado %c\n", e7);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e7n3, &e7p3, &e7a3, &e7pib3, &e7t3);
// Quarta Cidade
printf("Vamos entrar com os dados da quarta cidade do estado %c\n", e7);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e7n4, &e7p4, &e7a4, &e7pib4, &e7t4);

// Oitavo estado com suas 4 cidades.
printf("Entre com o nome do oitavo estado (uma letra entre A e H): ");
scanf(" %c", &e8);
// Primeira cidade
printf("Vamos entrar com os dados da primeira cidade do estado %c\n", e8);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e8n1, &e8p1, &e8a1, &e8pib1, &e8t1);
// Segunda Cidade
printf("Vamos entrar com os dados da Segunda cidade do estado %c\n", e8);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e8n2, &e8p2, &e8a2, &e8pib2, &e8t2);
// Terceira Cidade
printf("Vamos entrar com os dados da terceira cidade do estado %c\n", e8);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e8n3, &e8p3, &e8a3, &e8pib3, &e8t3);
// Quarta Cidade
printf("Vamos entrar com os dados da quarta cidade do estado %c\n", e8);

printf("Numero da cidade, População, Área, PIB, Número de pontos turísticos\n");
scanf(" %i  %i  %f  %f  %i", &e8n4, &e8p4, &e8a4, &e8pib4, &e8t4);


//Exibição dos dados primeiro estado
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e1, e1n1, e1p1, e1a1, e1pib1, e1t1);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e1, e1n2, e1p2, e1a2, e1pib2, e1t2);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e1, e1n3, e1p3, e1a3, e1pib3, e1t3);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e1, e1n4, e1p4, e1a4, e1pib4, e1t4);

//Exibição dos dados segundo estado
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e2, e2n1, e2p1, e2a1, e2pib1, e2t1);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e2, e2n2, e2p2, e2a2, e2pib2, e2t2);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e2, e2n3, e2p3, e2a3, e2pib3, e2t3);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e2, e2n4, e2p4, e2a4, e2pib4, e2t4);

//Exibição dos dados terceiro estado
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e3, e3n1, e3p1, e3a1, e3pib1, e3t1);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e3, e3n2, e3p2, e3a2, e3pib2, e3t2);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e3, e3n3, e3p3, e3a3, e3pib3, e3t3);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e3, e3n4, e3p4, e3a4, e3pib4, e3t4);

//Exibição dos dados quarto estado
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e4, e4n1, e4p1, e4a1, e4pib1, e4t1);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e4, e4n2, e4p2, e4a2, e4pib2, e4t2);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e4, e4n3, e4p3, e4a3, e4pib3, e4t3);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e4, e4n4, e4p4, e4a4, e4pib4, e4t4);

//Exibição dos dados quinto estado
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e5, e5n1, e5p1, e5a1, e5pib1, e5t1);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e5, e5n2, e5p2, e5a2, e5pib2, e5t2);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e5, e5n3, e5p3, e5a3, e5pib3, e5t3);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e5, e5n4, e5p4, e5a4, e5pib4, e5t4);

//Exibição dos dados sexto estado
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e6, e6n1, e6p1, e6a1, e6pib1, e6t1);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e6, e6n2, e6p2, e6a2, e6pib2, e6t2);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e6, e6n3, e6p3, e6a3, e6pib3, e6t3);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e6, e6n4, e6p4, e6a4, e6pib4, e6t4);

//Exibição dos dados setimo estado
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e7, e7n1, e7p1, e7a1, e7pib1, e7t1);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e7, e7n2, e7p2, e7a2, e7pib2, e7t2);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e7, e7n3, e7p3, e7a3, e7pib3, e7t3);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e7, e7n4, e7p4, e7a4, e7pib4, e7t4);

//Exibição dos dados oitavo estado
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e8, e8n1, e8p1, e8a1, e8pib1, e8t1);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e8, e8n2, e8p2, e8a2, e8pib2, e8t2);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e8, e8n3, e8p3, e8a3, e8pib3, e8t3);
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\n", e8, e8n4, e8p4, e8a4, e8pib4, e8t4);


    return 0;
}
