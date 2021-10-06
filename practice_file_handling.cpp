#include <bits/stdc++.h>
#include <iostream>
#include <istream>
#include <ostream>
#include <fstream>
using namespace std;

// ifstream is used for reading input from the file
// ofstream is used for writing output on the file
// fstream is used both reading and writing from/on the file

// input -in is used to take input from a file
// output -out is used to write something on a file
// update -ate is used to make changes in a file
// append -app is used to write something in appended mode
// binary -bin is used to open file in  binary mode

// writing something on a file
void write_on_file()
{
    // before writing on a file we must open file 
    // we create an object of ifstream 
    ofstream fout;
    fout.open("file.txt",ios::out);
    //syntax for opening a file
    fout<<"Vedansh Tandon"<<endl;
    fout<<"9919442258"<<endl;
    fout<<"31012001"<<endl;
    fout<<"Kavya Tandon"<<endl;
    fout<<"9532188084"<<endl;
    fout<<"31012000"<<endl;
    fout<<"neeharika"<<endl;
    fout<<"7355604117"<<endl;
    fout<<"31012002"<<endl;
    
    fout.close();
}

// Reading data from a file
void read_from_file()
{
    // before reading a particular file 
    // we must open it
    ifstream fin;
    fin.open("file.txt",ios::in);
    string line;
     
    while(!fin.eof())
    {
        getline(fin,line);
        cout<<line<<endl;
    }

    fin.close();
}

// Deleting a particular record from a file
void delete_a_record()
{
     ifstream fin;
     ofstream fout;
     fin.open("file.txt",ios::in);
     fout.open("file2.txt",ios::out);
     
     string nm;
     string pn;
     string dob;
     while(!fin.eof())
     {
         getline(fin,nm);
         getline(fin,pn);
         getline(fin,dob);

         if(pn=="9532188084")
         {
           fout<<nm<<endl;
           fout<<"8299322877"<<endl;
           fout<<dob<<endl;
         }
         else
         {
             fout<<nm<<endl;
             fout<<pn<<endl;
             fout<<dob<<endl;
         }
     }

     fin.close();
     fout.close();

     remove("file.txt");
     rename("file2.txt","file.txt");
}
int main()
{
    write_on_file();
    delete_a_record();
    read_from_file();
    return 0;
}

// operations in file handling
// Reading
// Writing
// Updating
// Deleting