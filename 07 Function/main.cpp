#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

void sayHello(string name)
{
    cout << "Hello " << name << endl;
}

string sayGoodBye(string say)
{
    return say;
}

int main()
{
    cout << "Hasil = ";
    cout << add(9, 10) << endl;

    sayHello("Joko");
    sayHello("Moro");
    sayHello("Budi");

    string says = sayGoodBye("Moro Nugroho");
    cout << says << endl;

    return 0;
}