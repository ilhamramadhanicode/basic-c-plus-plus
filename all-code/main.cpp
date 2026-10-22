#include <iostream>

int main()
{
    // Hello World / Print Out
    std::cout
        << "=====PRINT OUT=====" << std::endl;
    std::cout << "Hello World" << std::endl;

    // Variable & Tipe Data
    std::cout << "=====INTEGER=====" << std::endl;
    int result_int = 20;
    std::cout << "Result = ";
    std::cout << result_int << std::endl;

    std::cout << "=====FLOAT=====" << std::endl;
    float result_float = 20.5;
    std::cout << "Result = ";
    std::cout << result_float << std::endl;

    std::cout << "=====STRING=====" << std::endl;
    std::string sayHello = "Hei Sayang";
    std::cout << sayHello << std::endl;

    std::cout << "=====BOOLEAN=====" << std::endl;
    bool IlhamGanteng = true;
    bool IlhamBadBoy = false;
    std::cout << IlhamGanteng << std::endl;
    std::cout << IlhamBadBoy << std::endl;

    std::cout << "=====OPERATOR ARITMATIKA=====" << std::endl;

    int a = 100;
    int b = 50;

    std::cout << "100 + 50 = ";
    std::cout << (a + b) << std::endl;

    std::cout << "100 - 50 = ";
    std::cout << (a - b) << std::endl;

    std::cout << "100 * 50 = ";
    std::cout << (a * b) << std::endl;

    std::cout << "100 / 50 = ";
    std::cout << (a / b) << std::endl;

    std::cout << "100 % 30 = ";
    std::cout << (a % b) << std::endl;

    std::cout << "=====OPERATOR LOGIKA=====" << std::endl;
    int x = 10;
    std::cout << (x > 9 && x < 30) << std::endl;
    std::cout << (x < 9 || x < 30) << std::endl;
    std::cout << (x > 9 && x > 30) << std::endl;
    std::cout << (x < 9 || x > 30) << std::endl;
    std::cout << !(x > 9 && x < 30) << std::endl;
    std::cout << !(x < 9 || x > 30) << std::endl;

    std::cout << "=====OPERATOR ASSIGNMENT=====" << std::endl;
    int angka_tambah = 200;
    angka_tambah += 200; // angka_tambah = angka_tambah + 200
    std::cout << angka_tambah << std::endl;

    int angka_kurang = 500;
    angka_kurang -= 200; // angka_kurang = angka_kurang - 200
    std::cout << angka_kurang << std::endl;

    int angka_kali = 500;
    angka_kali *= 2; // angka_kali = angka_kali * 2
    std::cout << angka_kali << std::endl;

    int angka_bagi = 1200;
    angka_bagi /= 300; // angka_bagi = angka_bagi / 300
    std::cout << angka_bagi << std::endl;

    std::cout << "=====OPERATOR PEMBANDINGAN=====" << std::endl;
    int lebih_besar_a = 100;
    int lebih_besar_b = 30;
    std::cout << (lebih_besar_a > lebih_besar_b) << std::endl;

    int lebih_kecil_a = 2;
    int lebih_kecil_b = 30;
    std::cout << (lebih_kecil_a < lebih_kecil_b) << std::endl;

    int age = 30;
    std::cout << (age >= 30) << std::endl;

    int nilai = 90;
    std::cout << (nilai <= 90) << std::endl;

    int password = 123;
    std::cout << (password == 123) << std::endl;

    int otp = 155698;
    std::cout << (otp != 123) << std::endl;
    return 0;
}