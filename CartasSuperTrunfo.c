#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
/*
Estado (char)
Código da carta (char[])
Nome da cidade (char[])
População (unsigned long int)
Área em km² (float)
PIB (float)
Número de pontos turísticos (int)
Densidade populacional (float): calculada como população dividida pela área da cidade.
PIB per capita (float): calculado como PIB total da cidade dividido pela população.
Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder.
*/
// Estrutura para armazenar os dados de uma cidade
typedef struct {
    char nome[3];
    char codigo[10];
    unsigned long int populacao;
    float pib;
    float area;
    int pontosturisticos;
    float densidadepopulacional;
    float pibpercapta;
    float superpoder;
} Cidade;

// Estrutura para armazenar os dados de um estado
typedef struct {
    char nome[3]; // Nome do estado, uma letra entre A e H, precisei usar como string, pois o uso como %c estava dando erro na exibição.
    Cidade cidades[4]; // 4 cidades por estado
} Estado;

int main(){

Estado estados[8]; // Array para armazenar 8 estados.

// Cadastro do Estado 1
    printf("\nCadastro do Estado 1:\n");
    printf("Digite o nome do estado (Letra entre A e H): ");
    scanf(" %s", estados[0].nome);

    // Cadastro das cidades do Estado 1
    // ************* cidade 1 *************
    printf("\nCadastro da Cidade 1 do estado %s:\n", estados[0].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[0].cidades[0].nome);

    printf("População: ");
    scanf(" %lu", &estados[0].cidades[0].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[0].cidades[0].area);

    printf("PIB: ");
    scanf(" %f", &estados[0].cidades[0].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[0].cidades[0].pontosturisticos);

    // Uso do sprintf para concatenação e formação do codigo da carta.
    sprintf(estados[0].cidades[0].codigo, "%s%s", estados[0].nome, estados[0].cidades[0].nome);

    // calculos das variaveis necessarias.
    estados[0].cidades[0].densidadepopulacional = estados[0].cidades[0].populacao / estados[0].cidades[0].area;

    estados[0].cidades[0].pibpercapta = estados[0].cidades[0].pib / estados[0].cidades[0].populacao;

    estados[0].cidades[0].superpoder = estados[0].cidades[0].populacao + estados[0].cidades[0].area + estados[0].cidades[0].pib + estados[0].cidades[0].pontosturisticos + estados[0].cidades[0].pibpercapta + (estados[0].cidades[0].area / estados[0].cidades[0].populacao);

    // ************* cidade 2 *************
    printf("\nCadastro da Cidade 2 do estado %s:\n", estados[0].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[0].cidades[1].nome);

    printf("População: ");
    scanf(" %lu", &estados[0].cidades[1].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[0].cidades[1].area);

    printf("PIB: ");
    scanf(" %f", &estados[0].cidades[1].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[0].cidades[1].pontosturisticos);

    sprintf(estados[0].cidades[1].codigo, "%s%s", estados[0].nome, estados[0].cidades[1].nome);

    estados[0].cidades[1].densidadepopulacional = estados[0].cidades[1].populacao / estados[0].cidades[1].area;

    estados[0].cidades[1].pibpercapta = estados[0].cidades[1].pib / estados[0].cidades[1].populacao;

    estados[0].cidades[1].superpoder = estados[0].cidades[1].populacao + estados[0].cidades[1].area + estados[0].cidades[1].pib + estados[0].cidades[1].pontosturisticos + estados[0].cidades[1].pibpercapta + (estados[0].cidades[1].area / estados[0].cidades[1].populacao);


    // ************* cidade 3 *************
    printf("\nCadastro da Cidade 3 do estado %s:\n", estados[0].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[0].cidades[2].nome);

    printf("População: ");
    scanf(" %lu", &estados[0].cidades[2].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[0].cidades[2].area);

    printf("PIB: ");
    scanf(" %f", &estados[0].cidades[2].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[0].cidades[2].pontosturisticos);

    sprintf(estados[0].cidades[2].codigo, "%s%s", estados[0].nome, estados[0].cidades[2].nome);

    estados[0].cidades[2].densidadepopulacional = estados[0].cidades[2].populacao / estados[0].cidades[2].area;

    estados[0].cidades[2].pibpercapta = estados[0].cidades[2].pib / estados[0].cidades[2].populacao;

    estados[0].cidades[2].superpoder = estados[0].cidades[2].populacao + estados[0].cidades[2].area + estados[0].cidades[2].pib + estados[0].cidades[2].pontosturisticos + estados[0].cidades[2].pibpercapta + (estados[0].cidades[2].area / estados[0].cidades[2].populacao);

    // ************* cidade 4 *************
    printf("\nCadastro da Cidade 4 do estado %s:\n", estados[0].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[0].cidades[3].nome);

    printf("População: ");
    scanf(" %lu", &estados[0].cidades[3].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[0].cidades[3].area);

    printf("PIB: ");
    scanf(" %f", &estados[0].cidades[3].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[0].cidades[3].pontosturisticos);

    sprintf(estados[0].cidades[3].codigo, "%s%s", estados[0].nome, estados[0].cidades[3].nome);

    estados[0].cidades[3].densidadepopulacional = estados[0].cidades[3].populacao / estados[0].cidades[3].area;

    estados[0].cidades[3].pibpercapta = estados[0].cidades[3].pib / estados[0].cidades[3].populacao;

    estados[0].cidades[3].superpoder = estados[0].cidades[3].populacao + estados[0].cidades[3].area + estados[0].cidades[3].pib + estados[0].cidades[3].pontosturisticos + estados[0].cidades[3].pibpercapta + (estados[0].cidades[3].area / estados[0].cidades[3].populacao);


// Cadastro do Estado 2
    printf("\nCadastro do Estado 2:\n");
    printf("Digite o nome do estado (Letra entre A e H): ");
    scanf(" %s", estados[1].nome);

    // Cadastro das cidades do Estado 2
    // ************* cidade 1 *************
    printf("\nCadastro da Cidade 1 do estado %s:\n", estados[1].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[1].cidades[0].nome);

    printf("População: ");
    scanf(" %lu", &estados[1].cidades[0].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[1].cidades[0].area);

    printf("PIB: ");
    scanf(" %f", &estados[1].cidades[0].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[1].cidades[0].pontosturisticos);

    // Uso do sprintf para concatenação e formação do codigo da carta.
    sprintf(estados[1].cidades[0].codigo, "%s%s", estados[1].nome, estados[1].cidades[0].nome);

    // calculos das variaveis necessarias.
    estados[1].cidades[0].densidadepopulacional = estados[1].cidades[0].populacao / estados[1].cidades[0].area;

    estados[1].cidades[0].pibpercapta = estados[1].cidades[0].pib / estados[1].cidades[0].populacao;

    estados[1].cidades[0].superpoder = estados[1].cidades[0].populacao + estados[1].cidades[0].area + estados[1].cidades[0].pib + estados[1].cidades[0].pontosturisticos + estados[1].cidades[0].pibpercapta + (estados[1].cidades[0].area / estados[1].cidades[0].populacao);

    // ************* cidade 2 *************
    printf("\nCadastro da Cidade 2 do estado %s:\n", estados[1].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[1].cidades[1].nome);

    printf("População: ");
    scanf(" %lu", &estados[1].cidades[1].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[1].cidades[1].area);

    printf("PIB: ");
    scanf(" %f", &estados[1].cidades[1].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[1].cidades[1].pontosturisticos);

    sprintf(estados[1].cidades[1].codigo, "%s%s", estados[1].nome, estados[1].cidades[1].nome);

    estados[1].cidades[1].densidadepopulacional = estados[1].cidades[1].populacao / estados[1].cidades[1].area;

    estados[1].cidades[1].pibpercapta = estados[1].cidades[1].pib / estados[1].cidades[1].populacao;

    estados[1].cidades[1].superpoder = estados[1].cidades[1].populacao + estados[1].cidades[1].area + estados[1].cidades[1].pib + estados[1].cidades[1].pontosturisticos + estados[1].cidades[1].pibpercapta + (estados[1].cidades[1].area / estados[1].cidades[1].populacao);


    // ************* cidade 3 *************
    printf("\nCadastro da Cidade 3 do estado %s:\n", estados[1].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[1].cidades[2].nome);

    printf("População: ");
    scanf(" %lu", &estados[1].cidades[2].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[1].cidades[2].area);

    printf("PIB: ");
    scanf(" %f", &estados[1].cidades[2].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[1].cidades[2].pontosturisticos);

    sprintf(estados[1].cidades[2].codigo, "%s%s", estados[1].nome, estados[1].cidades[2].nome);

    estados[1].cidades[2].densidadepopulacional = estados[1].cidades[2].populacao / estados[1].cidades[2].area;

    estados[1].cidades[2].pibpercapta = estados[1].cidades[2].pib / estados[1].cidades[2].populacao;

    estados[1].cidades[2].superpoder = estados[1].cidades[2].populacao + estados[1].cidades[2].area + estados[1].cidades[2].pib + estados[1].cidades[2].pontosturisticos + estados[1].cidades[2].pibpercapta + (estados[1].cidades[2].area / estados[1].cidades[2].populacao);

    // ************* cidade 4 *************
    printf("\nCadastro da Cidade 4 do estado %s:\n", estados[1].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[1].cidades[3].nome);

    printf("População: ");
    scanf(" %lu", &estados[1].cidades[3].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[1].cidades[3].area);

    printf("PIB: ");
    scanf(" %f", &estados[1].cidades[3].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[1].cidades[3].pontosturisticos);

    sprintf(estados[1].cidades[3].codigo, "%s%s", estados[1].nome, estados[1].cidades[3].nome);

    estados[1].cidades[3].densidadepopulacional = estados[1].cidades[3].populacao / estados[1].cidades[3].area;

    estados[1].cidades[3].pibpercapta = estados[1].cidades[3].pib / estados[1].cidades[3].populacao;

    estados[1].cidades[3].superpoder = estados[1].cidades[3].populacao + estados[1].cidades[3].area + estados[1].cidades[3].pib + estados[1].cidades[3].pontosturisticos + estados[1].cidades[3].pibpercapta + (estados[1].cidades[3].area / estados[1].cidades[3].populacao);


// Cadastro do Estado 3
    printf("\nCadastro do Estado 3:\n");
    printf("Digite o nome do estado (Letra entre A e H): ");
    scanf(" %s", estados[2].nome);

    // Cadastro das cidades do Estado 3
    // ************* cidade 1 *************
    printf("\nCadastro da Cidade 1 do estado %s:\n", estados[2].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[2].cidades[0].nome);

    printf("População: ");
    scanf(" %lu", &estados[2].cidades[0].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[2].cidades[0].area);

    printf("PIB: ");
    scanf(" %f", &estados[2].cidades[0].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[2].cidades[0].pontosturisticos);

    sprintf(estados[2].cidades[0].codigo, "%s%s", estados[2].nome, estados[2].cidades[0].nome);

    estados[2].cidades[0].densidadepopulacional = estados[2].cidades[0].populacao / estados[2].cidades[0].area;

    estados[2].cidades[0].pibpercapta = estados[2].cidades[0].pib / estados[2].cidades[0].populacao;

    estados[2].cidades[0].superpoder = estados[2].cidades[0].populacao + estados[2].cidades[0].area + estados[2].cidades[0].pib + estados[2].cidades[0].pontosturisticos + estados[2].cidades[0].pibpercapta + (estados[2].cidades[0].area / estados[2].cidades[0].populacao);

    // ************* cidade 2 *************
    printf("\nCadastro da Cidade 2 do estado %s:\n", estados[2].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[2].cidades[1].nome);

    printf("População: ");
    scanf(" %lu", &estados[2].cidades[1].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[2].cidades[1].area);

    printf("PIB: ");
    scanf(" %f", &estados[2].cidades[1].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[2].cidades[1].pontosturisticos);

    sprintf(estados[2].cidades[1].codigo, "%s%s", estados[2].nome, estados[2].cidades[1].nome);

    estados[2].cidades[1].densidadepopulacional = estados[2].cidades[1].populacao / estados[2].cidades[1].area;

    estados[2].cidades[1].pibpercapta = estados[2].cidades[1].pib / estados[2].cidades[1].populacao;

    estados[2].cidades[1].superpoder = estados[2].cidades[1].populacao + estados[2].cidades[1].area + estados[2].cidades[1].pib + estados[2].cidades[1].pontosturisticos + estados[2].cidades[1].pibpercapta + (estados[2].cidades[1].area / estados[2].cidades[1].populacao);


    // ************* cidade 3 *************
    printf("\nCadastro da Cidade 3 do estado %s:\n", estados[2].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[2].cidades[2].nome);

    printf("População: ");
    scanf(" %lu", &estados[2].cidades[2].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[2].cidades[2].area);

    printf("PIB: ");
    scanf(" %f", &estados[2].cidades[2].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[2].cidades[2].pontosturisticos);

    sprintf(estados[2].cidades[2].codigo, "%s%s", estados[2].nome, estados[2].cidades[2].nome);

    estados[2].cidades[2].densidadepopulacional = estados[2].cidades[2].populacao / estados[2].cidades[2].area;

    estados[2].cidades[2].pibpercapta = estados[2].cidades[2].pib / estados[2].cidades[2].populacao;

    estados[2].cidades[2].superpoder = estados[2].cidades[2].populacao + estados[2].cidades[2].area + estados[2].cidades[2].pib + estados[2].cidades[2].pontosturisticos + estados[2].cidades[2].pibpercapta + (estados[2].cidades[2].area / estados[2].cidades[2].populacao);

    // ************* cidade 4 *************
    printf("\nCadastro da Cidade 4 do estado %s:\n", estados[2].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[2].cidades[3].nome);

    printf("População: ");
    scanf(" %lu", &estados[2].cidades[3].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[2].cidades[3].area);

    printf("PIB: ");
    scanf(" %f", &estados[2].cidades[3].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[2].cidades[3].pontosturisticos);

    sprintf(estados[2].cidades[3].codigo, "%s%s", estados[2].nome, estados[2].cidades[3].nome);

    estados[2].cidades[3].densidadepopulacional = estados[2].cidades[3].populacao / estados[2].cidades[3].area;

    estados[2].cidades[3].pibpercapta = estados[2].cidades[3].pib / estados[2].cidades[3].populacao;

    estados[2].cidades[3].superpoder = estados[2].cidades[3].populacao + estados[2].cidades[3].area + estados[2].cidades[3].pib + estados[2].cidades[3].pontosturisticos + estados[2].cidades[3].pibpercapta + (estados[2].cidades[3].area / estados[2].cidades[3].populacao);


// Cadastro do Estado 4
    printf("\nCadastro do Estado 4:\n");
    printf("Digite o nome do estado (Letra entre A e H): ");
    scanf(" %s", estados[3].nome);

    // Cadastro das cidades do Estado 4
    // ************* cidade 1 *************
    printf("\nCadastro da Cidade 1 do estado %s:\n", estados[3].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[3].cidades[0].nome);

    printf("População: ");
    scanf(" %lu", &estados[3].cidades[0].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[3].cidades[0].area);

    printf("PIB: ");
    scanf(" %f", &estados[3].cidades[0].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[3].cidades[0].pontosturisticos);

    sprintf(estados[3].cidades[0].codigo, "%s%s", estados[3].nome, estados[3].cidades[0].nome);

    estados[3].cidades[0].densidadepopulacional = estados[3].cidades[0].populacao / estados[3].cidades[0].area;

    estados[3].cidades[0].pibpercapta = estados[3].cidades[0].pib / estados[3].cidades[0].populacao;

    estados[3].cidades[0].superpoder = estados[3].cidades[0].populacao + estados[3].cidades[0].area + estados[3].cidades[0].pib + estados[3].cidades[0].pontosturisticos + estados[3].cidades[0].pibpercapta + (estados[3].cidades[0].area / estados[3].cidades[0].populacao);

    // ************* cidade 2 *************
    printf("\nCadastro da Cidade 2 do estado %s:\n", estados[3].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[3].cidades[1].nome);

    printf("População: ");
    scanf(" %lu", &estados[3].cidades[1].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[3].cidades[1].area);

    printf("PIB: ");
    scanf(" %f", &estados[3].cidades[1].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[3].cidades[1].pontosturisticos);

    sprintf(estados[3].cidades[1].codigo, "%s%s", estados[3].nome, estados[3].cidades[1].nome);

    estados[3].cidades[1].densidadepopulacional = estados[3].cidades[1].populacao / estados[3].cidades[1].area;

    estados[3].cidades[1].pibpercapta = estados[3].cidades[1].pib / estados[3].cidades[1].populacao;

    estados[3].cidades[1].superpoder = estados[3].cidades[1].populacao + estados[3].cidades[1].area + estados[3].cidades[1].pib + estados[3].cidades[1].pontosturisticos + estados[3].cidades[1].pibpercapta + (estados[3].cidades[1].area / estados[3].cidades[1].populacao);


    // ************* cidade 3 *************
    printf("\nCadastro da Cidade 3 do estado %s:\n", estados[3].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[3].cidades[2].nome);

    printf("População: ");
    scanf(" %lu", &estados[3].cidades[2].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[3].cidades[2].area);

    printf("PIB: ");
    scanf(" %f", &estados[3].cidades[2].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[3].cidades[2].pontosturisticos);

    sprintf(estados[3].cidades[2].codigo, "%s%s", estados[3].nome, estados[3].cidades[2].nome);

    estados[3].cidades[2].densidadepopulacional = estados[3].cidades[2].populacao / estados[3].cidades[2].area;

    estados[3].cidades[2].pibpercapta = estados[3].cidades[2].pib / estados[3].cidades[2].populacao;

    estados[3].cidades[2].superpoder = estados[3].cidades[2].populacao + estados[3].cidades[2].area + estados[3].cidades[2].pib + estados[3].cidades[2].pontosturisticos + estados[3].cidades[2].pibpercapta + (estados[3].cidades[2].area / estados[3].cidades[2].populacao);

    // ************* cidade 4 *************
    printf("\nCadastro da Cidade 4 do estado %s:\n", estados[3].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[3].cidades[3].nome);

    printf("População: ");
    scanf(" %lu", &estados[3].cidades[3].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[3].cidades[3].area);

    printf("PIB: ");
    scanf(" %f", &estados[3].cidades[3].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[3].cidades[3].pontosturisticos);

    sprintf(estados[3].cidades[3].codigo, "%s%s", estados[3].nome, estados[3].cidades[3].nome);

    estados[3].cidades[3].densidadepopulacional = estados[3].cidades[3].populacao / estados[3].cidades[3].area;

    estados[3].cidades[3].pibpercapta = estados[3].cidades[3].pib / estados[3].cidades[3].populacao;

    estados[3].cidades[3].superpoder = estados[3].cidades[3].populacao + estados[3].cidades[3].area + estados[3].cidades[3].pib + estados[3].cidades[3].pontosturisticos + estados[3].cidades[3].pibpercapta + (estados[3].cidades[3].area / estados[3].cidades[3].populacao);


// Cadastro do Estado 5
    printf("\nCadastro do Estado 5:\n");
    printf("Digite o nome do estado (Letra entre A e H): ");
    scanf(" %s", estados[4].nome);

    // Cadastro das cidades do Estado 5
    // ************* cidade 1 *************
    printf("\nCadastro da Cidade 1 do estado %s:\n", estados[4].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[4].cidades[0].nome);

    printf("População: ");
    scanf(" %lu", &estados[4].cidades[0].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[4].cidades[0].area);

    printf("PIB: ");
    scanf(" %f", &estados[4].cidades[0].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[4].cidades[0].pontosturisticos);

    sprintf(estados[4].cidades[0].codigo, "%s%s", estados[4].nome, estados[4].cidades[0].nome);

    estados[4].cidades[0].densidadepopulacional = estados[4].cidades[0].populacao / estados[4].cidades[0].area;

    estados[4].cidades[0].pibpercapta = estados[4].cidades[0].pib / estados[4].cidades[0].populacao;

    estados[4].cidades[0].superpoder = estados[4].cidades[0].populacao + estados[4].cidades[0].area + estados[4].cidades[0].pib + estados[4].cidades[0].pontosturisticos + estados[4].cidades[0].pibpercapta + (estados[4].cidades[0].area / estados[4].cidades[0].populacao);

    // ************* cidade 2 *************
    printf("\nCadastro da Cidade 2 do estado %s:\n", estados[4].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[4].cidades[1].nome);

    printf("População: ");
    scanf(" %lu", &estados[4].cidades[1].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[4].cidades[1].area);

    printf("PIB: ");
    scanf(" %f", &estados[4].cidades[1].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[4].cidades[1].pontosturisticos);

    sprintf(estados[4].cidades[1].codigo, "%s%s", estados[4].nome, estados[4].cidades[1].nome);

    estados[4].cidades[1].densidadepopulacional = estados[4].cidades[1].populacao / estados[4].cidades[1].area;

    estados[4].cidades[1].pibpercapta = estados[4].cidades[1].pib / estados[4].cidades[1].populacao;

    estados[4].cidades[1].superpoder = estados[4].cidades[1].populacao + estados[4].cidades[1].area + estados[4].cidades[1].pib + estados[4].cidades[1].pontosturisticos + estados[4].cidades[1].pibpercapta + (estados[4].cidades[1].area / estados[4].cidades[1].populacao);


    // ************* cidade 3 *************
    printf("\nCadastro da Cidade 3 do estado %s:\n", estados[4].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[4].cidades[2].nome);

    printf("População: ");
    scanf(" %lu", &estados[4].cidades[2].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[4].cidades[2].area);

    printf("PIB: ");
    scanf(" %f", &estados[4].cidades[2].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[4].cidades[2].pontosturisticos);

    sprintf(estados[4].cidades[2].codigo, "%s%s", estados[4].nome, estados[4].cidades[2].nome);

    estados[4].cidades[2].densidadepopulacional = estados[4].cidades[2].populacao / estados[4].cidades[2].area;

    estados[4].cidades[2].pibpercapta = estados[4].cidades[2].pib / estados[4].cidades[2].populacao;

    estados[4].cidades[2].superpoder = estados[4].cidades[2].populacao + estados[4].cidades[2].area + estados[4].cidades[2].pib + estados[4].cidades[2].pontosturisticos + estados[4].cidades[2].pibpercapta + (estados[4].cidades[2].area / estados[4].cidades[2].populacao);


    // ************* cidade 4 *************
    printf("\nCadastro da Cidade 4 do estado %s:\n", estados[4].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[4].cidades[3].nome);

    printf("População: ");
    scanf(" %lu", &estados[4].cidades[3].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[4].cidades[3].area);

    printf("PIB: ");
    scanf(" %f", &estados[4].cidades[3].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[4].cidades[3].pontosturisticos);

    sprintf(estados[4].cidades[3].codigo, "%s%s", estados[4].nome, estados[4].cidades[3].nome);

    estados[4].cidades[3].densidadepopulacional = estados[4].cidades[3].populacao / estados[4].cidades[3].area;

    estados[4].cidades[3].pibpercapta = estados[4].cidades[3].pib / estados[4].cidades[3].populacao;

    estados[4].cidades[3].superpoder = estados[4].cidades[3].populacao + estados[4].cidades[3].area + estados[4].cidades[3].pib + estados[4].cidades[3].pontosturisticos + estados[4].cidades[3].pibpercapta + (estados[4].cidades[3].area / estados[0].cidades[4].populacao);


// Cadastro do Estado 6
    printf("\nCadastro do Estado 6:\n");
    printf("Digite o nome do estado (Letra entre A e H): ");
    scanf(" %s", estados[5].nome);

    // Cadastro das cidades do Estado 6
    // ************* cidade 1 *************
    printf("\nCadastro da Cidade 1 do estado %s:\n", estados[5].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[5].cidades[0].nome);

    printf("População: ");
    scanf(" %lu", &estados[5].cidades[0].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[5].cidades[0].area);

    printf("PIB: ");
    scanf(" %f", &estados[5].cidades[0].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[5].cidades[0].pontosturisticos);

    sprintf(estados[5].cidades[0].codigo, "%s%s", estados[5].nome, estados[5].cidades[0].nome);

    estados[5].cidades[0].densidadepopulacional = estados[5].cidades[0].populacao / estados[5].cidades[0].area;

    estados[5].cidades[0].pibpercapta = estados[5].cidades[0].pib / estados[5].cidades[0].populacao;

    estados[5].cidades[0].superpoder = estados[5].cidades[0].populacao + estados[5].cidades[0].area + estados[5].cidades[0].pib + estados[5].cidades[0].pontosturisticos + estados[5].cidades[0].pibpercapta + (estados[5].cidades[0].area / estados[5].cidades[0].populacao);

    // ************* cidade 2 *************
    printf("\nCadastro da Cidade 2 do estado %s:\n", estados[5].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[5].cidades[1].nome);

    printf("População: ");
    scanf(" %lu", &estados[5].cidades[1].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[5].cidades[1].area);

    printf("PIB: ");
    scanf(" %f", &estados[5].cidades[1].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[5].cidades[1].pontosturisticos);

    sprintf(estados[5].cidades[1].codigo, "%s%s", estados[5].nome, estados[5].cidades[1].nome);

    estados[5].cidades[1].densidadepopulacional = estados[5].cidades[1].populacao / estados[5].cidades[1].area;

    estados[5].cidades[1].pibpercapta = estados[5].cidades[1].pib / estados[5].cidades[1].populacao;

    estados[5].cidades[1].superpoder = estados[5].cidades[1].populacao + estados[5].cidades[1].area + estados[5].cidades[1].pib + estados[5].cidades[1].pontosturisticos + estados[5].cidades[1].pibpercapta + (estados[5].cidades[1].area / estados[5].cidades[1].populacao);


    // ************* cidade 3 *************
    printf("\nCadastro da Cidade 3 do estado %s:\n", estados[5].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[5].cidades[2].nome);

    printf("População: ");
    scanf(" %lu", &estados[5].cidades[2].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[5].cidades[2].area);

    printf("PIB: ");
    scanf(" %f", &estados[5].cidades[2].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[5].cidades[2].pontosturisticos);

    sprintf(estados[5].cidades[2].codigo, "%s%s", estados[5].nome, estados[5].cidades[2].nome);

    estados[5].cidades[2].densidadepopulacional = estados[5].cidades[2].populacao / estados[5].cidades[2].area;

    estados[5].cidades[2].pibpercapta = estados[5].cidades[2].pib / estados[5].cidades[2].populacao;

    estados[5].cidades[2].superpoder = estados[5].cidades[2].populacao + estados[5].cidades[2].area + estados[5].cidades[2].pib + estados[5].cidades[2].pontosturisticos + estados[5].cidades[2].pibpercapta + (estados[5].cidades[2].area / estados[5].cidades[2].populacao);

    // ************* cidade 4 *************
    printf("\nCadastro da Cidade 4 do estado %s:\n", estados[5].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[5].cidades[3].nome);

    printf("População: ");
    scanf(" %lu", &estados[5].cidades[3].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[5].cidades[3].area);

    printf("PIB: ");
    scanf(" %f", &estados[5].cidades[3].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[5].cidades[3].pontosturisticos);

    sprintf(estados[5].cidades[3].codigo, "%s%s", estados[5].nome, estados[5].cidades[3].nome);

    estados[5].cidades[3].densidadepopulacional = estados[5].cidades[3].populacao / estados[5].cidades[3].area;

    estados[5].cidades[3].pibpercapta = estados[5].cidades[3].pib / estados[5].cidades[3].populacao;

    estados[5].cidades[3].superpoder = estados[5].cidades[3].populacao + estados[5].cidades[3].area + estados[5].cidades[3].pib + estados[5].cidades[3].pontosturisticos + estados[5].cidades[3].pibpercapta + (estados[5].cidades[3].area / estados[5].cidades[3].populacao);


// Cadastro do Estado 7
    printf("\nCadastro do Estado 7:\n");
    printf("Digite o nome do estado (Letra entre A e H): ");
    scanf(" %s", estados[6].nome);

    // Cadastro das cidades do Estado 7
    // ************* cidade 1 *************
    printf("\nCadastro da Cidade 1 do estado %s:\n", estados[6].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[6].cidades[0].nome);

    printf("População: ");
    scanf(" %lu", &estados[6].cidades[0].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[6].cidades[0].area);

    printf("PIB: ");
    scanf(" %f", &estados[6].cidades[0].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[6].cidades[0].pontosturisticos);

    sprintf(estados[6].cidades[0].codigo, "%s%s", estados[6].nome, estados[6].cidades[0].nome);

    estados[6].cidades[0].densidadepopulacional = estados[6].cidades[0].populacao / estados[6].cidades[0].area;

    estados[6].cidades[0].pibpercapta = estados[6].cidades[0].pib / estados[6].cidades[0].populacao;

    estados[6].cidades[0].superpoder = estados[6].cidades[0].populacao + estados[6].cidades[0].area + estados[6].cidades[0].pib + estados[6].cidades[0].pontosturisticos + estados[6].cidades[0].pibpercapta + (estados[6].cidades[0].area / estados[6].cidades[0].populacao);

    // ************* cidade 2 *************
    printf("\nCadastro da Cidade 2 do estado %s:\n", estados[6].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[6].cidades[1].nome);

    printf("População: ");
    scanf(" %lu", &estados[6].cidades[1].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[6].cidades[1].area);

    printf("PIB: ");
    scanf(" %f", &estados[6].cidades[1].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[6].cidades[1].pontosturisticos);

    sprintf(estados[6].cidades[1].codigo, "%s%s", estados[6].nome, estados[6].cidades[1].nome);

    estados[6].cidades[1].densidadepopulacional = estados[6].cidades[1].populacao / estados[6].cidades[1].area;

    estados[6].cidades[1].pibpercapta = estados[6].cidades[1].pib / estados[6].cidades[1].populacao;

    estados[6].cidades[1].superpoder = estados[6].cidades[1].populacao + estados[6].cidades[1].area + estados[6].cidades[1].pib + estados[6].cidades[1].pontosturisticos + estados[6].cidades[1].pibpercapta + (estados[6].cidades[1].area / estados[6].cidades[1].populacao);


    // ************* cidade 3 *************
    printf("\nCadastro da Cidade 3 do estado %s:\n", estados[6].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[6].cidades[2].nome);

    printf("População: ");
    scanf(" %lu", &estados[6].cidades[2].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[6].cidades[2].area);

    printf("PIB: ");
    scanf(" %f", &estados[6].cidades[2].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[6].cidades[2].pontosturisticos);

    sprintf(estados[6].cidades[2].codigo, "%s%s", estados[6].nome, estados[6].cidades[2].nome);

    estados[6].cidades[2].densidadepopulacional = estados[6].cidades[2].populacao / estados[6].cidades[2].area;

    estados[6].cidades[2].pibpercapta = estados[6].cidades[2].pib / estados[6].cidades[2].populacao;

    estados[6].cidades[2].superpoder = estados[6].cidades[2].populacao + estados[6].cidades[2].area + estados[6].cidades[2].pib + estados[6].cidades[2].pontosturisticos + estados[6].cidades[2].pibpercapta + (estados[6].cidades[2].area / estados[6].cidades[2].populacao);

    // ************* cidade 4 *************
    printf("\nCadastro da Cidade 4 do estado %s:\n", estados[6].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[6].cidades[3].nome);

    printf("População: ");
    scanf(" %lu", &estados[6].cidades[3].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[6].cidades[3].area);

    printf("PIB: ");
    scanf(" %f", &estados[6].cidades[3].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[6].cidades[3].pontosturisticos);

    sprintf(estados[6].cidades[3].codigo, "%s%s", estados[6].nome, estados[6].cidades[3].nome);

    estados[6].cidades[3].densidadepopulacional = estados[6].cidades[3].populacao / estados[6].cidades[3].area;

    estados[6].cidades[3].pibpercapta = estados[6].cidades[3].pib / estados[6].cidades[3].populacao;

    estados[6].cidades[3].superpoder = estados[6].cidades[3].populacao + estados[6].cidades[3].area + estados[6].cidades[3].pib + estados[6].cidades[3].pontosturisticos + estados[6].cidades[3].pibpercapta + (estados[6].cidades[3].area / estados[6].cidades[3].populacao);


// Cadastro do Estado 8
    printf("\nCadastro do Estado 8:\n");
    printf("Digite o nome do estado (Letra entre A e H): ");
    scanf(" %s", estados[7].nome);

    // Cadastro das cidades do Estado 8
    // ************* cidade 1 *************
    printf("\nCadastro da Cidade 1 do estado %s:\n", estados[7].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[7].cidades[0].nome);

    printf("População: ");
    scanf(" %lu", &estados[7].cidades[0].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[7].cidades[0].area);

    printf("PIB: ");
    scanf(" %f", &estados[7].cidades[0].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[7].cidades[0].pontosturisticos);

    sprintf(estados[7].cidades[0].codigo, "%s%s", estados[7].nome, estados[7].cidades[0].nome);

    estados[7].cidades[0].densidadepopulacional = estados[7].cidades[0].populacao / estados[7].cidades[0].area;

    estados[7].cidades[0].pibpercapta = estados[7].cidades[0].pib / estados[7].cidades[0].populacao;

    estados[7].cidades[0].superpoder = estados[7].cidades[0].populacao + estados[7].cidades[0].area + estados[7].cidades[0].pib + estados[7].cidades[0].pontosturisticos + estados[7].cidades[0].pibpercapta + (estados[7].cidades[0].area / estados[7].cidades[0].populacao);

    // ************* cidade 2 *************
    printf("\nCadastro da Cidade 2 do estado %s:\n", estados[7].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[7].cidades[1].nome);

    printf("População: ");
    scanf(" %lu", &estados[7].cidades[1].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[7].cidades[1].area);

    printf("PIB: ");
    scanf(" %f", &estados[7].cidades[1].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[7].cidades[1].pontosturisticos);

    sprintf(estados[7].cidades[1].codigo, "%s%s", estados[7].nome, estados[7].cidades[1].nome);

    estados[7].cidades[1].densidadepopulacional = estados[7].cidades[1].populacao / estados[7].cidades[1].area;

    estados[7].cidades[1].pibpercapta = estados[7].cidades[1].pib / estados[7].cidades[1].populacao;

    estados[7].cidades[1].superpoder = estados[7].cidades[1].populacao + estados[7].cidades[1].area + estados[7].cidades[1].pib + estados[7].cidades[1].pontosturisticos + estados[7].cidades[1].pibpercapta + (estados[7].cidades[1].area / estados[7].cidades[1].populacao);


    // ************* cidade 3 *************
    printf("\nCadastro da Cidade 3 do estado %s:\n", estados[7].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[7].cidades[2].nome);

    printf("População: ");
    scanf(" %lu", &estados[7].cidades[2].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[7].cidades[2].area);

    printf("PIB: ");
    scanf(" %f", &estados[7].cidades[2].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[7].cidades[2].pontosturisticos);

    sprintf(estados[7].cidades[2].codigo, "%s%s", estados[7].nome, estados[7].cidades[2].nome);

    estados[7].cidades[2].densidadepopulacional = estados[7].cidades[2].populacao / estados[7].cidades[2].area;

    estados[7].cidades[2].pibpercapta = estados[7].cidades[2].pib / estados[7].cidades[2].populacao;

    estados[7].cidades[2].superpoder = estados[7].cidades[2].populacao + estados[7].cidades[2].area + estados[7].cidades[2].pib + estados[7].cidades[2].pontosturisticos + estados[7].cidades[2].pibpercapta + (estados[7].cidades[2].area / estados[7].cidades[2].populacao);

    // ************* cidade 4 *************
    printf("\nCadastro da Cidade 4 do estado %s:\n", estados[7].nome);

    printf("Nome da cidade (Numero de 01 a 04): ");
    scanf(" %s", &estados[7].cidades[3].nome);

    printf("População: ");
    scanf(" %lu", &estados[7].cidades[3].populacao);

    printf("Área (em km²): ");
    scanf(" %f", &estados[7].cidades[3].area);

    printf("PIB: ");
    scanf(" %f", &estados[7].cidades[3].pib);

    printf("Número de pontos turísticos: ");
    scanf(" %i", &estados[7].cidades[3].pontosturisticos);

    sprintf(estados[7].cidades[3].codigo, "%s%s", estados[7].nome, estados[7].cidades[3].nome);

    estados[7].cidades[3].densidadepopulacional = estados[7].cidades[3].populacao / estados[7].cidades[3].area;

    estados[7].cidades[3].pibpercapta = estados[7].cidades[3].pib / estados[7].cidades[3].populacao;

    estados[7].cidades[3].superpoder = estados[7].cidades[3].populacao + estados[7].cidades[3].area + estados[7].cidades[3].pib + estados[7].cidades[3].pontosturisticos + estados[7].cidades[3].pibpercapta + (estados[7].cidades[3].area / estados[7].cidades[3].populacao);


// ******************** SAIDA DE DADOS ********************

printf("\n************************** 1° ESTADO **************************\n");
printf("\n************* DADOS DA 1ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[0].cidades[0].codigo);
printf("\nPIB: %.1f R$",estados[0].cidades[0].pib);
printf("\nArea: %.1f KM²",estados[0].cidades[0].area);
printf("\nNumero de pontos turisticos: %i",estados[0].cidades[0].pontosturisticos);
printf("\nPopulação: %lu",estados[0].cidades[0].populacao);
printf("\nPIB per capita: %.1f R$",estados[0].cidades[0].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[0].cidades[0].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[0].cidades[0].superpoder);

printf("\n************* DADOS DA 2ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[0].cidades[1].codigo);
printf("\nPIB: %.1f R$",estados[0].cidades[1].pib);
printf("\nArea: %.1f KM²",estados[0].cidades[1].area);
printf("\nNumero de pontos turisticos: %i",estados[0].cidades[1].pontosturisticos);
printf("\nPopulação: %lu",estados[0].cidades[1].populacao);
printf("\nPIB per capita: %.1f R$",estados[0].cidades[1].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[0].cidades[1].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[0].cidades[1].superpoder);

printf("\n************* DADOS DA 3ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[0].cidades[2].codigo);
printf("\nPIB: %.1f R$",estados[0].cidades[2].pib);
printf("\nArea: %.1f KM²",estados[0].cidades[2].area);
printf("\nNumero de pontos turisticos: %i",estados[0].cidades[2].pontosturisticos);
printf("\nPopulação: %lu",estados[0].cidades[2].populacao);
printf("\nPIB per capita: %.1f R$",estados[0].cidades[2].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[0].cidades[2].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[0].cidades[2].superpoder);

printf("\n************* DADOS DA 4ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[0].cidades[3].codigo);
printf("\nPIB: %.1f R$",estados[0].cidades[3].pib);
printf("\nArea: %.1f KM²",estados[0].cidades[3].area);
printf("\nNumero de pontos turisticos: %i",estados[0].cidades[3].pontosturisticos);
printf("\nPopulação: %lu",estados[0].cidades[3].populacao);
printf("\nPIB per capita: %.1f R$",estados[0].cidades[3].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[0].cidades[3].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[0].cidades[3].superpoder);


printf("\n************************** 2° ESTADO **************************\n");
printf("\n************* DADOS DA 1ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[1].cidades[0].codigo);
printf("\nPIB: %.1f R$",estados[1].cidades[0].pib);
printf("\nArea: %.1f KM²",estados[1].cidades[0].area);
printf("\nNumero de pontos turisticos: %i",estados[1].cidades[0].pontosturisticos);
printf("\nPopulação: %lu",estados[1].cidades[0].populacao);
printf("\nPIB per capita: %.1f R$",estados[1].cidades[0].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[1].cidades[0].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[1].cidades[0].superpoder);

printf("\n************* DADOS DA 2ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[1].cidades[1].codigo);
printf("\nPIB: %.1f R$",estados[1].cidades[1].pib);
printf("\nArea: %.1f KM²",estados[1].cidades[1].area);
printf("\nNumero de pontos turisticos: %i",estados[1].cidades[1].pontosturisticos);
printf("\nPopulação: %lu",estados[1].cidades[1].populacao);
printf("\nPIB per capita: %.1f R$",estados[1].cidades[1].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[1].cidades[1].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[1].cidades[1].superpoder);

printf("\n************* DADOS DA 3ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[1].cidades[2].codigo);
printf("\nPIB: %.1f R$",estados[1].cidades[2].pib);
printf("\nArea: %.1f KM²",estados[1].cidades[2].area);
printf("\nNumero de pontos turisticos: %i",estados[1].cidades[2].pontosturisticos);
printf("\nPopulação: %lu",estados[1].cidades[2].populacao);
printf("\nPIB per capita: %.1f R$",estados[1].cidades[2].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[1].cidades[2].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[1].cidades[2].superpoder);

printf("\n************* DADOS DA 4ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[1].cidades[3].codigo);
printf("\nPIB: %.1f R$",estados[1].cidades[3].pib);
printf("\nArea: %.1f KM²",estados[1].cidades[3].area);
printf("\nNumero de pontos turisticos: %i",estados[1].cidades[3].pontosturisticos);
printf("\nPopulação: %lu",estados[1].cidades[3].populacao);
printf("\nPIB per capita: %.1f R$",estados[1].cidades[3].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[1].cidades[3].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[1].cidades[3].superpoder);


printf("\n************************** 3° ESTADO **************************\n");
printf("\n************* DADOS DA 1ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[2].cidades[0].codigo);
printf("\nPIB: %.1f R$",estados[2].cidades[0].pib);
printf("\nArea: %.1f KM²",estados[2].cidades[0].area);
printf("\nNumero de pontos turisticos: %i",estados[2].cidades[0].pontosturisticos);
printf("\nPopulação: %lu",estados[2].cidades[0].populacao);
printf("\nPIB per capita: %.1f R$",estados[2].cidades[0].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[2].cidades[0].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[2].cidades[0].superpoder);

printf("\n************* DADOS DA 2ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[2].cidades[1].codigo);
printf("\nPIB: %.1f R$",estados[2].cidades[1].pib);
printf("\nArea: %.1f KM²",estados[2].cidades[1].area);
printf("\nNumero de pontos turisticos: %i",estados[2].cidades[1].pontosturisticos);
printf("\nPopulação: %lu",estados[2].cidades[1].populacao);
printf("\nPIB per capita: %.1f R$",estados[2].cidades[1].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[2].cidades[1].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[2].cidades[1].superpoder);

printf("\n************* DADOS DA 3ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[2].cidades[2].codigo);
printf("\nPIB: %.1f R$",estados[2].cidades[2].pib);
printf("\nArea: %.1f KM²",estados[2].cidades[2].area);
printf("\nNumero de pontos turisticos: %i",estados[2].cidades[2].pontosturisticos);
printf("\nPopulação: %lu",estados[2].cidades[2].populacao);
printf("\nPIB per capita: %.1f R$",estados[2].cidades[2].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[2].cidades[2].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[2].cidades[2].superpoder);

printf("\n************* DADOS DA 4ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[2].cidades[3].codigo);
printf("\nPIB: %.1f R$",estados[2].cidades[3].pib);
printf("\nArea: %.1f KM²",estados[2].cidades[3].area);
printf("\nNumero de pontos turisticos: %i",estados[2].cidades[3].pontosturisticos);
printf("\nPopulação: %lu",estados[2].cidades[3].populacao);
printf("\nPIB per capita: %.1f R$",estados[2].cidades[3].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[2].cidades[3].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[2].cidades[3].superpoder);


printf("\n************************** 4° ESTADO **************************\n");
printf("\n************* DADOS DA 1ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[3].cidades[0].codigo);
printf("\nPIB: %.1f R$",estados[3].cidades[0].pib);
printf("\nArea: %.1f KM²",estados[3].cidades[0].area);
printf("\nNumero de pontos turisticos: %i",estados[3].cidades[0].pontosturisticos);
printf("\nPopulação: %lu",estados[3].cidades[0].populacao);
printf("\nPIB per capita: %.1f R$",estados[3].cidades[0].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[3].cidades[0].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[3].cidades[0].superpoder);

printf("\n************* DADOS DA 2ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[3].cidades[1].codigo);
printf("\nPIB: %.1f R$",estados[3].cidades[1].pib);
printf("\nArea: %.1f KM²",estados[3].cidades[1].area);
printf("\nNumero de pontos turisticos: %i",estados[3].cidades[1].pontosturisticos);
printf("\nPopulação: %lu",estados[3].cidades[1].populacao);
printf("\nPIB per capita: %.1f R$",estados[3].cidades[1].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[3].cidades[1].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[3].cidades[1].superpoder);

printf("\n************* DADOS DA 3ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[3].cidades[2].codigo);
printf("\nPIB: %.1f R$",estados[3].cidades[2].pib);
printf("\nArea: %.1f KM²",estados[3].cidades[2].area);
printf("\nNumero de pontos turisticos: %i",estados[3].cidades[2].pontosturisticos);
printf("\nPopulação: %lu",estados[3].cidades[2].populacao);
printf("\nPIB per capita: %.1f R$",estados[3].cidades[2].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[3].cidades[2].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[3].cidades[2].superpoder);

printf("\n************* DADOS DA 4ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[3].cidades[3].codigo);
printf("\nPIB: %.1f R$",estados[3].cidades[3].pib);
printf("\nArea: %.1f KM²",estados[3].cidades[3].area);
printf("\nNumero de pontos turisticos: %i",estados[3].cidades[3].pontosturisticos);
printf("\nPopulação: %lu",estados[3].cidades[3].populacao);
printf("\nPIB per capita: %.1f R$",estados[3].cidades[3].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[3].cidades[3].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[3].cidades[3].superpoder);


printf("\n************************** 5° ESTADO **************************\n");
printf("\n************* DADOS DA 1ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[4].cidades[0].codigo);
printf("\nPIB: %.1f R$",estados[4].cidades[0].pib);
printf("\nArea: %.1f KM²",estados[4].cidades[0].area);
printf("\nNumero de pontos turisticos: %i",estados[4].cidades[0].pontosturisticos);
printf("\nPopulação: %lu",estados[4].cidades[0].populacao);
printf("\nPIB per capita: %.1f R$",estados[4].cidades[0].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[4].cidades[0].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[4].cidades[0].superpoder);

printf("\n************* DADOS DA 2ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[4].cidades[1].codigo);
printf("\nPIB: %.1f R$",estados[4].cidades[1].pib);
printf("\nArea: %.1f KM²",estados[4].cidades[1].area);
printf("\nNumero de pontos turisticos: %i",estados[4].cidades[1].pontosturisticos);
printf("\nPopulação: %lu",estados[4].cidades[1].populacao);
printf("\nPIB per capita: %.1f R$",estados[4].cidades[1].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[4].cidades[1].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[4].cidades[1].superpoder);

printf("\n************* DADOS DA 3ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[4].cidades[2].codigo);
printf("\nPIB: %.1f R$",estados[4].cidades[2].pib);
printf("\nArea: %.1f KM²",estados[4].cidades[2].area);
printf("\nNumero de pontos turisticos: %i",estados[4].cidades[2].pontosturisticos);
printf("\nPopulação: %lu",estados[4].cidades[2].populacao);
printf("\nPIB per capita: %.1f R$",estados[4].cidades[2].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[4].cidades[2].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[4].cidades[2].superpoder);

printf("\n************* DADOS DA 4ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[4].cidades[3].codigo);
printf("\nPIB: %.1f R$",estados[4].cidades[3].pib);
printf("\nArea: %.1f KM²",estados[4].cidades[3].area);
printf("\nNumero de pontos turisticos: %i",estados[4].cidades[3].pontosturisticos);
printf("\nPopulação: %lu",estados[4].cidades[3].populacao);
printf("\nPIB per capita: %.1f R$",estados[4].cidades[3].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[4].cidades[3].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[4].cidades[3].superpoder);


printf("\n************************** 6° ESTADO **************************\n");
printf("\n************* DADOS DA 1ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[5].cidades[0].codigo);
printf("\nPIB: %.1f R$",estados[5].cidades[0].pib);
printf("\nArea: %.1f KM²",estados[5].cidades[0].area);
printf("\nNumero de pontos turisticos: %i",estados[5].cidades[0].pontosturisticos);
printf("\nPopulação: %lu",estados[5].cidades[0].populacao);
printf("\nPIB per capita: %.1f R$",estados[5].cidades[0].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[5].cidades[0].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[5].cidades[0].superpoder);

printf("\n************* DADOS DA 2ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[5].cidades[1].codigo);
printf("\nPIB: %.1f R$",estados[5].cidades[1].pib);
printf("\nArea: %.1f KM²",estados[5].cidades[1].area);
printf("\nNumero de pontos turisticos: %i",estados[5].cidades[1].pontosturisticos);
printf("\nPopulação: %lu",estados[5].cidades[1].populacao);
printf("\nPIB per capita: %.1f R$",estados[5].cidades[1].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[5].cidades[1].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[5].cidades[1].superpoder);

printf("\n************* DADOS DA 3ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[5].cidades[2].codigo);
printf("\nPIB: %.1f R$",estados[5].cidades[2].pib);
printf("\nArea: %.1f KM²",estados[5].cidades[2].area);
printf("\nNumero de pontos turisticos: %i",estados[5].cidades[2].pontosturisticos);
printf("\nPopulação: %lu",estados[5].cidades[2].populacao);
printf("\nPIB per capita: %.1f R$",estados[5].cidades[2].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[5].cidades[2].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[5].cidades[2].superpoder);

printf("\n************* DADOS DA 4ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[5].cidades[3].codigo);
printf("\nPIB: %.1f R$",estados[5].cidades[3].pib);
printf("\nArea: %.1f KM²",estados[5].cidades[3].area);
printf("\nNumero de pontos turisticos: %i",estados[5].cidades[3].pontosturisticos);
printf("\nPopulação: %lu",estados[5].cidades[3].populacao);
printf("\nPIB per capita: %.1f R$",estados[5].cidades[3].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[5].cidades[3].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[5].cidades[3].superpoder);


printf("\n************************** 7° ESTADO **************************\n");
printf("\n************* DADOS DA 1ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[6].cidades[0].codigo);
printf("\nPIB: %.1f R$",estados[6].cidades[0].pib);
printf("\nArea: %.1f KM²",estados[6].cidades[0].area);
printf("\nNumero de pontos turisticos: %i",estados[6].cidades[0].pontosturisticos);
printf("\nPopulação: %lu",estados[6].cidades[0].populacao);
printf("\nPIB per capita: %.1f R$",estados[6].cidades[0].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[6].cidades[0].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[6].cidades[0].superpoder);

printf("\n************* DADOS DA 2ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[6].cidades[1].codigo);
printf("\nPIB: %.1f R$",estados[6].cidades[1].pib);
printf("\nArea: %.1f KM²",estados[6].cidades[1].area);
printf("\nNumero de pontos turisticos: %i",estados[6].cidades[1].pontosturisticos);
printf("\nPopulação: %lu",estados[6].cidades[1].populacao);
printf("\nPIB per capita: %.1f R$",estados[6].cidades[1].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[6].cidades[1].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[6].cidades[1].superpoder);

printf("\n************* DADOS DA 3ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[6].cidades[2].codigo);
printf("\nPIB: %.1f R$",estados[6].cidades[2].pib);
printf("\nArea: %.1f KM²",estados[6].cidades[2].area);
printf("\nNumero de pontos turisticos: %i",estados[6].cidades[2].pontosturisticos);
printf("\nPopulação: %lu",estados[6].cidades[2].populacao);
printf("\nPIB per capita: %.1f R$",estados[6].cidades[2].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[6].cidades[2].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[6].cidades[2].superpoder);

printf("\n************* DADOS DA 4ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[6].cidades[3].codigo);
printf("\nPIB: %.1f R$",estados[6].cidades[3].pib);
printf("\nArea: %.1f KM²",estados[6].cidades[3].area);
printf("\nNumero de pontos turisticos: %i",estados[6].cidades[3].pontosturisticos);
printf("\nPopulação: %lu",estados[6].cidades[3].populacao);
printf("\nPIB per capita: %.1f R$",estados[6].cidades[3].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[6].cidades[3].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[6].cidades[3].superpoder);


printf("\n************************** 8° ESTADO **************************\n");
printf("\n************* DADOS DA 1ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[7].cidades[0].codigo);
printf("\nPIB: %.1f R$",estados[7].cidades[0].pib);
printf("\nArea: %.1f KM²",estados[7].cidades[0].area);
printf("\nNumero de pontos turisticos: %i",estados[7].cidades[0].pontosturisticos);
printf("\nPopulação: %lu",estados[7].cidades[0].populacao);
printf("\nPIB per capita: %.1f R$",estados[7].cidades[0].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[7].cidades[0].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[7].cidades[0].superpoder);

printf("\n************* DADOS DA 2ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[7].cidades[1].codigo);
printf("\nPIB: %.1f R$",estados[7].cidades[1].pib);
printf("\nArea: %.1f KM²",estados[7].cidades[1].area);
printf("\nNumero de pontos turisticos: %i",estados[7].cidades[1].pontosturisticos);
printf("\nPopulação: %lu",estados[7].cidades[1].populacao);
printf("\nPIB per capita: %.1f R$",estados[7].cidades[1].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[7].cidades[1].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[7].cidades[1].superpoder);

printf("\n************* DADOS DA 3ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[7].cidades[2].codigo);
printf("\nPIB: %.1f R$",estados[7].cidades[2].pib);
printf("\nArea: %.1f KM²",estados[7].cidades[2].area);
printf("\nNumero de pontos turisticos: %i",estados[7].cidades[2].pontosturisticos);
printf("\nPopulação: %lu",estados[7].cidades[2].populacao);
printf("\nPIB per capita: %.1f R$",estados[7].cidades[2].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[7].cidades[2].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[7].cidades[2].superpoder);

printf("\n************* DADOS DA 4ª CIDADE *************\n");
printf("\nCodigo da carta: %s",estados[7].cidades[3].codigo);
printf("\nPIB: %.1f R$",estados[7].cidades[3].pib);
printf("\nArea: %.1f KM²",estados[7].cidades[3].area);
printf("\nNumero de pontos turisticos: %i",estados[7].cidades[3].pontosturisticos);
printf("\nPopulação: %lu",estados[7].cidades[3].populacao);
printf("\nPIB per capita: %.1f R$",estados[7].cidades[3].pibpercapta);
printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[7].cidades[3].densidadepopulacional);
printf("\nSuper Poder: %f\n",estados[7].cidades[3].superpoder);

// Seleção das cidades.
int estadoIndex1, cidadeIndex1, estadoIndex2, cidadeIndex2;

    printf("\nConsulta de dados:\n");
    printf("Estados cadastrados:\n");
    printf("1. %s\n", estados[0].nome);
    printf("2. %s\n", estados[1].nome);
    printf("3. %s\n", estados[2].nome);
    printf("4. %s\n", estados[3].nome);
    printf("5. %s\n", estados[4].nome);
    printf("6. %s\n", estados[5].nome);
    printf("7. %s\n", estados[6].nome);
    printf("8. %s\n", estados[7].nome);

    // Seleção da primeira cidade
    printf("\nSelecione a primeira cidade:\n");
    printf("Digite o numero do estado (1 a 8): ");
    scanf(" %d", &estadoIndex1);
    estadoIndex1--; // Ajusta para índice base 0

    printf("\nCidades cadastradas no estado %s:\n", estados[estadoIndex1].nome);
    printf("1. %s\n", estados[estadoIndex1].cidades[0].codigo);
    printf("2. %s\n", estados[estadoIndex1].cidades[1].codigo);
    printf("3. %s\n", estados[estadoIndex1].cidades[2].codigo);
    printf("4. %s\n", estados[estadoIndex1].cidades[3].codigo);

    printf("Digite o numero da cidade (1 a 4): ");
    scanf(" %d", &cidadeIndex1);
    cidadeIndex1--; // Ajusta para índice base 0

    // Seleção da segunda cidade
    printf("\nSelecione a segunda cidade:\n");
    printf("Digite o numero do estado (1 a 8): ");
    scanf(" %d", &estadoIndex2);
    estadoIndex2--; // Ajusta para índice base 0

    printf("\nCidades cadastradas no estado %s:\n", estados[estadoIndex2].nome);
    printf("1. %s\n", estados[estadoIndex2].cidades[0].codigo);
    printf("2. %s\n", estados[estadoIndex2].cidades[1].codigo);
    printf("3. %s\n", estados[estadoIndex2].cidades[2].codigo);
    printf("4. %s\n", estados[estadoIndex2].cidades[3].codigo);
    

    printf("Digite o numero da cidade (1 a 4): ");
    scanf(" %d", &cidadeIndex2);
    cidadeIndex2--; // Ajusta para índice base 0


    // Exibe os detalhes das cidades selecionadas
    printf("\n********************** DETALHES DAS CIDADES SELECIONADAS **********************\n");

    printf("\n********************** PRIMEIRA CIDADE **********************\n");
    printf("\nCodigo da carta: %s",estados[estadoIndex1].cidades[cidadeIndex1].codigo);
    printf("\nPIB: %.1f R$",estados[estadoIndex1].cidades[cidadeIndex1].pib);
    printf("\nArea: %.1f KM²",estados[estadoIndex1].cidades[cidadeIndex1].area);
    printf("\nNumero de pontos turisticos: %i",estados[estadoIndex1].cidades[cidadeIndex1].pontosturisticos);
    printf("\nPopulação: %lu",estados[estadoIndex1].cidades[cidadeIndex1].populacao);
    printf("\nPIB per capita: %.1f R$",estados[estadoIndex1].cidades[cidadeIndex1].pibpercapta);
    printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[estadoIndex1].cidades[cidadeIndex1].densidadepopulacional);
    printf("\nSuper Poder: %f\n",estados[estadoIndex1].cidades[cidadeIndex1].superpoder);

    printf("\n********************** SEGUNDA CIDADE **********************\n");
    printf("\nCodigo da carta: %s",estados[estadoIndex2].cidades[cidadeIndex2].codigo);
    printf("\nPIB: %.1f R$",estados[estadoIndex2].cidades[cidadeIndex2].pib);
    printf("\nArea: %.1f KM²",estados[estadoIndex2].cidades[cidadeIndex2].area);
    printf("\nNumero de pontos turisticos: %i",estados[estadoIndex2].cidades[cidadeIndex2].pontosturisticos);
    printf("\nPopulação: %lu",estados[estadoIndex2].cidades[cidadeIndex2].populacao);
    printf("\nPIB per capita: %.1f R$",estados[estadoIndex2].cidades[cidadeIndex2].pibpercapta);
    printf("\nDensidade Populacional: %.1f Cidadãos Por KM²",estados[estadoIndex2].cidades[cidadeIndex2].densidadepopulacional);
    printf("\nSuper Poder: %f\n",estados[estadoIndex2].cidades[cidadeIndex2].superpoder);


    // Comparação das cidades selecionadas. 
    printf("\n********************** COMPARAÇÃO DAS CIDADES **********************\n");
    printf("\nCaso o resultado seja 1 a carta: %s vence, caso o resultado seja 0 a carta : %s vence.\n", estados[estadoIndex1].cidades[cidadeIndex1].codigo, estados[estadoIndex2].cidades[cidadeIndex2].codigo);

    printf("PIB: %d",estados[estadoIndex1].cidades[cidadeIndex1].pib > estados[estadoIndex2].cidades[cidadeIndex2].pib );
    printf("Área: %d",estados[estadoIndex1].cidades[cidadeIndex1].area > estados[estadoIndex2].cidades[cidadeIndex2].area );
    printf("Número de pontos Turísticos: %d",estados[estadoIndex1].cidades[cidadeIndex1].pontosturisticos > estados[estadoIndex2].cidades[cidadeIndex2].pontosturisticos );
    printf("População: %d",estados[estadoIndex1].cidades[cidadeIndex1].populacao > estados[estadoIndex2].cidades[cidadeIndex2].populacao );
    printf("PIB per capita: %d",estados[estadoIndex1].cidades[cidadeIndex1].pibpercapta > estados[estadoIndex2].cidades[cidadeIndex2].pibpercapta );
    printf("Densidade Populacional: %d",estados[estadoIndex1].cidades[cidadeIndex1].densidadepopulacional < estados[estadoIndex2].cidades[cidadeIndex2].densidadepopulacional );
    printf("Super Poder: %d",estados[estadoIndex1].cidades[cidadeIndex1].superpoder > estados[estadoIndex2].cidades[cidadeIndex2].superpoder );


    return 0;
}
