#include <stdio.h>
#include <fstream>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;




int main()
{
    ifstream fin("‪D:\\olddat.txt");
    if (!fin) cout << "Net takogo faila";
    fin.seekg(0, ios::end);
    long len = fin.tellg();
    
    fin.seekg(0, ios::beg);
    char str[len];
    fin.getline(str, len);
    long i = 0, n = 0, b = 0;
    while (str[i])
    {
        if (str[i] == '.' || str[i] == '?' || str[i] == '!')
        {
            for (int i; i >= b - 1; i--) {
                // b= i+1;
                cout << str[i];
            }n++;b = i + 1;
            if (n == 3) break;
        } 
        i++;
    }


}



