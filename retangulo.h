#ifndef RETANGULO_H
#define RETANGULO_H

#include "poligono.h"
#include "point.h"
//Constroi a classe retangulo tendo a classe dos poligonos herdada como superclasse, para que seus metodos sejam usados
class retangulo: public poligono
{
//Metodos privados
    private:
    float altura, largura, x0, y0;
//Metodos publicos
    public:
//Construtor da classe
    retangulo(float _altura, float _largura, float _x0, float _y0);
};
#endif // RETANGULO_H
