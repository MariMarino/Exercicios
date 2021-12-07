#include <iostream>

using namespace std;

int main()
{
    int n, fib, a = 0, b = 1;
    float valor;
    char f;

    cout << "Insira um valor:\n";
    cin >> valor;

    if (valor == a || valor == b)
        f = 'S';

    else{
        while (fib < 1000){
            fib = a + b;

            if (valor == fib)
                f = 'S';
            else
                f = 'N';

            a = b;
            b = fib;
        }
    }

    if (f == 'S')
        cout << "Está na sequencia.\n";
    else
        cout << "Não está na sequencia.\n";

    return 0;
}
