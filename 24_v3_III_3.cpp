#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream input_file("bac.txt");

    int nr;
    vector<int> v;

    while(input_file >> nr) {
        v.push_back(nr);
    }

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " " ;
    }
    int poz = 0, length = 0, max_length = 0, max_poz = 0;
    for(int i = 1; i < v.size(); ++i){
        if(v[i] == v[i-1] + 1) {
            length ++;
        } else {
            if(length > max_length) {
                max_length = length;
                max_poz = poz;
            }
            poz = i;
            length = 1;
        }
    }
    cout << max_length << " " << max_poz << endl;
    if(max_length != 1) {
        for(int i = 0; i < max_length; ++i){
            cout << v[max_poz + i] << " ";
        }
    } else {
        cout << "nu exista";
    }

    input_file.close();

    return 0;
}
