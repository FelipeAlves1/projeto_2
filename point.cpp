#include <iostream>
#include <cmath>
#include "point.h"

using namespace std;

//Recebe variavel x
void point::setX(float _x)
{
    x = _x;
}
//Recebe variavel y
void point::setY(float _y)
{
    y = _y;
}
//Recebe variaveis x e y
void point::setXY(float _x, float _y)
{
    x = _x;
    y = _y;
}
//Retorna x
float point::getX()
{
    return x;
}
//Retorna y
float point::getY()
{
    return y;
}
//Translada (operação de adição) ponto e adciona a um ponto auxiliar p2
point point::add(point _p1)
{
   point p2;
   p2.x = x + _p1.x;
   p2.y = y + _p1.y;
   return p2;
}
//Translada (operação de subtração) ponto e adciona a um ponto auxiliar p2
point point::sub(point _p1)
{
    point p2;
    p2.x = x - _p1.x;
    p2.y = y - _p1.y;
    return p2;
}
//Calcula a norma do ponto em relação a origem das coordenadas
float point::norma(void)
{
    float norm;
    norm = (x*x + y*y);
    return sqrt(norm);
}
//Translada ponto e joga nas variaveis privadas da classe
void point::translada(float a, float b)
{
    x = x+a;
    y = y+b;
}
//Imprime o ponto
void point::imprime()
{
    cout << "(" << x << " , " << y << ")" << endl;
}


