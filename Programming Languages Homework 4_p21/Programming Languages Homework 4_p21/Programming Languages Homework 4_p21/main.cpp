#include <iostream>
#include <cstdlib>
using namespace std;

void staticArrayInit();
void automaticArrayInit();

int main()
{
    cout << "First call to each function:\n";
    staticArrayInit();
    automaticArrayInit();

    cout << "\n\nSecond call to each function:\n";
    staticArrayInit();
    automaticArrayInit();

    cout << "\n";
    system("pause");
    return 0;
}

void staticArrayInit()
{
    static int array1[3];
    int i;

    cout << "\nValues on entering staticArrayInit:\n";

    for (i = 0; i <= 2; i++)
    {
        cout << "array1[" << i << "] = " << array1[i] << "  ";
    }

    cout << "\nValues on exiting staticArrayInit:\n";

    for (i = 0; i <= 2; i++)
    {
        cout << "array1[" << i << "] = " << (array1[i] += 5) << "  ";
    }
}

void automaticArrayInit()
{
    int array2[3] = { 1, 2, 3 };
    int i;

    cout << "\n\nValues on entering automicArrayInit:\n";

    for (i = 0; i <= 2; i++)
    {
        cout << "array2[" << i << "] = " << array2[i] << "  ";
    }

    cout << "\nValues on exiting automicArrayInit:\n";

    for (i = 0; i <= 2; i++)
    {
        cout << "array2[" << i << "] = " << (array2[i] += 5) << "  ";
    }
}