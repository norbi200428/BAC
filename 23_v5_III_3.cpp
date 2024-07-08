#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input_file("bac.txt");

    int prefix[100] = {0}, sufix[100] = {0};
    int nr;

    while(input_file >> nr)
    {
        if(nr >= 100)
        {
            sufix[nr % 100] ++ ;
            while(nr >= 100)nr/=10;
            prefix[nr]++;
        }
    }

    int counter = 0;
    for(int i = 10; i < 100; ++i)
    {
        if(prefix[i] == sufix[i] && prefix[i] != 0) counter ++;
    }

    cout << counter << endl;

    input_file.close();
    return 0;
}
