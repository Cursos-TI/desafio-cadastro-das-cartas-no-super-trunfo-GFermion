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

// nivel intermediario do desafio

// calcular PIB per capta, Densidade populacional e Super poder.

/*
para facilitar a escrita usarei as siglas a seguir
e = estado
ppc = PIB per capta
dp = Densidade Populacional
pow = Super poder
o formato continua sendo o do nivel basico: estado, numero referente ao estado, sigla referente ao atributo e mais um numero referindo-se a cidade.
*/

// Cidades do estado 1
float e1ppc1, e1ppc2, e1ppc3, e1ppc4, e1dp1, e1dp2, e1dp3, e1dp4, e1pow1, e1pow2, e1pow3, e1pow4;

// Cidades do estado 2
float e2ppc1, e2ppc2, e2ppc3, e2ppc4, e2dp1, e2dp2, e2dp3, e2dp4, e2pow1, e2pow2, e2pow3, e2pow4;

// Cidades do estado 3
float e3ppc1, e3ppc2, e3ppc3, e3ppc4, e3dp1, e3dp2, e3dp3, e3dp4, e3pow1, e3pow2, e3pow3, e3pow4;

// Cidades do estado 4
float e4ppc1, e4ppc2, e4ppc3, e4ppc4, e4dp1, e4dp2, e4dp3, e4dp4, e4pow1, e4pow2, e4pow3, e4pow4;

// Cidades do estado 5
float e5ppc1, e5ppc2, e5ppc3, e5ppc4, e5dp1, e5dp2, e5dp3, e5dp4, e5pow1, e5pow2, e5pow3, e5pow4;

// Cidades do estado 6
float e6ppc1, e6ppc2, e6ppc3, e6ppc4, e6dp1, e6dp2, e6dp3, e6dp4, e6pow1, e6pow2, e6pow3, e6pow4;

// Cidades do estado 7
float e7ppc1, e7ppc2, e7ppc3, e7ppc4, e7dp1, e7dp2, e7dp3, e7dp4, e7pow1, e7pow2, e7pow3, e7pow4;

// Cidades do estado 8
float e8ppc1, e8ppc2, e8ppc3, e8ppc4, e8dp1, e8dp2, e8dp3, e8dp4, e8pow1, e8pow2, e8pow3, e8pow4;

// Inicio da entrada de dados pelo usuario.
// Primeiro estado com suas 4 cidades.
printf("Entre com o nome do primeiro estado (uma letra entre A e H): ");
scanf(" %c", &e1);

// Primeira cidade
printf("Vamos entrar com os dados da primeira cidade do estado %c", e1);

printf("\nNumero da cidade:");
scanf(" %i", &e1n1);
printf("População:");
scanf(" %i", &e1p1);
printf("Área:");
scanf(" %f", &e1a1);
printf("PIB:");
scanf(" %f", &e1pib1);
printf("Número de pontos turísticos:");
scanf(" %i", &e1t1);

// Segunda Cidade
printf("\nVamos entrar com os dados da Segunda cidade do estado %c", e1);

printf("\nNumero da cidade:");
scanf(" %i", &e1n2);
printf("População:");
scanf(" %i", &e1p2);
printf("Área:");
scanf(" %f", &e1a2);
printf("PIB:");
scanf(" %f", &e1pib2);
printf("Número de pontos turísticos:");
scanf(" %i", &e1t2);

// Terceira Cidade
printf("\nVamos entrar com os dados da terceira cidade do estado %c", e1);

printf("\nNumero da cidade:");
scanf(" %i", &e1n3);
printf("População:");
scanf(" %i", &e1p3);
printf("Área:");
scanf(" %f", &e1a3);
printf("PIB:");
scanf(" %f", &e1pib3);
printf("Número de pontos turísticos:");
scanf(" %i", &e1t3);

// Quarta Cidade
printf("\nVamos entrar com os dados da quarta cidade do estado %c", e1);

printf("\nNumero da cidade:");
scanf(" %i", &e1n4);
printf("População:");
scanf(" %i", &e1p4);
printf("Área:");
scanf(" %f", &e1a4);
printf("PIB:");
scanf(" %f", &e1pib4);
printf("Número de pontos turísticos:");
scanf(" %i", &e1t4);


