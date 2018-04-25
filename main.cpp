#include <iostream>
#include <cmath>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{

    /*point p1, p2;
    p1.setXY(5.0, 5.0);
    p2.setXY(4.0, 3.0);
    cout << p1.getX()<<" , " << p1.getY() << "\n";
    cout << p1.norma() << "\n";
    p1.add(p2);
    p1.imprime();
    p1.translada(1.0,2.0);
    p1.imprime();
    poligono po;
    po.setNVertices(3);
    po.insere_pontos();
    */
    //po.imprime();
   // po.translacao(2,3);
   // po.imprime();
    //po.rotacao(1.3, p1);
   // po.imprime();
   // cout << po.getn_vertices() << endl;

    float a, b;
   //Calculo do centro para que o poligono seja rotacionado corretamente
    point centro(4/2,-3/2);
    retangulo r = retangulo(3,4,0,0);
    r.imprime();
    cout << "A area eh: " << r.area() << endl;
    cout << "Escolha os numeros a, b para transladar os pontos do retangulo:(Sugestao do professor[-3,4] ) " << endl;
    cin >> a >> b;
    r.translacao(a,b);
    centro.translada(a,b);
    r.imprime();
    cout << "Area apos a translacao: " << r.area() << endl;
    cout << "Areas iguais apos a translacao!" << endl;
    cout << "Fazendo a rotacao de 30 graus" << endl;
    r.rotacao(M_PI/6,centro);
    cout << "Area apos a rotacao: " << r.area() << endl;
    cout << "Areas iguais apos a rotacao" << endl;





    return 0;
}
