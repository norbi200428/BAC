/*

Un număr natural nenul, n, se numește număr abundent dacă S(n)/n>S(k)/k, pentru orice număr
natural nenul k (k≤n-1), unde s-a notat cu S(i) suma divizorilor pozitivi ai numărului natural nenul i.
Subprogramul abundent are un singur parametru, n, prin care primește un număr natural (n∈[2,106]).
Subprogramul returnează valoarea 1, dacă n este un număr abundent, sau valoarea 0, în caz contrar.
Scrieți definiția completă a subprogramului.
Exemplu: pentru n=6, subprogramul returnează valoarea 1 (S(6)/6=2, iar cel mai mare raport obținut
pentru valori strict mai mici decât 6 este S(4)/4=1.75), iar pentru n=7 sau n=8, subprogramul
returnează valoarea 0 (S(7)/7=1.14, S(8)/8=1.87).

*/

#include <iostream>

using namespace std;

bool abundent(int n)
{
    int Sn = 0, S = 0, m;
    if(n % 2 == 0) m = n - 2;
    else m = n - 1;
    for(int i = 1; i <= n; ++i)
    {

        if(n % i == 0)
        {
            Sn += i;
        }

        if(m % i == 0)
        {
            S += i;
        }

    }

    double sn = Sn/n;
    double s = S / m;
    if(sn > s) return true;
    return false;

}
int main()
{
    cout << abundent(7);
    return 0;
}