// Segundo estado com suas 4 cidades.
printf("\nEntre com o nome do segundo estado (uma letra entre A e H): ");
scanf(" %c", &e2);

// Primeira cidade
printf("\nVamos entrar com os dados da primeira cidade do estado %c", e2);

printf("\nNumero da cidade:");
scanf(" %i", &e2n1);
printf("População:");
scanf(" %i", &e2p1);
printf("Área:");
scanf(" %f", &e2a1);
printf("PIB:");
scanf(" %f", &e2pib1);
printf("Número de pontos turísticos:");
scanf(" %i", &e2t1);

// Segunda Cidade
printf("\nVamos entrar com os dados da Segunda cidade do estado %c", e2);

printf("\nNumero da cidade:");
scanf(" %i", &e2n2);
printf("População:");
scanf(" %i", &e2p2);
printf("Área:");
scanf(" %f", &e2a2);
printf("PIB:");
scanf(" %f", &e2pib2);
printf("Número de pontos turísticos:");
scanf(" %i", &e2t2);

// Terceira Cidade
printf("\nVamos entrar com os dados da terceira cidade do estado %c", e2);

printf("\nNumero da cidade:");
scanf(" %i", &e2n3);
printf("População:");
scanf(" %i", &e2p3);
printf("Área:");
scanf(" %f", &e2a3);
printf("PIB:");
scanf(" %f", &e2pib3);
printf("Número de pontos turísticos:");
scanf(" %i", &e2t3);

// Quarta Cidade
printf("\nVamos entrar com os dados da quarta cidade do estado %c", e2);

printf("\nNumero da cidade:");
scanf(" %i", &e2n4);
printf("População:");
scanf(" %i", &e2p4);
printf("Área:");
scanf(" %f", &e2a4);
printf("PIB:");
scanf(" %f", &e2pib4);
printf("Número de pontos turísticos:");
scanf(" %i", &e2t4);

// Terceiro estado com suas 4 cidades.
printf("\nEntre com o nome do terceiro estado (uma letra entre A e H): ");
scanf(" %c", &e3);
// Primeira cidade
printf("\nVamos entrar com os dados da primeira cidade do estado %c", e3);

printf("\nNumero da cidade:");
scanf(" %i", &e3n1);
printf("População:");
scanf(" %i", &e3p1);
printf("Área:");
scanf(" %f", &e3a1);
printf("PIB:");
scanf(" %f", &e3pib1);
printf("Número de pontos turísticos:");
scanf(" %i", &e3t1);

// Segunda Cidade
printf("\nVamos entrar com os dados da Segunda cidade do estado %c", e3);

printf("\nNumero da cidade:");
scanf(" %i", &e3n2);
printf("População:");
scanf(" %i", &e3p2);
printf("Área:");
scanf(" %f", &e3a2);
printf("PIB:");
scanf(" %f", &e3pib2);
printf("Número de pontos turísticos:");
scanf(" %i", &e3t2);

// Terceira Cidade
printf("\nVamos entrar com os dados da terceira cidade do estado %c", e3);

printf("\nNumero da cidade:");
scanf(" %i", &e3n3);
printf("População:");
scanf(" %i", &e3p3);
printf("Área:");
scanf(" %f", &e3a3);
printf("PIB:");
scanf(" %f", &e3pib3);
printf("Número de pontos turísticos:");
scanf(" %i", &e3t3);

// Quarta Cidade
printf("\nVamos entrar com os dados da quarta cidade do estado %c", e3);

printf("\nNumero da cidade:");
scanf(" %i", &e3n4);
printf("População:");
scanf(" %i", &e3p4);
printf("Área:");
scanf(" %f", &e3a4);
printf("PIB:");
scanf(" %f", &e3pib4);
printf("Número de pontos turísticos:");
scanf(" %i", &e3t4);

// Quarto estado com suas 4 cidades.
printf("\nEntre com o nome do quarto estado (uma letra entre A e H): ");
scanf(" %c", &e4);
// Primeira cidade
printf("\nVamos entrar com os dados da primeira cidade do estado %c", e4);

printf("\nNumero da cidade:");
scanf(" %i", &e4n1);
printf("População:");
scanf(" %i", &e4p1);
printf("Área:");
scanf(" %f", &e4a1);
printf("PIB:");
scanf(" %f", &e4pib1);
printf("Número de pontos turísticos:");
scanf(" %i", &e4t1);

