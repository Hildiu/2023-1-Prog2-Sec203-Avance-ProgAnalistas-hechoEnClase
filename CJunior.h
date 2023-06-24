//
// Created by MARIA HILDA BERMEJO RIOS on 6/24/23.
//

#ifndef T6_P2_CJUNIOR_H
#define T6_P2_CJUNIOR_H

#include <iostream>
#include "CAnalista.h"
using namespace std;

class CJunior: public CAnalista {

public:
    CJunior(){}
    CJunior(string _nombre, double _sb, int _he, double _txhe):CAnalista(_nombre, _sb, _he, _txhe){}
    virtual ~CJunior(){}

    double bonificacion() override;
    double descuento() override;
};


#endif //T6_P2_CJUNIOR_H
