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
    string pNombre, pGenero,  pColorCabello, pColorOjos, pColorPiel;
    bool pFertil;
   int ran1=1+rand()%(3-1);
    int ran2=1+rand()%(3-1); //periodo
    int ran3=1+rand()%(3-1);
    int ran4=1+rand()%(3-1);
   
    if(ran1==1){
        if(ran2>=1 && ran2<=6){
        //if(ran2>=1 && ran2<=6){
            if(ran3==1){  
                cout<<"Ella tiene probabilidad de quedar embarazada"<<endl;
                cout<<"Tiene 50% de probabilidades que sea el bebe sea niño!"<<endl;
                pGenero = "Masculino";

                if(ran4==1){
                    pFertil=true;
                }else{
                    pFertil=false;
                }

                if(rValue.getGenero()=="Masculino"){
                    pNombre=rValue.getNombre();
                }
                if(this->getGenero()=="Masculino"){
                    pNombre=this->getNombre();
                }

                if(this->getColorPiel()=="blanco"&& rValue.getColorPiel()=="blanco"){
                    pColorPiel="blanco";
                }
                if(this->getColorPiel()=="moreno"&& rValue.getColorPiel()=="moreno"){
                    pColorPiel="moreno";
                }

                 if(this->getColorPiel()=="blanco"&& rValue.getColorPiel()=="moreno"){
                    pColorPiel="moreno";
                }
                if(this->getColorPiel()=="moreno"&& rValue.getColorPiel()=="blanco"){
                    pColorPiel="moreno";
                }
                //////
                if(this->getColorOjos()=="cafe"&& rValue.getColorOjos()=="cafe"){
                    pColorPiel="cafe";
                }
                if(this->getColorOjos()=="azul"&& rValue.getColorOjos()=="azul"){
                    pColorPiel="azul";
                }

                 if(this->getColorOjos()=="verde"&& rValue.getColorOjos()=="verde"){
                    pColorPiel="verde";
                }
                //////
                if(this->getColorCabello()=="negro"&& rValue.getColorCabello()=="negro"){
                    pColorPiel="negro";
                }
                if(this->getColorCabello()=="cafe"&& rValue.getColorCabello()=="cafe"){
                    pColorPiel="cafe";
                }

                 if(this->getColorCabello()=="rubio"&& rValue.getColorCabello()=="rubio"){
                    pColorPiel="rubio";
                }

                if(this->getColorCabello()=="rubio"&& rValue.getColorCabello()=="negro"){
                    pColorPiel="negro";
                }

                if(this->getColorCabello()=="rubio"&& rValue.getColorCabello()=="cafe"){
                    pColorPiel="cafe";
                }

                if(this->getColorCabello()=="negro"&& rValue.getColorCabello()=="cafe"){
                    pColorPiel="negro";
                }

                tempP= new persona(pNombre, pGenero,  pColorCabello, pColorOjos, pColorPiel, pFertil);
                return tempP;
            }
            if(ran3==2){
                cout<<"Ella tiene probabilidad de quedar embarazada"<<endl;
                cout<<"Tiene 50% de probabilidades que sea la bebe sea niña!"<<endl;
                pGenero = "Femenino";

                if(ran4==1){
                    pFertil=true;
                }else{
                    pFertil=false;
                }

                if(rValue.getGenero()=="Femenino"){
                    pNombre=rValue.getNombre();
                }
                if(this->getGenero()=="Femenino"){
                    pNombre=this->getNombre();
                }

                if(this->getColorPiel()=="blanco"&& rValue.getColorPiel()=="blanco"){
                    pColorPiel="blanco";
                }
                if(this->getColorPiel()=="moreno"&& rValue.getColorPiel()=="moreno"){
                    pColorPiel="moreno";
                }

                 if(this->getColorPiel()=="blanco"&& rValue.getColorPiel()=="moreno"){
                    pColorPiel="moreno";
                }
                if(this->getColorPiel()=="moreno"&& rValue.getColorPiel()=="blanco"){
                    pColorPiel="moreno";
                }
                //////////////////
                if(this->getColorOjos()=="cafe"&& rValue.getColorOjos()=="cafe"){
                    pColorPiel="cafe";
                }
                if(this->getColorOjos()=="azul"&& rValue.getColorOjos()=="azul"){
                    pColorPiel="azul";
                }

                 if(this->getColorOjos()=="verde"&& rValue.getColorOjos()=="verde"){
                    pColorPiel="verde";
                }

                if(this->getColorOjos()=="cafe"&& rValue.getColorOjos()=="azul"){
                    pColorPiel="cafe";
                }

                if(this->getColorOjos()=="azul"&& rValue.getColorOjos()=="verde"){
                    pColorPiel="azul";
                }

                //////
                if(this->getColorCabello()=="negro"&& rValue.getColorCabello()=="negro"){
                    pColorPiel="negro";
                }
                if(this->getColorCabello()=="cafe"&& rValue.getColorCabello()=="cafe"){
                    pColorPiel="cafe";
                }

                 if(this->getColorCabello()=="rubio"&& rValue.getColorCabello()=="rubio"){
                    pColorPiel="rubio";
                }

                if(this->getColorCabello()=="rubio"&& rValue.getColorCabello()=="negro"){
                    pColorPiel="negro";
                }

                if(this->getColorCabello()=="rubio"&& rValue.getColorCabello()=="cafe"){
                    pColorPiel="cafe";
                }

                if(this->getColorCabello()=="negro"&& rValue.getColorCabello()=="cafe"){
                    pColorPiel="negro";
                }

                tempP= new persona(pNombre, pGenero,  pColorCabello, pColorOjos, pColorPiel, pFertil);
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
    string pNombre, pGenero,  pColorCabello, pColorOjos, pColorPiel;
    bool pFertil;
    int ran2=1+rand()%(29-1);
    int ran3=1+rand()%(3-1);
    int ran4=1+rand()%(3-1);
    
     if(ran2>=1 && ran2<=6){
            if(ran3==1){   
                cout<<""<<endl;
                cout<<"Ella tiene probabilidad de quedar embarazada"<<endl;
                cout<<"Ella tiene 50% de probabilidades que sea el bebe sea niño"<<endl;
                pGenero = "Masculino";

                if(ran4==1){
                    pFertil=true;
                }else{
                    pFertil=false;
                }

                if(rValue.getGenero()=="Masculino"){
                    pNombre=rValue.getNombre();
                }
                if(this->getGenero()=="Masculino"){
                    pNombre=this->getNombre();
                }

                if(this->getColorPiel()=="blanco"&& rValue.getColorPiel()=="blanco"){
                    pColorPiel="blanco";
                }
                if(this->getColorPiel()=="moreno"&& rValue.getColorPiel()=="moreno"){
                    pColorPiel="moreno";
                }

                 if(this->getColorPiel()=="blanco"&& rValue.getColorPiel()=="moreno"){
                    pColorPiel="moreno";
                }
                if(this->getColorPiel()=="moreno"&& rValue.getColorPiel()=="blanco"){
                    pColorPiel="moreno";
                }
                //////////7
                if(this->getColorOjos()=="cafe"&& rValue.getColorOjos()=="cafe"){
                    pColorPiel="cafe";
                }
                if(this->getColorOjos()=="azul"&& rValue.getColorOjos()=="azul"){
                    pColorPiel="azul";
                }

                 if(this->getColorOjos()=="verde"&& rValue.getColorOjos()=="verde"){
                    pColorPiel="verde";
                }
                
                if(this->getColorOjos()=="cafe"&& rValue.getColorOjos()=="azul"){
                    pColorPiel="cafe";
                }

                if(this->getColorOjos()=="azul"&& rValue.getColorOjos()=="verde"){
                    pColorPiel="azul";
                }
                //////
                if(this->getColorCabello()=="negro"&& rValue.getColorCabello()=="negro"){
                    pColorPiel="negro";
                }
                if(this->getColorCabello()=="cafe"&& rValue.getColorCabello()=="cafe"){
                    pColorPiel="cafe";
                }

                 if(this->getColorCabello()=="rubio"&& rValue.getColorCabello()=="rubio"){
                    pColorPiel="rubio";
                }

                if(this->getColorCabello()=="rubio"&& rValue.getColorCabello()=="negro"){
                    pColorPiel="negro";
                }

                if(this->getColorCabello()=="rubio"&& rValue.getColorCabello()=="cafe"){
                    pColorPiel="cafe";
                }

                if(this->getColorCabello()=="negro"&& rValue.getColorCabello()=="cafe"){
                    pColorPiel="negro";
                }


                tempP= new persona(pNombre, pGenero,  pColorCabello, pColorOjos, pColorPiel, pFertil);
                return tempP;  
            }
            if(ran3==2){
                cout<<"Ella tiene probabilidad de quedar embarazada"<<endl;
                cout<<"Tiene 50% de probabilidades que sea la bebe sea niña"<<endl;
                pGenero = "Femenino";

                if(ran4==1){
                    pFertil=true;
                }else{
                    pFertil=false;
                }

                if(rValue.getGenero()=="Femenino"){
                    pNombre=rValue.getNombre();
                }
                if(this->getGenero()=="Femenino"){
                    pNombre=this->getNombre();
                }

                if(this->getColorPiel()=="blanco"&& rValue.getColorPiel()=="blanco"){
                    pColorPiel="blanco";
                }
                if(this->getColorPiel()=="moreno"&& rValue.getColorPiel()=="moreno"){
                    pColorPiel="moreno";
                }

                 if(this->getColorPiel()=="blanco"&& rValue.getColorPiel()=="moreno"){
                    pColorPiel="moreno";
                }
                if(this->getColorPiel()=="moreno"&& rValue.getColorPiel()=="blanco"){
                    pColorPiel="moreno";
                }
                ///////
                if(this->getColorOjos()=="cafe"&& rValue.getColorOjos()=="cafe"){
                    pColorPiel="cafe";
                }
                if(this->getColorOjos()=="azul"&& rValue.getColorOjos()=="azul"){
                    pColorPiel="azul";
                }

                 if(this->getColorOjos()=="verde"&& rValue.getColorOjos()=="verde"){
                    pColorPiel="verde";
                }

                if(this->getColorOjos()=="cafe"&& rValue.getColorOjos()=="azul"){
                    pColorPiel="cafe";
                }

                if(this->getColorOjos()=="azul"&& rValue.getColorOjos()=="verde"){
                    pColorPiel="azul";
                }
                //////
                if(this->getColorCabello()=="negro"&& rValue.getColorCabello()=="negro"){
                    pColorPiel="negro";
                }
                if(this->getColorCabello()=="cafe"&& rValue.getColorCabello()=="cafe"){
                    pColorPiel="cafe";
                }

                 if(this->getColorCabello()=="rubio"&& rValue.getColorCabello()=="rubio"){
                    pColorPiel="rubio";
                }

                if(this->getColorCabello()=="rubio"&& rValue.getColorCabello()=="negro"){
                    pColorPiel="negro";
                }

                if(this->getColorCabello()=="rubio"&& rValue.getColorCabello()=="cafe"){
                    pColorPiel="cafe";
                }

                if(this->getColorCabello()=="negro"&& rValue.getColorCabello()=="cafe"){
                    pColorPiel="negro";
                }

                tempP= new persona(pNombre, pGenero,  pColorCabello, pColorOjos, pColorPiel, pFertil);
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