// Segunda Cidade
printf("\nVamos entrar com os dados da Segunda cidade do estado %c", e4);

printf("\nNumero da cidade:");
scanf(" %i", &e4n2);
printf("População:");
scanf(" %i", &e4p2);
printf("Área:");
scanf(" %f", &e4a2);
printf("PIB:");
scanf(" %f", &e4pib2);
printf("Número de pontos turísticos:");
scanf(" %i", &e4t2);

// Terceira Cidade
printf("\nVamos entrar com os dados da terceira cidade do estado %c", e4);

printf("\nNumero da cidade:");
scanf(" %i", &e4n3);
printf("População:");
scanf(" %i", &e4p3);
printf("Área:");
scanf(" %f", &e4a3);
printf("PIB:");
scanf(" %f", &e4pib3);
printf("Número de pontos turísticos:");
scanf(" %i", &e4t3);

// Quarta Cidade
printf("\nVamos entrar com os dados da quarta cidade do estado %c", e4);

printf("\nNumero da cidade:");
scanf(" %i", &e4n4);
printf("População:");
scanf(" %i", &e4p4);
printf("Área:");
scanf(" %f", &e4a4);
printf("PIB:");
scanf(" %f", &e4pib4);
printf("Número de pontos turísticos:");
scanf(" %i", &e4t4);

// Quinto estado com suas 4 cidades.
printf("\nEntre com o nome do quintp estado (uma letra entre A e H): ");
scanf(" %c", &e5);
// Primeira cidade
printf("\nVamos entrar com os dados da primeira cidade do estado %c", e5);

printf("\nNumero da cidade:");
scanf(" %i", &e5n1);
printf("População:");
scanf(" %i", &e5p1);
printf("Área:");
scanf(" %f", &e5a1);
printf("PIB:");
scanf(" %f", &e5pib1);
printf("Número de pontos turísticos:");
scanf(" %i", &e5t1);

// Segunda Cidade
printf("\nVamos entrar com os dados da Segunda cidade do estado %c", e5);

printf("\nNumero da cidade:");
scanf(" %i", &e5n2);
printf("População:");
scanf(" %i", &e5p2);
printf("Área:");
scanf(" %f", &e5a2);
printf("PIB:");
scanf(" %f", &e5pib2);
printf("Número de pontos turísticos:");
scanf(" %i", &e5t2);

// Terceira Cidade
printf("\nVamos entrar com os dados da terceira cidade do estado %c", e5);

printf("\nNumero da cidade:");
scanf(" %i", &e5n3);
printf("População:");
scanf(" %i", &e5p3);
printf("Área:");
scanf(" %f", &e5a3);
printf("PIB:");
scanf(" %f", &e5pib3);
printf("Número de pontos turísticos:");
scanf(" %i", &e5t3);

// Quarta Cidade
printf("\nVamos entrar com os dados da quarta cidade do estado %c", e5);

printf("\nNumero da cidade:");
scanf(" %i", &e5n4);
printf("População:");
scanf(" %i", &e5p4);
printf("Área:");
scanf(" %f", &e5a4);
printf("PIB:");
scanf(" %f", &e5pib4);
printf("Número de pontos turísticos:");
scanf(" %i", &e5t4);

// Sexto estado com suas 4 cidades.
printf("\nEntre com o nome do sexto estado (uma letra entre A e H): ");
scanf(" %c", &e6);
// Primeira cidade
printf("\nVamos entrar com os dados da primeira cidade do estado %c", e6);

printf("\nNumero da cidade:");
scanf(" %i", &e6n1);
printf("População:");
scanf(" %i", &e6p1);
printf("Área:");
scanf(" %f", &e6a1);
printf("PIB:");
scanf(" %f", &e6pib1);
printf("Número de pontos turísticos:");
scanf(" %i", &e6t1);

// Segunda Cidade
printf("\nVamos entrar com os dados da Segunda cidade do estado %c", e6);

printf("\nNumero da cidade:");
scanf(" %i", &e6n2);
printf("População:");
scanf(" %i", &e6p2);
printf("Área:");
scanf(" %f", &e6a2);
printf("PIB:");
scanf(" %f", &e6pib2);
printf("Número de pontos turísticos:");
scanf(" %i", &e6t2);

