#include <iostream>
using namespace std;

int main()
{
    cout << "=====ARRAY FOR LOOP=====" << endl;
    string list[5] = {"Joko", "Moro", "Budi", "Soni", "Udin"};

    for (int i = 0; i < 5; i++)
    {
        cout << list[i] << endl;
    }

    cout << "=====ARRAY FOR IN=====" << endl;
    string myProfile[4] = {"Jokowi", "Prabowo", "Gibran", "Bunda Teddy"};
    for (string num : myProfile)
    {
        cout << num << endl;
    }

    return 0;
}