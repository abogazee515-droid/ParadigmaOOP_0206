#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    string NIM;
    string Name;
    float nilai;

    void PrintData()
    {
        cout << "NIM : " << NIM << endl;
        cout << "Name : " << Name << endl;
        cout << "Nilai : " << nilai << endl;
    }
};

int main()
{
    Mahasiswa mhs1;

    mhs1.Name = "SULAIMAN YOUSEF AL HAKAMI";
    mhs1.NIM = "20250140206";
    mhs1.nilai = 90.6;
}