// Terceira Cidade
printf("\nVamos entrar com os dados da terceira cidade do estado %c", e6);

printf("\nNumero da cidade:");
scanf(" %i", &e6n3);
printf("População:");
scanf(" %i", &e6p3);
printf("Área:");
scanf(" %f", &e6a3);
printf("PIB:");
scanf(" %f", &e6pib3);
printf("Número de pontos turísticos:");
scanf(" %i", &e6t3);

// Quarta Cidade
printf("\nVamos entrar com os dados da quarta cidade do estado %c", e6);

printf("\nNumero da cidade:");
scanf(" %i", &e6n4);
printf("População:");
scanf(" %i", &e6p4);
printf("Área:");
scanf(" %f", &e6a4);
printf("PIB:");
scanf(" %f", &e6pib4);
printf("Número de pontos turísticos:");
scanf(" %i", &e6t4);

// Setimo estado com suas 4 cidades.
printf("\nEntre com o nome do setimo estado (uma letra entre A e H): ");
scanf(" %c", &e7);
// Primeira cidade
printf("\nVamos entrar com os dados da primeira cidade do estado %c", e7);

printf("\nNumero da cidade:");
scanf(" %i", &e7n1);
printf("População:");
scanf(" %i", &e7p1);
printf("Área:");
scanf(" %f", &e7a1);
printf("PIB:");
scanf(" %f", &e7pib1);
printf("Número de pontos turísticos:");
scanf(" %i", &e7t1);

// Segunda Cidade
printf("\nVamos entrar com os dados da Segunda cidade do estado %c", e7);

printf("\nNumero da cidade:");
scanf(" %i", &e7n2);
printf("População:");
scanf(" %i", &e7p2);
printf("Área:");
scanf(" %f", &e7a2);
printf("PIB:");
scanf(" %f", &e7pib2);
printf("Número de pontos turísticos:");
scanf(" %i", &e7t2);

// Terceira Cidade
printf("\nVamos entrar com os dados da terceira cidade do estado %c", e7);

printf("\nNumero da cidade:");
scanf(" %i", &e7n3);
printf("População:");
scanf(" %i", &e7p3);
printf("Área:");
scanf(" %f", &e7a3);
printf("PIB:");
scanf(" %f", &e7pib3);
printf("Número de pontos turísticos:");
scanf(" %i", &e7t3);

// Quarta Cidade
printf("\nVamos entrar com os dados da quarta cidade do estado %c", e7);

printf("\nNumero da cidade:");
scanf(" %i", &e7n4);
printf("População:");
scanf(" %i", &e7p4);
printf("Área:");
scanf(" %f", &e7a4);
printf("PIB:");
scanf(" %f", &e7pib4);
printf("Número de pontos turísticos:");
scanf(" %i", &e7t4);

// Oitavo estado com suas 4 cidades.
printf("\nEntre com o nome do oitavo estado (uma letra entre A e H): ");
scanf(" %c", &e8);
// Primeira cidade
printf("\nVamos entrar com os dados da primeira cidade do estado %c", e8);

printf("\nNumero da cidade:");
scanf(" %i", &e8n1);
printf("População:");
scanf(" %i", &e8p1);
printf("Área:");
scanf(" %f", &e8a1);
printf("PIB:");
scanf(" %f", &e8pib1);
printf("Número de pontos turísticos:");
scanf(" %i", &e8t1);

// Segunda Cidade
printf("\nVamos entrar com os dados da Segunda cidade do estado %c", e8);

printf("\nNumero da cidade:");
scanf(" %i", &e8n2);
printf("População:");
scanf(" %i", &e8p2);
printf("Área:");
scanf(" %f", &e8a2);
printf("PIB:");
scanf(" %f", &e8pib2);
printf("Número de pontos turísticos:");
scanf(" %i", &e8t2);

// Terceira Cidade
printf("\nVamos entrar com os dados da terceira cidade do estado %c", e8);

printf("\nNumero da cidade:");
scanf(" %i", &e8n3);
printf("População:");
scanf(" %i", &e8p3);
printf("Área:");
scanf(" %f", &e8a3);
printf("PIB:");
scanf(" %f", &e8pib3);
printf("Número de pontos turísticos:");
scanf(" %i", &e8t3);

