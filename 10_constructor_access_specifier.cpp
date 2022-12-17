#include <iostream>
using namespace std;

class MyClass
{
public:    // Public access specifier
    int x; // Public attribute
private:   // Private access specifier
    int y; // Private attribute
};

int main()
{
    MyClass myObj;
    myObj.x = 25; // Allowed (x is public)
    /**
     * member "MyClass::y" (declared at line 9) is inaccessible
     * myObj.y = 50; // Not allowed (y is private)
     */
    return 0;
}
