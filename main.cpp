#include <string>
#include <vector>
#include "persona.h"

using namespace std;

vector<persona *> Vpersona;

void agregarPersonas();
void listarPersonas();
void eliminarPersonas();
void simulacionD();

int persona1;
int persona2;

int main()
{
    
    bool continuar = true;
    char resp;
    do
    {
        cout << "¡¡¡¡¡¡¡___Condones Durex, se analizaran algunos datos del experimento__!!!!!" << endl;
        cout << "1. Agregar las Personas del experimento" << endl;
        cout << "2. Listas las personas que participaron del experimento" << endl;
        cout << "3. Eliminar las personas que particparon del experimento" << endl;
        cout << "4. Simulacion del experimento" << endl;
        cout << "5. Salir" << endl;
        cout << endl;
        cin >> resp;

        switch (resp)
        {
        case '1':
            agregarPersonas();
            break;

        case '2':
            listarPersonas();
            break;

        case '3':
            eliminarPersonas();
            break;

        case '4':
            simulacionD();
            break;

        case '5':
            continuar=false;
            cout<<"Saliendo..."<<endl;
            break;
        default:
            cout << "Opcion Invalida";
        }
    } while (continuar ==true);
}

void agregarPersonas()
{
    string nombre, genero, colorCabello, colorPiel, colorOjos;
    char opCabello,opOjos,opPiel;

    bool fertil;
    int opcion;
    char opc;
    char opc2;

    cout << "Ingrese el nombre del participante: " << endl;
    cin >> nombre;
    cout << "Ingrese el genero del participante \n1.Masculino\n2.Femenino: " << endl;
    cin >> opc2;

    if (opc2 == '1')
    {
        genero = "Masculino";
    }
    else
    {
        genero = "Femenino";
    }

    cout << "Ingrese el color del Cabello del participante\n1.cafe\n2.negro\n3.rubio: " << endl;
    cin >> opCabello;
    if(opCabello=='1'){
        colorCabello="negro";
    }else{
        if(opCabello=='2'){
        colorCabello="cafe";
        }else{
            colorCabello="rubio";
        } 
    }

    cout << "Ingrese el color de Piel del participante\n1.blanco\n2.moreno: " << endl;
    cin >> opPiel;
    if(opPiel=='1'){
        colorPiel="blanco";
    }else{
        colorPiel="moreno";
    }

    cout << "Ingrese el color de Ojos del participante\n1.cafe\n2.azul\n3.verde: " << endl;
    cin >> opOjos;
   if(opOjos=='1'){
        colorOjos="cafe";
    }else{
        if(opOjos=='2'){
        colorOjos="azul";
        }else{
            colorOjos="verde";
        } 
    }

    cout << "Ingrese si es fertil o no \n1.Si\n2.No: " << endl;
    cin >> opcion;

    if (opcion == 1)
    {
        fertil = true;
    }
    else
    {
        fertil = false;
    }

    persona *perso = new persona(nombre, genero, colorCabello, colorPiel, colorOjos, fertil);
    Vpersona.push_back(perso);
    cout << "Agrego a una persona exitosamente" << endl;
}

void listarPersonas()
{
    if (Vpersona.size() != 0)
    {
        for (int i = 0; i < Vpersona.size(); i++)
        {
            Vpersona[i]->toString();
            cout << endl;
        }
    }
}

void eliminarPersonas()
{
    int contador = 0;
    int opcion;

    cout << "Escoga a quien desea eliminar" << endl;
    if (Vpersona.size() != 0)
    {
        for (int i = 0; i < Vpersona.size(); i++)
        {
            cout << contador << ", ";
            Vpersona[i]->toString();
            contador++;
        }
        cin >> opcion;
        if (opcion < 0 || opcion >= Vpersona.size())
        {
            cout << "Opcion mala" << endl;
            cin >> opcion;
        }
        else
        {
            Vpersona.erase(Vpersona.begin() + opcion);
        }
    }
}

void simulacionD()
{
    cout<<"Adios"<<endl;
    if (Vpersona.size() != 0)
    {
        int experimentante = 1, experimentante2 = 1;
        int opcion;
        int contador = 0;
        int contador2 = 0;
        string gsexo;
        persona *per1;
        persona *per2;
        persona *per3;
        while (experimentante <= 1)
        {
            cout<<"Hola"<<endl;
            cout << "Es momento de escoger a alguien para la simulacion" << endl;
            cout << "Primera Persona :" << endl;
            for (int i = 0; i < Vpersona.size(); i++)
            {
                cout << i << ". ";
                Vpersona[i]->toString();
            }
            cin >> opcion;
            if (opcion < 0 || opcion >= Vpersona.size())
            {
                cout << "Mal! No valido!" << endl;
                cin >> opcion;
            }
            else
            {
                if (Vpersona[opcion]->getFertil())
                {
                    string nombre, genero, cabello, ojos, piel;
                    bool fert;
                    nombre = Vpersona[opcion]->getNombre();
                    genero = Vpersona[opcion]->getGenero();
                    cabello = Vpersona[opcion]->getColorCabello();
                    ojos = Vpersona[opcion]->getColorOjos();
                    piel = Vpersona[opcion]->getColorPiel();
                    fert = Vpersona[opcion]->getFertil();
                    per1 = new persona(nombre, genero, cabello, ojos, piel, fert);
                    gsexo = Vpersona[opcion]->getGenero();
                    cout << "Experimentante Agregado" << endl;
                    experimentante++;
                }
                else
                {
                    cout << "Necesita personas fertiles";
                }
            }
        }
        while (experimentante2 <= 1)
        {
            cout << "Es momento de escoger a otra persona para la simulacion" << endl;
            cout << "Segunda Persona" << endl;
            for (int i = 0; i < Vpersona.size(); i++)
            {
                cout << i << ". ";
                Vpersona[i]->toString();
            }
            cin >> opcion;
            if (opcion < 0 || opcion >= Vpersona.size())
            {
                cout << "Mal! No valido" << endl;
                cin >> opcion;
            }
            else
            {
                if (Vpersona[opcion]->getFertil())
                {
                    if (Vpersona[opcion]->getGenero() != gsexo)
                    {
                        string nombre, genero, cabello, ojos, piel;
                        bool fert;
                        nombre = Vpersona[opcion]->getNombre();
                        genero = Vpersona[opcion]->getGenero();
                        cabello = Vpersona[opcion]->getColorCabello();
                        ojos = Vpersona[opcion]->getColorOjos();
                        piel = Vpersona[opcion]->getColorPiel();
                        fert = Vpersona[opcion]->getFertil();
                        per2 = new persona(nombre, genero, cabello, ojos, piel, fert);
                        experimentante2++;
                        cout << "Experimentante Agregado" << endl;
                    }
                    else
                    {
                        cout << "Necesita personas del mismo sexo" << endl;
                    }
                }
                else
                {
                    cout << "Necesita personas fertiles" << endl;
                }
            }
        }
        char manera;
        cout << "Escoga la manera de tener relaciones" << endl;
        cout << "1. Con proteccion\n2. Sin Proteccion" << endl;
        cin >> manera;
       
        switch (manera)
        {
        case '1':
            per3=*per1+*per2;
            if(per3!=NULL){
                Vpersona.push_back(per3);
            }
            break;

        case '2':
            per3=*per1+*per2;
            if(per3!=NULL){
                Vpersona.push_back(per3);
            }
            break;
        }
    }
    else
    {
        cout << "Emmmm, necesita agregar personas...\n"
             << endl;
    }
}