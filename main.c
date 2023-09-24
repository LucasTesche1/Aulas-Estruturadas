#include <stdio.h>
#include <stdlib.h>
#include "poligono.h"

int main()
{
    FILE *arquivo;
    int qntVertices;

    // Abre o arquivo para leitura
    arquivo = fopen("vertices.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê o número de vértices
    fscanf(arquivo, "%d", &qntVertices);

    // Aloca memória para armazenar os vértices
    Point *vertices = (Point *)malloc(qntVertices * sizeof(Point));

    // Lê as coordenadas dos vértices
    for (int i = 0; i < qntVertices; i++)
    {
        fscanf(arquivo, "%lf %lf", &(vertices[i].x), &(vertices[i].y));
    }

    // Fecha o arquivo
    fclose(arquivo);

    // Calcula a área do polígono
    double area = calcularAreaPoligono(vertices, qntVertices);

    // Exibe a área do polígono
    printf("A area do poligono e %.2lf\n", area);

    // Libera a memória alocada
    free(vertices);

    return 0;
}