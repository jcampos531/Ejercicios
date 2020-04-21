#ifndef TIPOS_Y_CONST_H_INCLUDED
#define TIPOS_Y_CONST_H_INCLUDED

const char ARCH_P [] = "color.dat";

struct tFecha{
    int dia, mes, anio;
};

struct Coloraciones{
    int cod;
    struct tFecha fecha; //dia-mes-anio
    char gen; //H-M-O
    char tipoPelo[10];
};

#endif // TIPOS_Y_CONST_H_INCLUDED
