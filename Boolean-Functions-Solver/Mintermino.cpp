#include <iostream>
#include <string.h>
#include <sstream>
#include "Mintermino.h"
using namespace std;

void Mintermino :: llenarListaVariables() {
    string letra;
    for(int i = 0; i < formulaMintermino.length(); i++) {
        if(i < formulaMintermino.length() - 1 && !isalpha(formulaMintermino[i + 1])) {
            letra = "";
            letra += formulaMintermino[i];
            letra += formulaMintermino[i + 1];
            i++;
        }
        else
            letra = formulaMintermino[i];
        if(letra.find("a") != string :: npos) {
            variables -> agregarVariable(new Variable(letra, introducidoA));
        }
        else {
            if(letra.find("b") != string :: npos) {
                variables -> agregarVariable(new Variable(letra, introducidoB));
            }
            else {
                if(letra.find("c") != string :: npos) {
                    variables -> agregarVariable(new Variable(letra, introducidoC));
                }
                else if(letra.find("d") != string :: npos) {
                    variables -> agregarVariable(new Variable(letra, introducidoD));
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
    string letraRecorrido;
    string faltantes;
    string letra;
    int preLongitud = variables -> longitud();
    cout << "Formula NO revisada = " << formulaMintermino << endl;
    if(preLongitud != 4) {
        faltantes = averiguaFaltantes();
        for(int i = 0; i < faltantes.length(); i++) {
            letra =  faltantes[i];
            variables -> agregarVariable(new Variable(letra, true));
        }
    }
    formulaMintermino = "";
    for(int i = 0; i < variablesPosibles.length(); i++){
        letraRecorrido = variablesPosibles[i];
        formulaMintermino += variables -> getVariableNodo(letraRecorrido) -> getVariable() -> getLetra();
    }
}

bool Mintermino :: evaluar() {
    int cont = 0;
    string variablesPosibles = "abcd";
    string letra;
    bool determinados[variablesPosibles.length()];
    llenarListaVariables();
    estandarizar();
    for(int i = 0; i < variablesPosibles.length(); i++) {
        letra = variablesPosibles[i];
        determinados[i] = variables -> getVariableNodo(letra) -> getVariable() -> evaluar();
    }
    int j = 0;
    while(j < variables -> longitud()) {
        if(determinados[j] == false)
            setValorVerdad(false);;
        j++;
    }
    return getValorVerdad();
}
