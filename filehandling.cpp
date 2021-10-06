#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string line;
    ofstream fout;
    fout.open("sample.txt",ios::out);
    while(fout)
    {
        getline(cin,line);
        if(line=="-1")
        break;

        fout<<line<<endl;
    }
    fout.close();

    ifstream fin;
    fin.open("sample.txt",ios::in);
    while(fin)
    {
        getline(fin,line);
        if(line=="-1")
        break;

        cout<<line<<endl;
    }
    fin.close();
    return 0;
}