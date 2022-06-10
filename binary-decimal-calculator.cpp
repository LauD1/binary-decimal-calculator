// binary-decimal-calculator.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <math.h>

using namespace std;

double potega(int a, double n)
{
    double wynik = a;

    if (n > 0)
    {
        for (double i = 1; i < n; i++)
        {
            wynik = wynik * a;
        }
    }
    if (n < 0)
    {
        for (double i = n; i < -1; i++)
        {
            wynik = wynik * a;
        }
        wynik = 1 / wynik;
    }
    return wynik;
}

int bintoint(string str)
{
    int n;
    int wynikk = 0;
    n = str.length();
    for (int i = 0; i < n; i++)
    {
        wynikk = (wynikk + (str[n - i - 1] - 48) * potega(2, i));
    }
    return wynikk;
}

void inttobin(int dz, int tab[], int n)
{

    for (int i = 0; i < n; i++)
    {
        tab[i] = dz % 2;
        dz = dz / 2;

    }
}

int main()
{
    string dz;
    string str;
    int wynikk;
    int e;
    cout << "Zamiana na binarna? Wpisz 1 Zamiana na dziesietna? Wpisz 2:" << endl;
    cin >> e;
    if (e == 1)
    {
        cout << "Liczba z binarnego na dziesietny:" << endl;
        cin >> str;
        wynikk = bintoint(str);
        cout << wynikk - 1 << endl ;
    }
    if (e == 2)
    {
        int x;
        
        cout << "Liczba z dziestetnej na binarna:" << endl;
        cin >> x;
        int n = ceil(log2(x + 1));
        int * tab = new int [n];

        inttobin(x, tab, n);

        for (int i = 0; i < n; i++)
        {
         
                tab[i];
            
        }

        reverse(tab, tab + n);

            for (int i = 0; i < n; i++)
            {

                cout << tab[i];

            }
    }
    return 0;
}