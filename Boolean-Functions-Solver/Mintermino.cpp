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
