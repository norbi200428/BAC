/*

Într-un text, de cel mult 100 de caractere, cuvintele sunt formate din litere ale alfabetului englez și sunt
separate prin câte un spațiu. Textul are cel puțin două cuvinte.
Scrieți un program C/C++ care citește de la tastatură un text de tipul precizat mai sus și afișează pe ecran
mesajul DA și un număr natural n, separate printr-un spațiu, dacă toate cuvintele din text au câte n litere,
sau mesajul NU în cazul în care nu toate cuvintele au același număr de litere.
Exemplu: dacă textul citit este Ana are cel mai bun mar se afișează pe ecran DA 3
iar dacă textul citit este Ana are cel mai dulce mar se afișează pe ecran NU

*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string text;
    getline(cin,text);

    int length = 0, max_length = 0;
    bool same_length = false;

    for(int i = 0; i < text.size(); ++i){
        if(text[i] != ' ') {
            length ++;
        } else {
          if(max_length == 0) {
            same_length = true;
            max_length = length;
            length = 0;
          } else {
            if(length == max_length) {
                length = 0;
            } else {
                same_length = false;
                break;
            }
          }
        }
    }

    if(same_length && length == max_length) {
        cout << "DA " << max_length << endl;
    } else {
        cout << "NU" << endl;
    }

    return 0;
}
