#include <iostream>
using namespace std;

int main()
{
    float len, bre, area;
    cout << "Enter length of rectangle: ";
    cin >> len;
    cout << "Enter the breadth of rectangle";
    cin >> bre;
    area = len * bre;
    cout << "\nArea = " << area;
    cout << endl;
    return 0;
}
