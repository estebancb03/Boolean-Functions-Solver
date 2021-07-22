#include <iostream>
#include "Variable.h"
using namespace std;

/*
  EFECTO: encuentra el valor verdad de la variable
  MODIFICA: propiedad valorVerdad
*/
bool Variable :: evaluar() {
    if(formula.find("'") != string :: npos)
        setValorVerdad(!getValorVerdad());
    return getValorVerdad();
}
