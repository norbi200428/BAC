/*

Un număr natural se numește major impar dacă suma divizorilor săi proprii impari este strict mai mare decât
suma divizorilor săi proprii pari. Divizorii proprii ai unui număr sunt divizorii săi naturali diferiți de 1 și de el însuși.
Exemplu: 18 este număr major impar (divizorii săi proprii pari sunt 2, 6, cei impari 3, 9, iar 3+9>2+6).
Subprogramul majImp are doi parametri, a și b, prin care primește câte un număr natural (2≤a≤b≤104).
Subprogramul returnează cel mai mic număr major impar din intervalul [a,b], sau valoarea 0, dacă în
interval nu există un astfel de număr. Scrieţi în C/C++ definiţia completă a subprogramului.
Exemplu: dacă a=16, b=30, atunci subprogramul returnează 18.

*/
s
#include <iostream>

using namespace std;

int majImp(int a, int b)
{
    for(int i = a; i <= b; ++i)
    {
        int p = 0, ptl = 0;
        for(int j = 2; j < i; ++j)
        {
            if(i % j == 0 && j % 2 == 0) p += j;
            if(i % j == 0 && j % 2 > 0) ptl += j;
        }
        if(ptl > p)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    cout << majImp(1,3);
    return 0;
}
