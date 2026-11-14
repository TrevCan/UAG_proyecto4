#include <stdio.h>
#ifndef INVENTORY_H
#define INVENTORY_H

typedef struct Item
{
    int id_item;
    char *titulo;
    char *autor;
    char *tema;
    char *ubicacion;
} Item;

typedef struct Prestamo
{
    int id_prestamo;
    int id_ejemplar;
    int id_usuario;
    char *fecha_salida;
    char *fecha_limite;
    char *fecha_devolucion;
    int activo;
} Prestamo;

#endif