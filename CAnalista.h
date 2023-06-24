//
// Created by MARIA HILDA BERMEJO RIOS on 6/24/23.
//

#ifndef T6_P2_CANALISTA_H
#define T6_P2_CANALISTA_H
#include <iostream>
using namespace std;


class CAnalista {
protected:
    string nombre;
    double sb;
    int he;
    double txhe;
public:
    CAnalista(){}
    CAnalista(string _nombre, double _sb, int _he, double _txhe): nombre(_nombre), sb(_sb), he(_he), txe(_txhe){}
    virtual  ~CAnalista(){}

    double sueldoNeto();
    virtual double bonificacion()=0;   //-- es una funcion virtual pura
    virtual double descuento()=0;
    //--- metodos de acceso
    //--- para rehusar la clase es recomendable definir todos los metodos de acceso de los atributos
    void setNombre(string _nombre){ nombre = _nombre;}
    string getNombre() { return nombre;}
    void setSb(double _sb){ sb = _sb;}
    double getSb(){ return sb;}
    void getHe(int _he){ he = _he;}
    int getHe(){return he;}
    double setTxhe( double _txhe){ txhe = _txhe;}
};


#endif //T6_P2_CANALISTA_H