// Quarta Cidade
printf("\nVamos entrar com os dados da quarta cidade do estado %c\n", e8);

printf("\nNumero da cidade:");
scanf(" %i", &e8n4);
printf("População:");
scanf(" %i", &e8p4);
printf("Área:");
scanf(" %f", &e8a4);
printf("PIB:");
scanf(" %f", &e8pib4);
printf("Número de pontos turísticos:");
scanf(" %i", &e8t4);

// Calculo das variaveis nivel intermediario do desafio.

// Estado 1
// Cidade 1
e1ppc1 = e1pib1 / e1p1;
e1dp1 = e1p1 / e1a1;
e1pow1 = e1p1 + e1a1 + e1pib1 + e1t1 + e1ppc1 + e1dp1;

// Cidade 2
e1ppc2 = e1pib2 / e1p2;
e1dp2 = e1p2 / e1a2;
e1pow2 = e1p2 + e1a2 + e1pib2 + e1t2 + e1ppc2 + e1dp2;

// Cidade 3
e1ppc3 = e1pib3 / e1p3;
e1dp3 = e1p3 / e1a3;
e1pow3 = e1p3 + e1a3 + e1pib3 + e1t3 + e1ppc3 + e1dp3;

// Cidade 4
e1ppc4 = e1pib4 / e1p4;
e1dp4 = e1p4 / e1a4;
e1pow4 = e1p4 + e1a4 + e1pib4 + e1t4 + e1ppc4 + e1dp4;

// Estado 2
// Cidade 1
e2ppc1 = e2pib1 / e2p1;
e2dp1 = e2p1 / e2a1;
e2pow1 = e2p1 + e2a1 + e2pib1 + e2t1 + e2ppc1 + e2dp1;

// Cidade 2
e2ppc2 = e2pib2 / e2p2;
e2dp2 = e2p2 / e2a2;
e2pow2 = e2p2 + e2a2 + e2pib2 + e2t2 + e2ppc2 + e2dp2;

// Cidade 3
e2ppc3 = e2pib3 / e2p3;
e2dp3 = e2p3 / e2a3;
e2pow3 = e2p3 + e2a3 + e2pib3 + e2t3 + e2ppc3 + e2dp3;

// Cidade 4
e2ppc4 = e2pib4 / e2p4;
e2dp4 = e2p4 / e2a4;
e2pow4 = e2p4 + e2a4 + e2pib4 + e2t4 + e2ppc4 + e2dp4;

// Estado 3
// Cidade 1
e3ppc1 = e3pib1 / e3p1;
e3dp1 = e3p1 / e3a1;
e3pow1 = e3p1 + e3a1 + e3pib1 + e3t1 + e3ppc1 + e3dp1;

// Cidade 2
e3ppc2 = e3pib2 / e3p2;
e3dp2 = e3p2 / e3a2;
e3pow2 = e3p2 + e3a2 + e3pib2 + e3t2 + e3ppc2 + e3dp2;

// Cidade 3
e3ppc3 = e3pib3 / e3p3;
e3dp3 = e3p3 / e3a3;
e3pow3 = e3p3 + e3a3 + e3pib3 + e3t3 + e3ppc3 + e3dp3;

// Cidade 4
e3ppc4 = e3pib4 / e3p4;
e3dp4 = e3p4 / e3a4;
e3pow4 = e3p4 + e3a4 + e3pib4 + e3t4 + e3ppc4 + e3dp4;

// Estado 4
// Cidade 1
e4ppc1 = e4pib1 / e4p1;
e4dp1 = e4p1 / e4a1;
e4pow1 = e4p1 + e4a1 + e4pib1 + e4t1 + e4ppc1 + e4dp1;

// Cidade 2
e4ppc2 = e4pib2 / e4p2;
e4dp2 = e4p2 / e4a2;
e4pow2 = e4p2 + e4a2 + e4pib2 + e4t2 + e4ppc2 + e4dp2;

// Cidade 3
e4ppc3 = e4pib3 / e4p3;
e4dp3 = e4p3 / e4a3;
e4pow3 = e4p3 + e4a3 + e4pib3 + e4t3 + e4ppc3 + e4dp3;

