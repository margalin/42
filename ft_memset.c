#include "libft.h"

void *ft_memset(void *memset, int *value, size_t len){
    unsigned char *aux;
    size_t i;

    aux ==memset;
    i = 0;
    while (i < len){
        aux[i] = (unsigned char)value;
        i++;
    }
   return (memset);

}

// coge un puntero a una localizacion de la memoria, el valor por el que quiere cambiarlo y el numero de bytes a cambiar (len
// se declara un puntero auxiliar para rellenar memset con el valor declarado durante la longitud querida