/*

Pentru a identifica punctele în care se concentrează apa în albia unui râu în cazul secetei, se determină
talvegul acesteia – linia care unește punctele cele mai adânci ale albiei. În acest scop s-au stabilit ns
secțiuni transversale pe cursul apei, numerotate începând de la 1, și în cadrul fiecărei secțiuni s-a măsurat
adâncimea apei în np puncte, numerotate începând de la 1. Din fiecare secțiune, în ordine, se include în
talveg cel mai adânc punct al acesteia, iar dacă în secțiune sunt mai multe puncte aflate la aceeași
adâncime, maximă, se va lua în considerare doar primul dintre ele, ca în exemplu.
Scrieți un program C/C++ care citește de la tastatură două numere naturale, ns și np (ns∈[1,103],
np∈[1,50]), și cele ns∙np elemente ale unui tablou bidimensional, valori naturale din intervalul [0,102].
Fiecare linie a tabloului corespunde câte unei secțiuni, în ordinea numerotării acestora, iar
valorile memorate pe linie reprezintă adâncimile celor np puncte stabilite pentru acea
secțiune, în ordinea numerotării lor. Programul afișează pe ecran, pentru fiecare secțiune, o
pereche formată din numărul de ordine al secțiunii și numărul de ordine al punctului său care
s-a inclus în talveg. Numerele din fiecare pereche sunt afișate separate prin câte un
caracter : (două puncte), iar fiecare pereche este urmată de un spațiu.
Exemplu: pentru ns=6, np=4 și tabloul alăturat, se afișează pe ecran valorile:
1:3 2:2 3:2 4:2 5:4 6:3

2 4 5 3
2 6 6 3
1 5 2 5
1 3 3 3
3 4 3 5
0 1 2 1

*/

#include <iostream>

using namespace std;

int main()
{
    int ns, np;
    cin >> ns;
    cin >> np;
    int a[ns + 1][np + 1];

    for(int i = 1; i <= ns; ++i)
    {
        for(int j = 1; j <= np; ++j)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= ns; ++i)
    {
        int max_index = 1;
        for(int j = 1; j <= np; ++j)
        {
            if(a[i][j] > a[i][max_index])
            {
                max_index = j;
            }
        }
        cout << i << ":" << max_index << " ";
    }
    return 0;
}
