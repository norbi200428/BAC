/*

Fişierul numere.in conţine un şir de cel mult 106 numere naturale din intervalul [0,99]. Numerele din
fişier sunt separate prin câte un spaţiu.
Se cere să se determine primul şi ultimul număr din şir care conţin cea mai mare cifră ce apare în scrierea
numerelor din fișier. Numerele determinate se afişează pe ecran, în ordinea apariţiei lor în şir, separate printr-un
spaţiu. Dacă nu există două astfel de numere pe poziții distincte, se afişează pe ecran mesajul nu exista.
Proiectați un algoritm eficient din punctul de vedere al timpului de executare și al spațiului de memorie utilizat.
Exemplu: dacă fişierul conţine numerele 34 5 38 30 87 70 11 8 82 25 se afişează pe ecran 38 82,
dacă fişierul conţine numerele 34 5 38 30 87 70 11 8 38 25 se afişează pe ecran 38 38,
iar dacă fişierul conţine numerele 34 5 38 30 se afişează pe ecran nu exista.

*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input_file("numere.in");

    unsigned int num = 0, max_nr = 0, first = 0, last = 0;
    while(input_file >> num)
    {
        if(num % 10 == max_nr || num / 10 == max_nr)
        {
            last = num;
        }
        if(num < 10 && num > max_nr)
        {
            max_nr = num;
            first = num;
        }
        if(num % 10 > max_nr)
        {
            max_nr = num % 10;
            first = num;
            last = 0;
        }
        if(num / 10 > max_nr)
        {
            max_nr = num / 10;
            first = num;
            last = 0;
        }
    }

    if(last != 0)
    {
        cout << first << " " << last << endl;
    }
    else
    {
        cout << "nu exista" << endl;
    }

    input_file.close();
    return 0;
}
