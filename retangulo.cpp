#include<iostream>
#include"retangulo.h"
#include"poligono.h"
#include"point.h"

using namespace std;
//Metodo construtor da classe
retangulo::retangulo(float _altura, float _largura, float _x0, float _y0)
{
//Pontos auxiliares
    point p0, p1, p2, p3;
//Numero de vertices do poligono retangulo
    int vert;
    cout << "Digite apenas 4, pois sera o numero de vertice: " << endl;
    cin >> vert;
//Condiçao para garantir que o usuario digite a quantidade de vertices correta
    if(vert != 4)
    {
        exit(0);
    }
    setNVertices(vert);

    x0 = _x0;
    y0 = _y0;
    altura = _altura;
    largura = _largura;
//Criando os vertices a partir dos pontos auxiliares
    p0.setXY(_x0,_y0);
    p1.setXY(_x0+_largura,_y0);
    p2.setXY(_x0+_largura,_y0-_altura);
    p3.setXY(_x0,_y0-_altura);

    insere_pontos2(p0,p1,p2,p3);












};