// Cidade 4
e4ppc4 = e4pib4 / e4p4;
e4dp4 = e4p4 / e4a4;
e4pow4 = e4p4 + e4a4 + e4pib4 + e4t4 + e4ppc4 + e4dp4;

// Estado 5
// Cidade 1
e5ppc1 = e5pib1 / e5p1;
e5dp1 = e5p1 / e5a1;
e5pow1 = e5p1 + e5a1 + e5pib1 + e5t1 + e5ppc1 + e5dp1;

// Cidade 2
e5ppc2 = e5pib2 / e5p2;
e5dp2 = e5p2 / e5a2;
e5pow2 = e5p2 + e5a2 + e5pib2 + e5t2 + e5ppc2 + e5dp2;

// Cidade 3
e5ppc3 = e5pib3 / e5p3;
e5dp3 = e5p3 / e5a3;
e5pow3 = e5p3 + e5a3 + e5pib3 + e5t3 + e5ppc3 + e5dp3;

// Cidade 4
e5ppc4 = e5pib4 / e5p4;
e5dp4 = e5p4 / e5a4;
e5pow4 = e5p4 + e5a4 + e5pib4 + e5t4 + e5ppc4 + e5dp4;

// Estado 6
// Cidade 1
e6ppc1 = e6pib1 / e6p1;
e6dp1 = e6p1 / e6a1;
e6pow1 = e6p1 + e6a1 + e6pib1 + e6t1 + e6ppc1 + e6dp1;

// Cidade 2
e6ppc2 = e6pib2 / e6p2;
e6dp2 = e6p2 / e6a2;
e6pow2 = e6p2 + e6a2 + e6pib2 + e6t2 + e6ppc2 + e6dp2;

// Cidade 3
e6ppc3 = e6pib3 / e6p3;
e6dp3 = e6p3 / e6a3;
e6pow3 = e6p3 + e6a3 + e6pib3 + e6t3 + e6ppc3 + e6dp3;

// Cidade 4
e6ppc4 = e6pib4 / e6p4;
e6dp4 = e6p4 / e6a4;
e6pow4 = e6p4 + e6a4 + e6pib4 + e6t4 + e6ppc4 + e6dp4;

// Estado 7
// Cidade 1
e7ppc1 = e7pib1 / e7p1;
e7dp1 = e7p1 / e7a1;
e7pow1 = e7p1 + e7a1 + e7pib1 + e7t1 + e7ppc1 + e7dp1;

// Cidade 2
e7ppc2 = e7pib2 / e7p2;
e7dp2 = e7p2 / e7a2;
e7pow2 = e7p2 + e7a2 + e7pib2 + e7t2 + e7ppc2 + e7dp2;

// Cidade 3
e7ppc3 = e7pib3 / e7p3;
e7dp3 = e7p3 / e7a3;
e7pow3 = e7p3 + e7a3 + e7pib3 + e7t3 + e7ppc3 + e7dp3;

// Cidade 4
e7ppc4 = e7pib4 / e7p4;
e7dp4 = e7p4 / e7a4;
e7pow4 = e7p4 + e7a4 + e7pib4 + e7t4 + e7ppc4 + e7dp4;

// Estado 8
// Cidade 1
e8ppc1 = e8pib1 / e8p1;
e8dp1 = e8p1 / e8a1;
e8pow1 = e8p1 + e8a1 + e8pib1 + e8t1 + e8ppc1 + e8dp1;

// Cidade 2
e8ppc2 = e8pib2 / e8p2;
e8dp2 = e8p2 / e8a2;
e8pow2 = e8p2 + e8a2 + e8pib2 + e8t2 + e8ppc2 + e8dp2;

// Cidade 3
e8ppc3 = e8pib3 / e8p3;
e8dp3 = e8p3 / e8a3;
e8pow3 = e8p3 + e8a3 + e8pib3 + e8t3 + e8ppc3 + e8dp3;

// Cidade 4
e8ppc4 = e8pib4 / e8p4;
e8dp4 = e8p4 / e8a4;
e8pow4 = e8p4 + e8a4 + e8pib4 + e8t4 + e8ppc4 + e8dp4;

