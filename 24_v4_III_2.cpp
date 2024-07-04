/*

Fiind date două numere naturale a și b, numim valoare generată de a și b un număr obținut din a prin
alipirea la stânga sau la dreapta sa a cifrelor lui b, în ordinea în care apar în acesta.
Exemplu: dacă a=123 și b=45, se pot obține două numere generate de acestea: 12345 și 45123.
Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale din intervalul [2,50], m și n,
şi construiește în memorie un tablou bidimensional cu m linii, numerotate de la 1 la m, și n coloane,
numerotate de la 1 la n, în care fiecare element este egal cu cea mai mică valoare generată de numerele
de ordine ale liniei, respectiv coloanei pe care se află.
Programul afişează pe ecran tabloul obţinut, fiecare linie a tabloului pe câte o
linie a ecranului, elementele fiecărei linii fiind separate prin câte un spaţiu.
Exemplu: pentru m=5 și n=4 se obține tabloul alăturat.
11 12 13 14
12 22 23 24
13 23 33 34
14 24 34 44
15 25 35 45

*/

#include <iostream>

using namespace std;

int main()
{
    unsigned int m,n;

    cout << "m = ";
    cin >> m;
    cout << "n = ";
    cin >> n;

    int a[m+1][n+1];
    //generalas
    for(auto i = 1; i <= m; ++i)
    {
        for(auto j = 1; j <= n; ++j)
        {
            if(i >= j) a[i][j] = j * 10 + i;
            else a[i][j] = i * 10 + j;
        }
    }
    cout << "A letrehozott tomb:\n";
    for(auto i = 1; i <= m; ++i)
    {
        for(auto j = 1; j <= n; ++j)
        {
            cout <<  a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
