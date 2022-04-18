// tarea2mysql.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <mysql.h>
#include <iostream>
#include "producto.h"
#include <string>

using namespace std;

void crearPro();
void menupro();
void borrarPro();
void actualizarPro();
void leerPro();

void crearM();
void menuM();
void borrarM();
void actualizarM();
void leerM();

int main()
{   
    do {
        system("cls");
        int q = 0;
        cout << "para modificar la tabla productos: (1)" << '\n';
        cout << "para modificar la tabla marcas: (2)" << '\n';
        cin >> q;
        switch (q)
        {
        case 1: menupro(); 
            break;

        case 2: menuM(); break;
        default: cout << "error ingresa un numero valido!!!! ";
            break;
        }




    } while (1 == 1);


}



void menupro() {
    int switch_on = 0;
    cout << "para agregar contenido ingresa 1" << endl;
    cout << "para leer la tabla ingresa 2" << endl;
    cout << "para actualizar la tabla ingresa 3" << endl;
    cout << "para borrar de la tabla ingresa 4 " << endl;
    cin >> switch_on;
    switch (switch_on)
    {
    case 1: crearPro(); break;

    case 2: leerPro(); break;

    case 3: actualizarPro(); break;
    
    case 4: borrarPro(); break;

    default: cout << "error ingresa un caracter valido!!!!" << endl;
        break;
    }


}


void menuM() {
    int switch_on = 0;
    cout << "para agregar contenido ingresa 1" << endl;
    cout << "para leer la tabla ingresa 2" << endl;
    cout << "para actualizar la tabla ingresa 3" << endl;
    cout << "para borrar de la tabla ingresa 4 " << endl;
    cin >> switch_on;
    switch (switch_on)
    {
    case 1: crearM(); break;

    case 2: leerM(); break;

    case 3: actualizarM(); break;

    case 4: borrarM(); break;

    default: cout << "error ingresa un caracter valido!!!!" << endl;
        break;
    }









}





void crearPro() {
    string nom, des, pre_cos, pre_ven, exi, f_ingreso, idM, u;
    getline(cin, nom);
    cout << "ingrese nobres del producto: ";
    getline(cin, nom);
    cout << "ingrese id de la Marca: ";
    getline(cin, idM);
    cout << "ingrese descripcion: ";
    getline(cin, des);
    cout << "ingrese precio costo: ";
    getline(cin, pre_cos);
    cout << "ingrese precio venta: ";
    getline(cin, pre_ven);
    cout << "ingrese existencias: ";
    getline(cin, exi);
    cout << "ingrese fecha de ingreso: ";
    getline(cin, f_ingreso);



    producto c = producto(nom, des, pre_cos, pre_ven, exi, f_ingreso, idM,u);
    c.crear();
 



}

void borrarPro() {

    string nom, des, pre_cos, pre_ven, exi, f_ingreso, idM,u;
    getline(cin, nom);
    cout << "ingrese nobres del producto a eliminar: ";
    getline(cin, nom);

    producto c = producto(nom, des, pre_cos, pre_ven, exi, f_ingreso, idM, u);
    c.borrar();
 }


void actualizarPro() {
    string nom, des, pre_cos, pre_ven, exi, f_ingreso, idM,u;
    getline(cin, u);
    cout << "ingrese id del producto a actualizar: ";
    getline(cin, u);
    cout << "=================================================" << endl;
    getline(cin, nom);
    cout << "ingrese nuevo nombre del producto: ";
    getline(cin, nom);
    cout << "ingrese nueva id de la Marca: ";
    getline(cin, idM);
    cout << "ingrese descripcion: ";
    getline(cin, des);
    cout << "ingrese precio costo: ";
    getline(cin, pre_cos);
    cout << "ingrese precio venta: ";
    getline(cin, pre_ven);
    cout << "ingrese existencias: ";
    getline(cin, exi);
    cout << "ingrese fecha de ingreso: ";
    getline(cin, f_ingreso);

    producto c = producto(nom, des, pre_cos, pre_ven, exi, f_ingreso, idM,u);
    c.actualizar();

}

void leerPro() {
    string nom, des, pre_cos, pre_ven, exi, f_ingreso, idM, u;
    cout << "--------------TABLA PRODUCTOS----------------------------" << endl;
    producto c = producto(nom, des, pre_cos, pre_ven, exi, f_ingreso, idM, u);
    c.leer();
}

void crearM() {
    string nom, des, pre_cos, pre_ven, exi, f_ingreso, idM, u;
    getline(cin, nom);
    cout << "ingrese nombre de la marca : ";
    getline(cin, idM);

    producto c = producto(nom, des, pre_cos, pre_ven, exi, f_ingreso, idM, u);
    c.crearM();

}

void borrarM() {

    string nom, des, pre_cos, pre_ven, exi, f_ingreso, idM, u;
    getline(cin, nom);
    cout << "ingrese nobres de la marca a eliminar: ";
    getline(cin, idM);

    producto c = producto(nom, des, pre_cos, pre_ven, exi, f_ingreso, idM, u);
    c.borrarM();
}


void actualizarM() {
    string nom, des, pre_cos, pre_ven, exi, f_ingreso, idM, u;
    getline(cin, u);
    cout << "ingrese id del producto a actualizar: ";
    getline(cin, u);
    cout << "=================================================" << endl;
    getline(cin, nom);
    cout << "ingrese nuevo nombre de la marca: ";
    getline(cin, idM);
  

    producto c = producto(nom, des, pre_cos, pre_ven, exi, f_ingreso, idM, u);
    c.actualizarM();

}

void leerM() {
    string nom, des, pre_cos, pre_ven, exi, f_ingreso, idM, u;
    cout << "--------------TABLA PRODUCTOS----------------------------" << endl;
    producto c = producto(nom, des, pre_cos, pre_ven, exi, f_ingreso, idM, u);
    c.leerM();
}