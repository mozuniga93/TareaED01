// Tarea grupal: variaciones de listas
#include <iostream>
#include <iomanip>
#include <string>
#include "Gestor.h"

using namespace std;

//PROTOTIPO DE FUNCIONES
int menuPrincipal(int answer);
void menuListaCircular();
int menuListaCircularImp(int answer);
int menuListaDoblementeEnlazadaCircularImp(int answer);
void menuListaDoblementeEnlazada();
void menuListaCircularDoblementeEnlazada();
void menuBicola();
//PROTOTIPO DE METODOS PARA MENUS
void insertarElementoListaCircular();
void imprimirListaCircular();
void eliminarElementoListaCircular();
void buscarElementoListaCircular();
void verificarListaVaciaCircular();
void calcularLongitudListaCircular();
void insertarElementoListaCircularDoblementeEnlazada();
void imprimirListaCircularDoblementeEnlazada();
void eliminarElementoListaCircularDoblementeEnlazada();
void buscarElementoListaCircularDoblementeEnlazada();
void verificarListaVaciaCircularDoblementeEnlazada();
void calcularLongitudListaCircularDoblementeEnlazada();

void agregarAlfrente();
int menuListaBicolaImp(int answer);
void agregarAlfinal();
void removerAlfrente();
void removerAlfinal();
void consultarLongitud();
void esVacia();
//GESTOR
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

//MENU PRINCIPAL
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

//MENUS PARA VARIACIONES DE LISTAS

