#include <iostream>

using namespace std;

int main()
{
    int length, width, perimeter, area;  
    system("cls"); 
    cout << "Please enter the length of the rectangle: ";
    cin >> length;
    system("cls"); 
    cout << "Please enter the width of the rectangle: ";
    cin >> width;
    perimeter = 2 * (length + width);
    area = length * width;
    system("cls"); 
    cout << "Perimeter of the rectangle is " << perimeter << " and Area is " << area << endl;
    cin.get();
    cin.get();

    return 0;
}
/**
 * @copyright
 * Coded by Sobhan-SRZA (mr.sinre) | https://github.com/Sobhan-SRZA
 * @copyright
 * Work for Persian Caesar | https://dsc.gg/persian-caesar
 * @copyright
 * Please Mention Us "Persian Caesar", When Have Problem With Using This Code!
 * @copyright
 */