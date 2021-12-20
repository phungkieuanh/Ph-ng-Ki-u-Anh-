// 19-tính lương nhân viên.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int id[10];
    string name[10];
    int diem[10];

    cout << "So nhan vien la: ";
    int SoNhanVien;
    cin >> SoNhanVien;
    cin.ignore(100, '\n');

    for (int i = 0; i < SoNhanVien; i++); {
        cout << "Id cua nhan vien:  ";
        cin >> id[i];
        cin.ignore(100, '\n');

        cout << "Ten nhan vien: ";
        getline(cin, name[i]);



    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
