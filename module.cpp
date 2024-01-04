#include "module.h"

int LinearSearch(int data[], int size, int key){
    for (int i = 0; i < size; ++i) {
        if (data[i] == key)
            return i;
    }
    return -1;
}
