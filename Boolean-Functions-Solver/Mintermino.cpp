#include <iostream>
#include <string.h>
#include <sstream>
#include "Mintermino.h"
using namespace std;

/*
  EFECTO: encuentra los valores de verdad de las variables y las evalua
  MODIFICA: propiedad valorVerdad
*/
bool Mintermino :: evaluar() {
    string variablesPosibles = "abcd";
    string letra;
    bool determinados[variablesPosibles.length()];
    llenarListaVariables();
    estandarizar();
    for(int i = 0; i < variablesPosibles.length(); i++) {
        letra = variablesPosibles[i];
        determinados[i] = variables -> getNodo(letra) -> getObjeto() -> evaluar();
    }
    int j = 0;
    while(j < variables -> longitud()) {
        if(determinados[j] == false)
            setValorVerdad(false);
        j++;
    }
    return getValorVerdad();
}

/*
  EFECTO: ingresa nodos en la lista variables
  MODIFICA: propiedad lista variables
*/
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
        if(letra.find("a") != string :: npos)
            variables -> agregarObjeto(new Variable(letra, introducidos[0]));
        else {
            if(letra.find("b") != string :: npos)
                variables -> agregarObjeto(new Variable(letra, introducidos[1]));
            else {
                if(letra.find("c") != string :: npos)
                    variables -> agregarObjeto(new Variable(letra, introducidos[2]));
                else if(letra.find("d") != string :: npos)
                    variables -> agregarObjeto(new Variable(letra, introducidos[3]));
            }
        }
    }
}

/*
  EFECTO: obtiene las variables faltantes de un mintermino incompleto
*/
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

/*
  EFECTO: revisa la formula de mintermino, la completa y ordena si llega a ser necesario
  MODIFICA: propiedad lista variables
*/
void Mintermino :: estandarizar() {
    string variablesPosibles = "abcd";
    string letraRecorrido;
    string faltantes;
    string letra;
    int preLongitud = variables -> longitud();
    if(preLongitud != 4) {
        faltantes = averiguaFaltantes();
        for(int i = 0; i < faltantes.length(); i++) {
            letra =  faltantes[i];
            variables -> agregarObjeto(new Variable(letra, true));
        }
    }
    formulaMintermino = "";
    for(int i = 0; i < variablesPosibles.length(); i++){
        letraRecorrido = variablesPosibles[i];
        formulaMintermino += variables -> getNodo(letraRecorrido) -> getObjeto() -> getFormula();
    }
}
