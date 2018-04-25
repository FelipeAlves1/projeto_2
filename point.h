#ifndef POINT_H
#define POINT_H
//Classe ponto
class point
{
//Metodos privados
    private:
    float x, y;

//Metodos publicos
    public:

//Construtor
    point(float _x=0, float _y=0)
    {
        x = _x;
        y = _y;
    }

//Metodos da classe
    void setX(float _x);
    void setY(float _y);
    void setXY(float _x, float _y);
    float getX();
    float getY();
    point add(point _p1);
    point sub(point _p1);
    float norma(void);
    void translada(float a, float b);
    void imprime();
    friend class poligono;
};

#endif // POINT_H
