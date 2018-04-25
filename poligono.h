#ifndef POLIGONO_H
#define POLIGONO_H

#include "point.h"
//Classe poligono
class poligono
{
//Variaveis privadas
    private:
        point *vertices;
        int n_vertices;
//Metodos publicos
    public:
//Construtor da classe
        poligono();
//Demais metodos
        void setNVertices(int _n);
        void insere_pontos();
        int getn_vertices();
        float area();
        void translacao(float a, float b);
        void rotacao(float ang, point _p0);
        void imprime();
        void insere_pontos2(point _p0, point _p1, point _p2, point p3);
};
#endif // POLIGONO_H
