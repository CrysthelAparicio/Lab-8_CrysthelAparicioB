#include "persona.h"
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

persona::persona(){

}

persona::persona(string pNombre, string pGenero, string pColorCabello, string pColorOjos, string pColorPiel, bool pFertil){
    nombre = pNombre;
    genero = pGenero;
    colorCabello = pColorCabello;
    colorOjos = pColorOjos;
    colorPiel = pColorPiel;
    fertil = pFertil;
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

persona* persona::operator*(persona& rValue){
    persona* tempP = NULL;
    int ran1=1+rand()%(101-1);
    int ran2=1+rand()%(29-1);
    int ran3=1+rand()%(3-1);
    if(ran1==1){
        if(ran2>=1 && ran2<=6){
            if(ran3==1){  
                cout<<"Ella tiene probabilidad de quedar embarazada"<<endl;
                cout<<"Tiene 50% de probabilidades que sea el bebe sea niño!"<<endl;
                return tempP;
            }
            if(ran3==2){
                cout<<"Ella tiene probabilidad de quedar embarazada"<<endl;
                cout<<"Tiene 50% de probabilidades que sea la bebe sea niña!"<<endl;
                return tempP;
            }
        }else{
            cout<<"No se embaraza, ya que no esta en sus dias fertiles"<<endl;
            return 0;
        }
    }else{
        cout<<"EL condon fue seguro, no quedo embarazada"<<endl;
        return 0;
    }
}

persona* persona::operator+(persona& rValue){
    persona* tempP = NULL;
    int ran2=1+rand()%(29-1);
    int ran3=1+rand()%(3-1);
     if(ran2>=1 && ran2<=6){
            if(ran3==1){   
                cout<<""<<endl;
                cout<<"Ella tiene 50% de probabilidades que sea el bebe sea niño"<<endl;
                return tempP;  
            }
            if(ran3==2){
                cout<<"Ella tiene probabilidad de quedar embarazada"<<endl;
                cout<<"Tiene 50% de probabilidades que sea la bebe sea niña"<<endl;
                return tempP;

            }
        }else{
            cout<<"No puede quedar Embaraza,no esta en sus dias Fertiles"<<endl;
            return 0;

        } 
}

void persona::toString(){
    cout<<"Nombre->"<<nombre<<" ,Genero->"<<genero<< " ,Color Cabello->"<<colorCabello;
    cout <<" ,Color piel->"<<colorPiel<< " ,Color Ojos->"<<colorOjos<< " ,Fertil->"<<fertil<<endl;
}