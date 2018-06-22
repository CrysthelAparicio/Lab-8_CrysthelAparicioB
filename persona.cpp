#include "persona.h"
#include <iostream>
#include <string>

persona::persona(){

}

persona::persona(string pNombre, string pGenero, string pColorCabello, string pColorOjos, string pColorPiel, bool pFertil){
    nombre = pNombre;
    genero = pGenero;
    colorCabello = pColorCabello;
    colorOjos = pColorOjos;
    colorPiel = pColorPiel;
    fertil = pFertil;
    cout<<"este es"<<fertil<<endl;
}


string persona::getNombre(){
    return nombre;
}
string persona::getGenero(){
    return genero;
}

string persona::getColorCabello(){
    return colorCabello;
}

string persona::getColorOjos(){
    return colorOjos;
}

string persona::getColorPiel(){
    return colorPiel;
}

bool persona::getFertil(){
    return fertil;
}

//Setters
void persona::setNombre(string pNombre){
    nombre = pNombre;
}

void persona::setGenero(string pGenero){
    genero = pGenero;
}

void persona::setColorCabello(string pColorCabello){
    colorCabello = pColorCabello;
}

void persona::setColorOjos(string pColorOjos){
    colorOjos = pColorOjos;
}

void persona::setColorPiel(string pColorPiel){
    colorPiel = pColorPiel;
}

void persona::setFertil(bool pFertil){
    fertil = pFertil;
}

void persona::toString(){
    cout<<"Nombre->"<<nombre<<" ,Genero->"<<genero<< " ,Color Cabello->"<<colorCabello;
    cout <<" ,Color piel->"<<colorPiel<< " ,Color Ojos->"<<colorOjos<< " ,Fertil->"<<fertil<<endl;
}

