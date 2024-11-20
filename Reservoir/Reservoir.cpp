#include "Reservoir.h"
using namespace std;

int main() 
{
    Reservoir reservoir1("Lake Superior", "Lake", 100.0, 150.0, 500.0);
    Reservoir reservoir2("Dead Sea", "Sea", 200.0, 300.0, 400.0);

    reservoir1.display();
    reservoir2.display();

    if (reservoir1.isSameType(reservoir2)) 
    {
        cout << "Both are of the same type." << endl;
    }

    else 
    {
        cout << "They are different types." << endl;
    }

    cout << "Volume of reservoir1: " << reservoir1.calculateVolume() << endl;
    cout << "Surface Area of reservoir2: " << reservoir2.calculateSurfaceArea() << endl;

    if (reservoir1.hasLargerSurface(reservoir2))
    {
        cout << "reservoir1 has a larger surface area." << endl;
    }

    else
    {
        cout << "reservoir2 has a larger surface area." << endl;
    }

    return 0;
}