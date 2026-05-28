#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t l){
    unsigned char *destination;
    unsigned char *source;

    if (src == NULL && dst == NULL){return(NULL);}
    destination = (unsigned char *)dst;
    source = (unsigned char *)src;
    if (destination >= source){
        while(l != 0){destination[l] = source[l];}}
    else
        ft_memcpy(destination, source, l);
    return(destination);
}


// copiar en destino dst el string apuntado como area de memoria src y terminado por el valor nulo, devuelvo longitud destino
// a diferencia de memcpy = puede haber solapamiento. Si el destino es mayor que el origen, copia src en dst
// creo punteros para almacenar parametros de entrada y poder comparar las posiciones.
// mientras el tamaño de entrada sea distinto de 0, copio lo src en dst