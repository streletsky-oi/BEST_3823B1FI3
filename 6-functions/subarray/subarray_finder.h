#include <math.h>
int find_subarrayq(const int *a, size_t an, const int *b, size_t bn)
{
    for (int i = 0; i <= an - bn; i++) 
    {
        if (memcmp(a + i, b, bn * sizeof(int)) == 0)
            return i;
    }

    return -1;
}

int find_subarray(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3){
    
    int pos1 = find_subarrayq(array, array_size, subarray1, subarray_size1);
    if (pos1 < 0){
        pos1 = -1;
    }

    int pos2 = find_subarrayq(array, array_size, subarray2, subarray_size2);
    if (pos2 < 0){
        pos2 = -1;
    }

    int pos3 = find_subarrayq(array, array_size, subarray3, subarray_size3);
    if (pos3 < 0){
        pos3 = -1;
    }

    return(pos1 + pos2 + pos3);
}
