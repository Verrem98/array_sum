#include <iostream>
#include <fstream>
using std::cout, std::endl;

int mains(){

    cout << "test";

}

double sumArray(double *a, int numValues)
{
    int i;
    double result = 0.0;

    for (i = 0; i < numValues; i++)
    {
        result += a[i];
    }

    return result;
}