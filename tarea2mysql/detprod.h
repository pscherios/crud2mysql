#pragma once
#include <iostream>
using namespace std;
class detprod
{
    //atributos
protected: string nombres, descripcion, precio_costo, precio_venta, existencia, fecha_ingreso;


protected:
    detprod() {

    }
    detprod(string nom, string des, string p_cos, string p_ven, string ext, string f_ingreso) {
        nombres = nom;
        descripcion = des;
        precio_costo = p_cos;
        precio_venta = p_ven;
        existencia = ext;
        fecha_ingreso = f_ingreso;
    }

};

