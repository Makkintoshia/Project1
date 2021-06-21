#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;



int main()
{
    //создание входного потока и открытие файла
    ifstream fin("D:\\olddat.txt", ios::in);
    if (!fin)
    {
        cout << "Can't open input file" << endl;
        return 1;
    }
    fin.seekg(0, ios::end); //указатель в конец файла
    long len = fin.tellg(); //запомнить длину файла 
    char* buf = new char[len + 1]; //выделить память под буфер
    //неформатированное чтение текстового файла 
    fin.seekg(0, ios::beg); //указатель в начало файла
    fin.read(buf, len); //скопировать len символов из fin в буфер
    buf[len] = '\0'; //поместить в буфер нуль-литеру
    //создание выходного потока и открытие файла
    ofstream fout("D:\\textout.txt", ios::out);
    if (!fout) {
        cout << "Can't open output file" << endl;
        return 1;
    }
    long n = 0, //индекс символа начала предложения
        i = 0, //индекс символа конца предложения
        j = 0; //текущий индекс символа вопросит. предл.
    while (buf[i]) { //просмотр символов в буфере
        if (buf[i] == '?') { //Если i-ый символ – вопрос,
            for (j = n;j <= i;j++)
                fout << buf[j]; //то вывод предложения в поток,
            n = i + 1; //обновление индекса начала предложения.
        }
        if (buf[i] == '.' || buf[i] == '!') //Если предложение не вопросительное, 
            n = i + 1; //то только обновление индекса n .
        i++;
    }
    fin.close();
    fout.close();
    cout << endl;
    return 0;
}

