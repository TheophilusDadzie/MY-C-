#include <iostream>

using namespace std;

int main()
{
    int length;
    int width;
    int Area;

    // This program calculate the area of a rectangle

    cout << "Enter the number of the length \n ";
    cin >> length;

    cout << "Enter the number of the width \n ";
    cin >> width;

    // The answer of the area
    Area = length * width;
    cout << "The area of a rectangle is " << Area << endl;
    return 0;
}
