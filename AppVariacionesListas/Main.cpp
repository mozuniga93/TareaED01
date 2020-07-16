// Tarea grupal: variaciones de listas
#include <iostream>
#include <iomanip>
#include <string>
#include "Gestor.h"

using namespace std;

// prototipo de funciones
int menuPrincipal(int answer);
void menuListaCircular();
void menuListaDoblementeEnlazada();
void menuListaCircularDoblementeEnlazada();
void menuBicola();
static Gestor* gestor = new Gestor();

int main()
{
    int answer;
    bool keepLooping = true;

    do
    {
        cout << "-------------------------------------" << endl;
        cout << "Favor digite una variacion de lista:" << endl;
        cout << "1. Lista circular." << endl;
        cout << "2. Lista doblemente enlazada." << endl;
        cout << "3. Lista circular doblemente enlazada." << endl;
        cout << "4. Bicola." << endl;
        cout << "0. Salir." << endl;
        cout << "-------------------------------------" << endl;
        cin >> answer;

        menuPrincipal(answer);

        if (answer == 0)
        {
            keepLooping = false;
        }
        else
        {
            keepLooping = true;
        }
    } while (keepLooping);

}

int menuPrincipal(int answer)
{
    switch (answer)
    {
    case 1:
        menuListaCircular();
        break;
    case 2:
        menuListaDoblementeEnlazada();
        break;
    case 3:
        menuListaCircularDoblementeEnlazada();
        break;
    case 4:
        menuBicola();
        break;
    case 0:
        cout << "Gracias por usar el sistema." << endl;
        break;
    default:
        cout << "Opcion incorrecta. Favor digite de nuevo." << endl;
    }
    return answer;
}

void menuListaCircular()
{
    int answer;
    bool keepLooping = true;

    do
    {
        cout << "-------------------------------------" << endl;
        cout << "Favor digite una variacion de lista:" << endl;
        cout << "1. Agregar dato a lista circular." << endl;
        cout << "2. Ver lista circular." << endl;
        cout << "3. Eliminar dato de lista circular." << endl;
        cout << "4. Buscar dato en lista circular." << endl;
        cout << "0. Volver." << endl;
        cout << "-------------------------------------" << endl;
        cin >> answer;

        menuPrincipal(answer);

        if (answer == 0)
        {
            keepLooping = false;
        }
        else
        {
            keepLooping = true;
        }
    } while (keepLooping);
}

void menuListaDoblementeEnlazada()
{

}

void menuListaCircularDoblementeEnlazada()
{

}

void menuBicola()
{

}
