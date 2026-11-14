#include <stdio.h>
#ifndef SECURITY_H
#define SECURITY_H

typedef struct Credenciales
{
    char *username;
    char *password;
    int estado_autenticacion; // 0 = Error, 1 = Acceso permitido
} Credenciales;

#endif