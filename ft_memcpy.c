#include "libft.h"

void *ft_memcpy(char *dst, const char *src, size_t ldst){
    size_t i;
    size_t lsrc;

    i = 0;
    lsrc = ft_strlen(src);
    if(ldst < 1){return(lsrc);}
    while(src[i] != '\0' && i < (ldst - 1)){
        dst[i] = src[i];
        i++;}
    dst[i] = '\0';
    return(ldst);
}

// copiar en destino dst el string apuntado como area de memoria src y terminado por el valor nulo, devuelvo longitud destino
// si el tamaño del destino es menor que 1 devuelvo el tamaño del origen, esto hace que no se solapen
// mientras tenga puntero inicial y tamaño destino, copio dst en src y finalizo con nulo


