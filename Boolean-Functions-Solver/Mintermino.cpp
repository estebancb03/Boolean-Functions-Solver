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

void Mintermino :: estandarizar() {
    string variablesPosibles = "abcd";
    string variableRecorrido;
    string faltantes;
    string variable;
    int preLongitud = variables -> longitud();
    cout << "Formula NO revisada = " << formulaMintermino << endl;
    if(preLongitud != 4) {
        faltantes = averiguaFaltantes();
        for(int i = 0; i < faltantes.length(); i++) {
            variable =  faltantes[i];
            variables -> agregarVariable(variable, true);
        }
    }
    formulaMintermino = "";
    for(int i = 0; i < variablesPosibles.length(); i++){
        variableRecorrido = variablesPosibles[i];
        formulaMintermino += variables -> getVariable(variableRecorrido);
    }
}

void Mintermino :: evaluar() {
    int cont = 0;
    llenarListaVariables();
    estandarizar();
    bool determinados[4] = { variables -> getValorVerdad("a"), variables -> getValorVerdad("b"), variables -> getValorVerdad("c"), variables -> getValorVerdad("d") };
    for(int i = 0; i < formulaMintermino.length(); i++) {
        if(!isalpha(formulaMintermino[i])) {
            cont++;
            if(determinados[i - cont] == true)
                determinados[i - cont] = false;
            else
                determinados[i - cont] = true;
        }
    }
    int j = 0;
    while(j < variables -> longitud()) {
        if(determinados[j] == false)
            setValorVerdad(false);
        j++;
    }
}
