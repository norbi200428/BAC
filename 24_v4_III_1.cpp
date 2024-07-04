/*

La un laborator sunt studiate aglomerările de fulgi de nea formate din câte nouă cristale de patru tipuri diferite
date (notate cu 1, 2, 3 sau 4), astfel încât din fiecare tip să existe cel puțin câte un cristal. O astfel de
aglomerare de fulgi a fost reprezentată printr-un număr natural, în care fiecare cifră reprezintă tipul unui cristal.
Subprogramul fulg are un parametru, n, prin care primește un număr natural (n∈[0,109)).
Subprogramul returnează valoarea 1, dacă prin n este reprezentată o aglomerare de fulgi de nea dintre
cele studiate, sau 0 în caz contrar. Scrieți în C/C++ definiția completă a subprogramului.
Exemplu: dacă n=112243413 subprogramul returnează 1, iar dacă n=12314 sau n=112253513 sau
n=112243457 sau n=111122223, subprogramul returnează 0.

*/

#include <iostream>
#include <cstring>

using namespace std;

bool fulg(unsigned int n)
{
    unsigned int length = 0;

    while(n > 0)
    {
        unsigned int nr = 0;
        nr = n % 10;
        if(nr != 1 && nr != 2 && nr != 3 && nr != 4) return false;
        n /= 10;
        length ++;
    }

    if(length != 9) return false;

    return true;
}
int main()
{
    unsigned int n = 112243413;
    cout << fulg(n);
    return 0;
}
