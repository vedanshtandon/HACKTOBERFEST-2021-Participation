#include <bits/stdc++.h>
using namespace std;

// inheritance is one of the fundamental principle of object oriented programming
// inheritance can be defined as the capability of the class to obtain properties from other classes

// Base class ,parent class, super class
// they are the classes from which the properties are being extracted 

// private members of base class are not inherited by the derived class


// Derived class, daughter class,sub-class
// they are the classes which abstract the properties from another class

// Inheritance ccan be done in three mode
// 1) public mode :
//         in public mode public,proctected member will become public and 
//          proctected in derived class respectively 
// 2) protected mode :
//         in protected mode public,proctected member will become protected and 
//          proctected in derived class respectively 
// 2) private mode :
//         in private mode public ,proctected member will become private and 
//          private in derived class respectively 


// inheritance increases the resuability of a particular code;

// single inheritance ,multiple inheritance
// multilevel inheritance, hieraechical inheritance


class Student
{
    public:
       string name;
       int roll;
       int marks1;
       int marks2;
       int marks3;
       int marks4;
       int marks5;
    public :
       Student()
       {
           name="";
           roll=0;
           marks1=0;
           marks2=0;
           marks3=0;
           marks4=0;
           marks5=0;
       }
       Student(string nm,int rol,int m1,int m2,int m3,int m4,int m5)
       {
           name=nm;
           roll=rol;
           marks1=m1;
           marks2=m2;
           marks3=m3;
           marks4=m4;
           marks4=m5;
       }
};
class Reportcard : public Student
{
    public:
       int totalmarks;
       float percent;

    public :
    void calculate()
    {
        totalmarks=marks1+marks2+marks3+marks4+marks5;
        percent=(totalmarks*100.0)/500.0;
    }
    void print()
    {
        cout<<"Name       : "<<name<<endl;
        cout<<"Totalmarks : "<<totalmarks<<endl;
        cout<<"Percentage : "<<percent<<endl;
    }
};
class grading:public Reportcard
{
    public :
       char grade;

    void p()
    {
        if(percent>=80 && percent<=100)
        {
            cout<<"A GRADE "<<endl;
        }
        else if(percent>60 && percent<80)
        {
            cout<<"B GRADE "<<endl;
        }
        else
        {
            cout<<"FAIL" <<endl;
        }
    }
};
int main()
{
    grading result ;
    result.name="ved";
    result.roll=20118;
    result.marks2=100;
    result.marks1=99;
    result.marks3=56;
    result.marks4=63;
    result.marks5=88;
    result.calculate();
    result.print();
    result.p();

    return 0;
}