//1. Menu para lista circular
void menuListaCircular()
{
    int answer;
    bool keepLooping = true;

    do
    {
        cout << "-------------------------------------" << endl;
        cout << "LISTA CIRCULAR" << endl;
        cout << "-------------------------------------" << endl;
        cout << "Favor digite una opcion:" << endl;
        cout << "1. Agregar elemento a lista circular." << endl;
        cout << "2. Imprimir lista circular." << endl;
        cout << "3. Eliminar elemento de lista circular." << endl;
        cout << "4. Buscar dato en lista circular." << endl;
        cout << "5. Verificar si lista esta vacia." << endl;
        cout << "6. Calcular longitud de lista." << endl;
        cout << "7. Volver al menu principal." << endl;
        cout << "0. Salir." << endl;
        cout << "-------------------------------------" << endl;
        cin >> answer;

        menuListaCircularImp(answer);

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

int menuListaCircularImp(int answer)
{
    switch (answer)
    {
    case 1:
        insertarElementoListaCircular();
        break;
    case 2:
        imprimirListaCircular();
        break;
    case 3:
        eliminarElementoListaCircular();
        break;
    case 4:
        buscarElementoListaCircular();
        break;
    case 5:
        verificarListaVaciaCircular();
        break;
    case 6:
        calcularLongitudListaCircular();
        break;
    case 7:
        main();
        break;
    case 0:
        cout << "Gracias por usar el sistema." << endl;
        break;
    default:
        cout << "Opcion incorrecta. Favor digite de nuevo." << endl;
    }
    return answer;
}

//2. Menu para lista doblemente enlazada
void menuListaDoblementeEnlazada()
{
    bool out = true;
    int opcion, numero1;
    do {
        cout << "-------------------------------------" << endl;
        cout << "LISTA DOBLEMENTE ENLAZADA" << endl;
        cout << "-------------------------------------" << endl;
        cout << "Favor digite una opcion:" << endl;
        cout << "1. Agregar elemento a lista doblemente enlazada." << endl;
        cout << "2. Imprimir lista doblemente enlazada." << endl;
        cout << "3. Eliminar elemento de lista doblemente enlazada." << endl;//prueba del repo
        cout << "4. Verificar si lista esta vacia." << endl;
        cout << "5. Calcular longitud de lista." << endl;
        cout << "6. Volver al menu principal." << endl;
        cout << "0. Salir." << endl;
        cout << "-------------------------------------" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 0:
            cout << "Gracias por usar el sistema." << endl;
            out = false;
            break;
        case 1:
            cout << "Digite el numero que desea agregar: ";
            cin >> numero1;
            cout << gestor->insertarElementoListaDoblementeEnlazada(numero1) << endl;
            break;
        case 2:
            cout << gestor->mostrarListaDoblementeEnlazada() << endl;
            break;
        case 3:
            cout << "Digite la posicion del numero que desea eliminar: ";
            cin >> numero1;
            cout << gestor->eliminarElementoListaDoblementeEnlazada(numero1) << endl;
            break;
        case 4:
            cout << gestor->verificarListaVaciaDoblementeEnlazada() << endl;
            break;
        case 5:
            cout << "La lista contiene "<<gestor->mostrarLargoListaDoblementeEnlazada() <<" elementos agregados"<< endl;
            break;
        case 6:
            main();
            break;
        default:
            cout << "Opcion incorrecta. Favor digite de nuevo." << endl;
            break;
        }
    } while (out);
}

//3. Menu para lista circular doblemente enlazada
void menuListaCircularDoblementeEnlazada()
{
    int answer;
    bool keepLooping = true;

    do
    {
        cout << "-------------------------------------" << endl;
        cout << "LISTA CIRCULAR DOBLEMENTE ENLAZADA" << endl;
        cout << "-------------------------------------" << endl;
        cout << "Favor digite una opcion:" << endl;
        cout << "1. Agregar elemento a lista circular doblemente enlazada." << endl;
        cout << "2. Imprimir lista circular doblemente enlazada." << endl;
        cout << "3. Eliminar elemento de lista circular doblemente enlazada." << endl;
        cout << "4. Buscar dato en lista circular doblemente enlazada." << endl;
        cout << "5. Verificar si lista esta vacia." << endl;
        cout << "6. Calcular longitud de lista." << endl;
        cout << "7. Volver al menu principal." << endl;
        cout << "0. Salir." << endl;
        cout << "-------------------------------------" << endl;
        cin >> answer;

        menuListaDoblementeEnlazadaCircularImp(answer);

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

int menuListaDoblementeEnlazadaCircularImp(int answer)
{
    switch (answer)
    {
    case 1:
        insertarElementoListaCircularDoblementeEnlazada();
        break;
    case 2:
        imprimirListaCircularDoblementeEnlazada();
        break;
    case 3:
        eliminarElementoListaCircularDoblementeEnlazada();
        break;
    case 4:
        buscarElementoListaCircularDoblementeEnlazada();
        break;
    case 5:
        verificarListaVaciaCircularDoblementeEnlazada();
        break;
    case 6:
        calcularLongitudListaCircularDoblementeEnlazada();
        break;
    case 7:
        main();
        break;
    case 0:
        cout << "Gracias por usar el sistema." << endl;
        break;
    default:
        cout << "Opcion incorrecta. Favor digite de nuevo." << endl;
    }
    return answer;
}

//4. Menu para bicola
void menuBicola()
{
    int answer;
    bool keepLooping = true;

    do
    {
        cout << "-------------------------------------" << endl;
        cout << "TAD Bicola" << endl;
        cout << "-------------------------------------" << endl;
        cout << "Favor digite una opcion:" << endl;
        cout << "1. Agregar elemento al frente." << endl;
        cout << "2. Agregar elemento al final." << endl;
        cout << "3. Remover al frente." << endl;
        cout << "4. Revormer al final." << endl;
        cout << "5. Verificar si lista esta vacia." << endl;
        cout << "6. Calcular longitud de lista." << endl;
        cout << "7. Volver al menu principal." << endl;
        cout << "0. Salir." << endl;
        cout << "-------------------------------------" << endl;
        cin >> answer;

        menuListaBicolaImp(answer);

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

//METODOS PARA VARIACIONES DE LISTAS

//1. Metodos para menu de lista circular
void insertarElementoListaCircular()
{
    int input = -1;
    bool valid = false;
    do
    {
        cout << "Favor digite un numero entero a agregar: " << flush;
        cin >> input;
        if (cin.good())
        {
            valid = true;
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error. Favor inserte un numero entero." << endl;
        }
    } while (!valid);

    cout << gestor->insertarElementoListaCircular(input) << endl;
}

void imprimirListaCircular()
{
    cout << gestor->mostrarListaCircular() << endl;
}

void eliminarElementoListaCircular()
{
    int input = -1;
    bool valid = false;
    do
    {
        cout << "Favor digite el numero entero a eliminar: " << flush;
        cin >> input;
        if (cin.good())
        {
            valid = true;
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error. Favor inserte un numero entero." << endl;
        }
    } while (!valid);

    cout << gestor->eliminarElementoListaCircular(input) << endl;
}

void buscarElementoListaCircular()
{
    int input = -1;
    bool valid = false;
    do
    {
        cout << "Favor digite el entero a buscar: " << flush;
        cin >> input;
        if (cin.good())
        {
            valid = true;
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error. Favor inserte un numero entero." << endl;
        }
    } while (!valid);

    cout << "-------------------------------------" << endl;
    cout << gestor->buscarElementoListaCircular(input) << endl;
}

void verificarListaVaciaCircular()
{
    cout << gestor->verificarListaVaciaCircular() << endl;
}

void calcularLongitudListaCircular()
{
    cout << "Largo de la lista circular: " << gestor->mostrarLargoListaCircular() << endl;
}

//2. Metodos para menu de lista doblemente enlazada

//3. Metodos para menu de lista circular doblemente enlazada
void insertarElementoListaCircularDoblementeEnlazada()
{
    int input = -1;
    bool valid = false;
    do
    {
        cout << "Favor digite un numero entero a agregar: " << flush;
        cin >> input;
        if (cin.good())
        {
            valid = true;
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error. Favor inserte un numero entero." << endl;
        }
    } while (!valid);

    cout << gestor->insertarElementoListaCircularDoblementeEnlazada(input) << endl;
}

void imprimirListaCircularDoblementeEnlazada()
{
    cout << gestor->mostrarListaCircularDoblementeEnlazada() << endl;
}

void eliminarElementoListaCircularDoblementeEnlazada()
{
    int input = -1;
    bool valid = false;
    do
    {
        cout << "Favor digite el numero entero a eliminar: " << flush;
        cin >> input;
        if (cin.good())
        {
            valid = true;
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error. Favor inserte un numero entero." << endl;
        }
    } while (!valid);

    cout << gestor->eliminarElementoListaCircularDoblementeEnlazada(input) << endl;
}

void buscarElementoListaCircularDoblementeEnlazada()
{
    int input = -1;
    bool valid = false;
    do
    {
        cout << "Favor digite el entero a buscar: " << flush;
        cin >> input;
        if (cin.good())
        {
            valid = true;
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error. Favor inserte un numero entero." << endl;
        }
    } while (!valid);

    cout << "-------------------------------------" << endl;
    cout << gestor->buscarElementoListaCircularDoblementeEnlazada(input) << endl;
}

void verificarListaVaciaCircularDoblementeEnlazada()
{
    cout << gestor->verificarListaVaciaCircularDoblementeEnlazada() << endl;
}

void calcularLongitudListaCircularDoblementeEnlazada()
{
    cout << "Largo de la lista circular: " << gestor->mostrarLargoListaCircularDoblementeEnlazada() << endl;
}

//4. Metodos para menu de bicola

int menuListaBicolaImp(int answer)
{
    switch (answer)
    {
    case 1:
        agregarAlfrente();
        break;
    case 2:
        agregarAlfinal();
        break;
    case 3:
        removerAlfrente();
        break;
    case 4:
        removerAlfinal();
        break;
    case 5:
        esVacia();
        break;
    case 6:
        consultarLongitud();
        break;
    case 7:
        main();
        break;
    case 0:
        cout << "Gracias por usar el sistema." << endl;
        break;
    default:
        cout << "Opcion incorrecta. Favor digite de nuevo." << endl;
    }
    return answer;
}

void agregarAlfrente() {
    int input = -1;
    bool valid = false;
    do
    {
        cout << "Favor digite un numero entero a agregar: " << flush;
        cin >> input;
        if (cin.good())
        {
            valid = true;
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error. Favor inserte un numero entero." << endl;
        }
    } while (!valid);

    gestor->agregarAlfrente(input);

    cout << "El numero: " << to_string(input) << " ha sido agregado al frente de la lista"<<endl;
}

void agregarAlfinal() {
    int input = -1;
    bool valid = false;
    do
    {
        cout << "Favor digite un numero entero a agregar: " << flush;
        cin >> input;
        if (cin.good())
        {
            valid = true;
        }
        else
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error. Favor inserte un numero entero." << endl;
        }
    } while (!valid);

    gestor->agregarAlfinal(input);
    cout << "El numero: " << to_string(input) << " ha sido agregado al final de la lista"<<endl;
}

void removerAlfrente() {
    int num = gestor->removerAlfrente();
    if (num == -1) {
        cout<<"No se encuentran elementos en la lista"<<endl;
    }
    else {
        cout << "Se a removido el numero: " << to_string(num) << " de la lista" << endl;
    }
    
}

void removerAlfinal() {
    int num = gestor->removerAlfinal();
    if (num == -1) {
        cout << "No se encuentran elementos en la lista"<<endl;
    }
    else {
        cout << "Se ha removido el numero: " << to_string(num) << " de la lista" << endl;
    }
    
}

void consultarLongitud() {
    cout << "En la lista se encuentran "<< to_string(gestor->longitud()) <<" elementos agregados" << endl;
}

void esVacia() {
    cout << gestor->esVacio() <<endl;
}