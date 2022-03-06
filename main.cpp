#include <iostream>

using namespace std;

class alan
{
    int a, b;
    
public:
    void set(int _a, int _b)
    {
        a = _a;
        b = _b;
    }
    int hesapla(void)
    {
        int A;
        
        A = a * b;
        
        return A;
    }
    void goster(int alan)
    {
        cout << "\n\t" << "Alan: " << alan << "\n\n";
        cout << "----------------------------------------------------------\n" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Turkish");
    
    alan cisim;
    int k1, k2;
    
    cout << "Cismin iki kenarını girin: ";
    cin >> k1 >> k2;
    
    cisim.set(k1, k2);
    cisim.goster(cisim.hesapla());
    
    return main();
}
