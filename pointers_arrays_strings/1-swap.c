#include "main.h"

/**
 * swap_int - échange les valeurs de deux entiers
 * @a: pointeur vers le premier entier
 * @b: pointeur vers le second entier
 *
 * Description: Cette fonction prend deux pointeurs et échange
 * les valeurs des entiers pointés.
 */
void swap_int(int *a, int *b)
{
int i = *a;
*a = *b;
*b = i;
}