//Exibição dos dados primeiro estado
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e1, e1n1, e1p1, e1a1, e1pib1, e1t1, e1ppc1, e1dp1, e1pow1);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e1, e1n2, e1p2, e1a2, e1pib2, e1t2, e1ppc2, e1dp2, e1pow2);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e1, e1n3, e1p3, e1a3, e1pib3, e1t3, e1ppc3, e1dp3, e1pow3);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e1, e1n4, e1p4, e1a4, e1pib4, e1t4, e1ppc4, e1dp4, e1pow4);

//Exibição dos dados segundo estado
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e2, e2n1, e2p1, e2a1, e2pib1, e2t1, e2ppc1, e2dp1, e2pow1);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e2, e2n2, e2p2, e2a2, e2pib2, e2t2, e2ppc2, e2dp2, e2pow2);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e2, e2n3, e2p3, e2a3, e2pib3, e2t3, e2ppc3, e2dp3, e2pow3);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e2, e2n4, e2p4, e2a4, e2pib4, e2t4, e2ppc4, e2dp4, e2pow4);

//Exibição dos dados terceiro estado
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e3, e3n1, e3p1, e3a1, e3pib1, e3t1, e3ppc1, e3dp1, e3pow1);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e3, e3n2, e3p2, e3a2, e3pib2, e3t2, e3ppc2, e3dp2, e3pow2);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e3, e3n3, e3p3, e3a3, e3pib3, e3t3, e3ppc3, e3dp3, e3pow3);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e3, e3n4, e3p4, e3a4, e3pib4, e3t4, e3ppc4, e3dp4, e3pow4);

//Exibição dos dados quarto estado
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e4, e4n1, e4p1, e4a1, e4pib1, e4t1, e4ppc1, e4dp1, e4pow1);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e4, e4n2, e4p2, e4a2, e4pib2, e4t2, e4ppc2, e4dp2, e4pow2);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e4, e4n3, e4p3, e4a3, e4pib3, e4t3, e4ppc3, e4dp3, e4pow3);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e4, e4n4, e4p4, e4a4, e4pib4, e4t4, e4ppc4, e4dp4, e4pow4);

//Exibição dos dados quinto estado
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e5, e5n1, e5p1, e5a1, e5pib1, e5t1, e5ppc1, e5dp1, e5pow1);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e5, e5n2, e5p2, e5a2, e5pib2, e5t2, e5ppc2, e5dp2, e5pow2);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e5, e5n3, e5p3, e5a3, e5pib3, e5t3, e5ppc3, e5dp3, e5pow3);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e5, e5n4, e5p4, e5a4, e5pib4, e5t4, e5ppc4, e5dp4, e5pow4);

//Exibição dos dados sexto estado
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e6, e6n1, e6p1, e6a1, e6pib1, e6t1, e6ppc1, e6dp1, e6pow1);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e6, e6n2, e6p2, e6a2, e6pib2, e6t2, e6ppc2, e6dp2, e6pow2);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e6, e6n3, e6p3, e6a3, e6pib3, e6t3, e6ppc3, e6dp3, e6pow3);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e6, e6n4, e6p4, e6a4, e6pib4, e6t4, e6ppc4, e6dp4, e6pow4);

//Exibição dos dados setimo estado
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e7, e7n1, e7p1, e7a1, e7pib1, e7t1, e7ppc1, e7dp1, e7pow1);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e7, e7n2, e7p2, e7a2, e7pib2, e7t2, e7ppc2, e7dp2, e7pow2);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e7, e7n3, e7p3, e7a3, e7pib3, e7t3, e7ppc3, e7dp3, e7pow3);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e7, e7n4, e7p4, e7a4, e7pib4, e7t4, e7ppc4, e7dp4, e7pow4);

//Exibição dos dados oitavo estado
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e8, e8n1, e8p1, e8a1, e8pib1, e8t1, e8ppc1, e8dp1, e8pow1);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e8, e8n2, e8p2, e8a2, e8pib2, e8t2, e8ppc2, e8dp2, e8pow2);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e8, e8n3, e8p3, e8a3, e8pib3, e8t3, e8ppc3, e8dp3, e8pow3);
printf("\n-----------------------------------------------------------------------------------\n");
printf("\nCodigo da cidade: %c%i\nPopulação: %i\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %i\nPIB per capta: %.2f\nDensidade populacional: %.2f\nSuper poder: %.2f", e8, e8n4, e8p4, e8a4, e8pib4, e8t4, e8ppc4, e8dp4, e8pow4);

    return 0;
}
