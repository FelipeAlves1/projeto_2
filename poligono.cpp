#include <iostream>
#include <cmath>
#include "point.h"
#include "poligono.h"

using namespace std;
//Construtor da classe
poligono::poligono()
{
//Inicia o n_vertices em 0 e aloca dinamicamente um array de 100 pontos
    n_vertices = 0;
    vertices = new point[100];
}
//Recebe o numero de vertices
void poligono::setNVertices(int _n)
{
    n_vertices = _n;
}
//Insere os pontos ao array vertices que pode ter até 100 pontos
void poligono::insere_pontos()
{
    for(int i=0; i<n_vertices; i++)
    {
        float aux_1, aux_2;
        cin >> aux_1 >> aux_2;

        vertices[i].setXY(aux_1, aux_2);
    }
}
//Insere 4 pontos ao array vertices que nesse caso em especial tem 4 pontos
void poligono::insere_pontos2(point _p0, point _p1, point _p2, point _p3)
{
    vertices[0] = _p0;
    vertices[1] = _p1;
    vertices[2] = _p2;
    vertices[3] = _p3;
}
//Retorna o numero de vertices a partir do metodo insere_pontos escolhido
int poligono::getn_vertices()
{
    return n_vertices;
}
//Calcula a area do poligono
float poligono::area()
{
    float area = 0;

    for(int i=0; i<n_vertices-1; i++)
    {
        area = area + vertices[i].getX() * vertices[i+1].getY();
        area = area + ((vertices[i+1].getX() * vertices[i].getY())*(-1));
    }

    area = area + vertices[n_vertices-1].getX() * vertices[0].getY();
    area = area + ((vertices[0].getX() * vertices[n_vertices-1].getY())*(-1));
    area = abs(area/2.0);
    return area;
}
//Translada o poligono
void poligono::translacao(float a, float b)
{
    for(int i =0; i<n_vertices;i++)
    {
        vertices[i].translada(a, b);
    }
}
//Rotaciona o poligono a partir do centro do mesmo, ou seja o ponto passado como argumento deve ser o centro do poligono
void poligono::rotacao(float ang, point _p0)
{
    point aux;
    float tx;
    for (int i=0;i<n_vertices;i++)
    {
        aux = vertices[i].sub(_p0);

        tx = aux.x;
        aux.setX(tx*cos(ang) - aux.y*sin(ang));
        aux.setY(tx*sin(ang) + aux.y*cos(ang));

        aux = aux.add(_p0);

        vertices[i].setX(aux.getX());
        vertices[i].setY(aux.getY());
    }
}
//Imprime o poligono
void poligono::imprime()
{
    int i;
    for(i=0; i<n_vertices-1; i++)
    {
        vertices[i].imprime();
        cout << " -> ";
    }
    vertices[i].imprime();
    cout << " -> ";
    vertices[0].imprime();
    //cout << " -> ";
}





