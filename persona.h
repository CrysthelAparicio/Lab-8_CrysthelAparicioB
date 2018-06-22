#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class persona{
    private:
        string nombre;
        string genero;
        string colorCabello;
        string colorOjos;
        string colorPiel;
        bool fertil;

    public:
        persona();
        persona(string,string,string,string,string,bool);
        ~persona();

        //Getters
        string getNombre();
        string getGenero();
        string getColorCabello();
        string getColorOjos();
        string getColorPiel();
        bool getFertil();

        //Setters
        void setNombre(string);
        void setGenero(string);
        void setColorCabello(string);
        void setColorOjos(string);
        void setColorPiel(string);
        void setFertil(bool);
        void toString();

        persona* operator *(persona&);
        persona* operator +(persona&);
};

#endif