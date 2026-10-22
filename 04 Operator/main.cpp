#include <iostream>
using namespace std;

int main()
{
    cout << "=====OPERATOR ARITMATIKA=====" << endl;

    int a = 100;
    int b = 50;

    cout << "100 + 50 = ";
    cout << (a + b) << endl;

    cout << "100 - 50 = ";
    cout << (a - b) << endl;

    cout << "100 * 50 = ";
    cout << (a * b) << endl;

    cout << "100 / 50 = ";
    cout << (a / b) << endl;

    cout << "100 % 30 = ";
    cout << (a % b) << endl;

    cout << "=====OPERATOR LOGIKA=====" << endl;
    int x = 10;
    cout << (x > 9 && x < 30) << endl;
    cout << (x < 9 || x < 30) << endl;
    cout << (x > 9 && x > 30) << endl;
    cout << (x < 9 || x > 30) << endl;
    cout << !(x > 9 && x < 30) << endl;
    cout << !(x < 9 || x > 30) << endl;

    cout << "=====OPERATOR ASSIGNMENT=====" << endl;
    int angka_tambah = 200;
    angka_tambah += 200; // angka_tambah = angka_tambah + 200
    cout << angka_tambah << endl;

    int angka_kurang = 500;
    angka_kurang -= 200; // angka_kurang = angka_kurang - 200
    cout << angka_kurang << endl;

    int angka_kali = 500;
    angka_kali *= 2; // angka_kali = angka_kali * 2
    cout << angka_kali << endl;

    int angka_bagi = 1200;
    angka_bagi /= 300; // angka_bagi = angka_bagi / 300
    cout << angka_bagi << endl;

    cout << "=====OPERATOR PEMBANDINGAN=====" << endl;
    int lebih_besar_a = 100;
    int lebih_besar_b = 30;
    cout << (lebih_besar_a > lebih_besar_b) << endl;

    int lebih_kecil_a = 2;
    int lebih_kecil_b = 30;
    cout << (lebih_kecil_a < lebih_kecil_b) << endl;

    int age = 30;
    cout << (age >= 30) << endl;

    int nilai = 90;
    cout << (nilai <= 90) << endl;

    int password = 123;
    cout << (password == 123) << endl;

    int otp = 155698;
    cout << (otp != 123) << endl;
    return 0;
}