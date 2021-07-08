#include <iostream>
#include <string.h>
#include <sstream>
#include "Mintermino.h"
using namespace std;

void Mintermino :: llenarListaVariables() {
    string variable;
    for(int i = 0; i < formulaMintermino.length(); i++) {
        if(i < formulaMintermino.length() - 1 && !isalpha(formulaMintermino[i + 1])) {
            variable = "";
            variable += formulaMintermino[i];
            variable += formulaMintermino[i + 1];
            i++;
        }
        else
            variable = formulaMintermino[i];
        if(variable.find("a") != string :: npos) {
            variables -> agregarVariable(variable, introducidoA);
        }
        else {
            if(variable.find("b") != string :: npos) {
                variables -> agregarVariable(variable, introducidoB);
            }
            else {
                if(variable.find("c") != string :: npos) {
                    variables -> agregarVariable(variable, introducidoC);
                }
                else if(variable.find("d") != string :: npos) {
                    variables -> agregarVariable(variable, introducidoD);
                }
            }
        }
    }
}

string Mintermino :: averiguaFaltantes() {
    string variablesPosibles = "abcd";
    string variableCiclo;
    string faltantes;
    for(int i = 0; i < variablesPosibles.length(); i++) {
        variableCiclo = variablesPosibles[i];
        if(variables -> encontrar(variableCiclo) == false)
            faltantes += variableCiclo;
    }
    return faltantes;
}
