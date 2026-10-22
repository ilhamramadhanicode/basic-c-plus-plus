#include <iostream>
using namespace std;

int main()
{
    int nilai_x = 20;
    int nilai_y = 100;

    if (nilai_x > nilai_y)
    {
        cout << "Selamat anda benar" << endl;
    }
    else
    {
        cout << "Salah :(, coba lagi!" << endl;
    }

    string name = "joko";
    int password = 123;

    if (name == "joko" && password == 123)
    {
        cout << "Selamat datang" << endl;
    }
    else
    {
        cout << "coba lagi!" << endl;
    }
}