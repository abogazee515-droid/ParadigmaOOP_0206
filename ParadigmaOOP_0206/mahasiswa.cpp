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

int main() {}