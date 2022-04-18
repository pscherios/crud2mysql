#pragma once
#include "ConexionDB.h"
#include "detprod.h"
class producto :
    public detprod
{
private: string id_marca, use;
         
public:
    producto() {

    }
    producto(string nom, string des, string p_cos, string p_ven, string ext, string f_ingreso, string im, string u) : detprod(nom, des, p_cos, p_ven,ext,f_ingreso) {
        idMarca = im;
        use = u;
    }

    void setNombres(string nom) { nombres = nom; }
    void setIdmarca(string im) { id_marca = im; }
    void setDes(string des) { descripcion = des; }
    void setPre_cos(string p_cos) { precio_costo = p_cos; }
    void setPre_ven(string p_ven) { precio_venta = p_ven; }
    void setExi(string ext) { existencia = ext; }
    void setF_ingreso(string f_ingreso) { fecha_ingreso = f_ingreso; }
    void setUse(string u) { use = u; }
 
    string getNobres() { return nombres; }
    string getIdmarca() { return idMarca; }
    string getDes() { return descripcion; }
    string getPre_cos() { return precio_costo; }
    string getPre_ven() { return precio_venta; }
    string getExi() { return existencia; }
    string getF_ingreso() { return fecha_ingreso; }
    string getUse() { return use; }



    void leer() {
        int q_estado;
        ConexionBD cn = ConexionBD();
        MYSQL_ROW fila;
        MYSQL_RES* resultado;
        cn.abrir_conexion();
        if (cn.getConectar()) {
            cout << "------------ Datos de los clientes ------------" << endl;
            string consulta = "select * from productos";
            const char* c = consulta.c_str();
            q_estado = mysql_query(cn.getConectar(), c);
            if (!q_estado) {
                resultado = mysql_store_result(cn.getConectar());
                while (fila = mysql_fetch_row(resultado)) {
                    cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << "," << fila[4] << "," << fila[5] << "," << fila[6] << "," << fila[7] << endl;
                }

            }
            else {
                cout << " xxx Error al Consultar  xxx" << endl;
            }

        }
        else {
            cout << "Error al leer" << endl;
            system("pause");
        }
        cn.cerrar_conexion();

    }

    void crear() {
        int q_estado;
        ConexionBD cn = ConexionBD();
        cn.abrir_conexion();
        if (cn.getConectar()) {
            string insert = "INSERT INTO productos(producto,idMarca,Descripcion,precio_costo,precio_venta,existencia,fecha_ingreso)VALUES('" + nombres + "','" +id_marca + "','" + descripcion + "','" + precio_costo + "','" + precio_venta + "','" + existencia + "','" + fecha_ingreso + "'); ";
            const char* i = insert.c_str();
            q_estado = mysql_query(cn.getConectar(), i);
            if (!q_estado) {
                cout << "ingreso exitoso" << endl;
            }
            else {
                cout << "error al insertar" << endl;
            }

        }
        else {
            cout << "Error al leer" << endl;
            system("pause");
        }
        cn.cerrar_conexion();
    }

    void borrar() {
        int q_estado;
        ConexionBD cn = ConexionBD();
        cn.abrir_conexion();
        if (cn.getConectar()) {
            string insert = "DELETE FROM productos WHERE producto='" + nombres + "';";
            const char* i = insert.c_str();
            q_estado = mysql_query(cn.getConectar(), i);
            if (!q_estado) {
                cout << "ingreso exitoso" << endl;
            }
            else {
                cout << "error al insertar" << endl;
            }

        }
        else {
            cout << "Error al leer" << endl;
            system("pause");
        }
        cn.cerrar_conexion();

    }

    void actualizar() {
        int q_estado;
        ConexionBD cn = ConexionBD();
        cn.abrir_conexion();
        if (cn.getConectar()) {
            string insert = "UPDATE productos\
                             SET producto='" + nombres + "',idMarca='" + id_marca + "', Descripcion = '" + descripcion + "', precio_costo = '" + precio_costo + "', precio_venta = '" + precio_venta + "', existencia = '" + existencia + "', fecha_ingreso = '" + fecha_ingreso + "'\
                             WHERE idproductos='" + use + "';"; 
            const char* i = insert.c_str();
            q_estado = mysql_query(cn.getConectar(), i);
            if (!q_estado) {
                cout << "ingreso exitoso" << endl;
                system("pause");
            }
            else {
                cout << "error al insertar" << endl;
                system("pause");
            }

        }
        else {
            cout << "Error al leer" << endl;
            system("pause");
        }
        cn.cerrar_conexion();
        system("pause");

    }



    void crearM() {
        int q_estado;
        ConexionBD cn = ConexionBD();
        cn.abrir_conexion();
        if (cn.getConectar()) {
            
            string insert = "INSERT INTO marcas(marca)VALUES('" + id_marca + "'); ";
            const char* i = insert.c_str();
            q_estado = mysql_query(cn.getConectar(), i);
            if (!q_estado) {
                cout << "ingreso exitoso" << endl;
            }
            else {
                cout << "error al insertar" << endl;
            }

        }
        else {
            cout << "Error al leer" << endl;
            system("pause");
        }
        cn.cerrar_conexion();

    }


    void leerM() {
        int q_estado;
        ConexionBD cn = ConexionBD();
        MYSQL_ROW fila;
        MYSQL_RES* resultado;
        cn.abrir_conexion();
        if (cn.getConectar()) {
            cout << "------------ Datos de la tabla marca ------------" << endl;
            string consulta = "select * from marcas";
            const char* c = consulta.c_str();
            q_estado = mysql_query(cn.getConectar(), c);
            if (!q_estado) {
                resultado = mysql_store_result(cn.getConectar());
                while (fila = mysql_fetch_row(resultado)) {
                    cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << "," << fila[4] << "," << fila[5] << "," << fila[6] << "," << fila[7] << endl;
                }

            }
            else {
                cout << " xxx Error al Consultar  xxx" << endl;
            }

        }
        else {
            cout << "Error al leer" << endl;
            system("pause");
        }
        cn.cerrar_conexion();

    }

    void borrarM() {
        int q_estado;
        ConexionBD cn = ConexionBD();
        cn.abrir_conexion();
        if (cn.getConectar()) {
            string insert = "DELETE FROM marcas WHERE marca='" + id_marca + "';";
            const char* i = insert.c_str();
            q_estado = mysql_query(cn.getConectar(), i);
            if (!q_estado) {
                cout << "ingreso exitoso" << endl;
            }
            else {
                cout << "error al insertar" << endl;
            }

        }
        else {
            cout << "Error al leer" << endl;
            system("pause");
        }
        cn.cerrar_conexion();

    }

    void actualizarM() {
        int q_estado;
        ConexionBD cn = ConexionBD();
        cn.abrir_conexion();
        if (cn.getConectar()) {
            string insert = "UPDATE marcas\
                             SET marca='" + id_marca + "'\
                             WHERE idMarcas='" + use + "';";
            const char* i = insert.c_str();
            q_estado = mysql_query(cn.getConectar(), i);
            if (!q_estado) {
                cout << "ingreso exitoso" << endl;
                system("pause");
            }
            else {
                cout << "error al insertar" << endl;
                system("pause");
            }

        }
        else {
            cout << "Error al leer" << endl;
            system("pause");
        }
        cn.cerrar_conexion();
        system("pause");

    }

};

