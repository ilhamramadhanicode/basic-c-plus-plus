#include <iostream>
using namespace std;

int main()
{
    cout << "=====WHILE LOOP=====" << endl;

    int i = 0;
    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }

    cout << "=====FOR LOOP=====" << endl;

    for (int i = 0; i <= 10; i++)
    {
        cout << "Angka ke - " << i << endl;
    }

    cout << "=====DO WHILE=====" << endl;

    int a = 0;
    do
    {
        cout << a << endl;
        i++;
    } while (a < 10);

    return 0;
}