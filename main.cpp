#include "module.h"

#include <iostream>
using std::cout;
using std::endl;

void Found(int position, int value){
    if (position == -1) {
        cout << value << " not found in the array" << endl;
    } else {
        cout <<  value << " found in position " << position << endl;
    }
}

int main() {
    int myData[] = {4, 3, 6, 1, -5, 2, 0, 8, 12, 5};
    const int SIZE = 10;
    int position, value;

    for (value = 0; value < 15; value++) {
        position = LinearSearch(myData, SIZE, value);
        Found(position, value);
    }

    return 0;
}
