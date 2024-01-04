#include "module.h"

#include <iostream>
using std::cout;
using std::endl;

int main() {
    int myData[] = {4, 3, 6, 1, -5, 2, 0, 8, 12, 5};
    const int SIZE = 10;
    int position, value;

    value = 20;
    position = LinearSearch(myData, SIZE, value);
    if (position == -1)
        cout << value << " not found in the array" << endl;
    else
        cout << value << " found in position " << position << endl;

    value = -5;
    position = LinearSearch(myData, SIZE, value);
    if (position == -1)
        cout << value << " not found in the array" << endl;
    else
        cout << value << " found in position " << position << endl;

    value = 4;
    position = LinearSearch(myData, SIZE, value);
    if (position == -1)
        cout << value << " not found in the array" << endl;
    else
        cout << value << " found in position " << position << endl;


    return 0;
}
