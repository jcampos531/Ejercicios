//Nombre
//TP n°
//Ejercicio N°
//Comentarios:
#include <iostream>
#include <stdlib.h>
#include <clocale>
using namespace std;
#include "inc/tipos_y_const.h"
#include "inc/prototipos.h"
#include "inc/peluqueria.h"


int main(void){
    int opc;

    setlocale(LC_CTYPE, "Spanish");

    do{
        system("cls");
        cout << "MENU PRINCIPAL" << endl;
        cout << "-----------------" << endl;
        cout << "1 - Cargar registros" << endl;
        cout << "2 - Mostrar registros con más de 2 coloraciones." << endl;
        cout << "-----------------------------------------------" << endl;
        cout << "0 - Salir" << endl << endl;
        cout << "Opción: ";
        cin >> opc;

        switch (opc){
            case 1:
                system("cls");
                cargarRegistros(); //Finaliza con un "código = 0"
            break;
            case 2:
                system("cls");
                //mostrarRes();
            break;
            case 0:
                return 0;
            break;
            default:
                cout << "La opción ingresada es incorrecta";
        }
        system("pause");
    }while (opc != 0);

    return 0;
}
