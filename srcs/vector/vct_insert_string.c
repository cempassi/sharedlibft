#include "vector.h"

int8_t       vct_insert_string(t_vector *vector,
                    char *str, uint64_t index)
{
    uint64_t    len;
    uint64_t    idx;

    //protection
    if (index > vct_len(vector))
        return (-1);
    if ((vct_len(vector) + ft_strlen(str) + 1) >= vector->size)
        vct_resize(vector, (vct_len(vector) + ft_strlen(str) + 2));
    //insertion
    idx = -1;
    len = ft_strlen(str);
    shift_nright(vector, index, len);
    while (++idx < len)
        vector->buffer[index + idx] = str[idx];
    return (0);
}