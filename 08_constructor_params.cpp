#include <iostream>
using namespace std;

class Car
{                 // The class
public:           // Access specifier
    string brand; // Attribute
    string model; // Attribute
    int year;     // Attribute
    Car(string x, string y, int z)
    { // Constructor with parameters
        brand = x;
        model = y;
        year = z;
    }
};

int main()
{
    // Create Car objects and call the constructor with different values
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);
    Car carObj3("Renault", "Clio", 2000);

    // Print values with loop
    Car cars[3] = {carObj1, carObj2, carObj3};
    for (int i = 0; i < 3; i++)
    {
        cout << cars[i].brand << " " << cars[i].model << " " << cars[i].year << "\n";
    }
    return 0;
}
