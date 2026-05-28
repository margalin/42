#include "libft.h"

int ft_isascii(int ascii){
    if (ascii >= 0 && ascii <= 127)
        return (1);
    return (0);}

// si el valor introducido es ascii devuelve 1