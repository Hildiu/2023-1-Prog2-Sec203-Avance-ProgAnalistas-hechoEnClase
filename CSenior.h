//
// Created by MARIA HILDA BERMEJO RIOS on 6/24/23.
//

#ifndef T6_P2_CSENIOR_H
#define T6_P2_CSENIOR_H

#include <iostream>
#include "CAnalista.h"
using namespace std;

class CSenior : public CAnalista {
private:
    int na;
    double pa;
public:
    CSenior(){};
    CSenior( string _nombre, double _sb, int _he, double _txhe, int _na, double _pa):CAnalista(_nombre,_sb,_he,_txhe)
    {
      na = _na;
      pa = _pa;
    }
    virtual ~CSenior(){}

    double bonificacion() override;
    double descuento() override;
    //---- metodos de acceso
    void setNa(int _na){ na = _na;}
    int getNa(){ return na;}
    void setPa(double _pa){ pa=_pa;}
    double getPa(){ return pa;}
};


#endif //T6_P2_CSENIOR_H
