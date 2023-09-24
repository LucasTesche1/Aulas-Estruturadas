#ifndef POLIGONO_H
#define POLIGONO_H

typedef struct {
    double x, y;
} Point;

double calcularAreaPoligono(Point* vertices, int numVertices);

#endif  // POLIGONO_H