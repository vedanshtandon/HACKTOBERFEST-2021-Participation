#include <bits/stdc++.h>
using namespace std;
class fractions
{
    public:
      int numerator;
      int denominator;
       
       fractions(int num,int dem)
       {
           numerator=num;
           denominator=dem;
       }

       void print()
       {
           cout<<numerator<<"/"<<denominator<<endl;
       }
     void simplify()
     {
         int gcd=1;
         int j= min(numerator,denominator);
         for(int i=1;i<=j;i++)
         {
             if(numerator%i==0 && denominator%i==0)
             {
                 gcd=i;
             }
         }
         numerator=numerator/gcd;
         denominator=denominator/gcd;
     }

     fractions add(fractions const &f2)
     {
         int lcm=denominator* f2.denominator;
         int x=lcm/denominator;
         int y=lcm/f2.denominator;
         int num= x*numerator + y*(f2.numerator);
         fractions fnew(num,lcm);
         fnew.simplify();
         return fnew;
     }




     // IMPLEMENTATION OF OPERATOR OVERLOADING 

    fractions operator+(fractions const &f2)
     {
         int lcm=denominator* f2.denominator;
         int x=lcm/denominator;
         int y=lcm/f2.denominator;
         int num= x*numerator + y*(f2.numerator);
         fractions fnew(num,lcm);
         fnew.simplify();
         return fnew;
     }


     void multiply(fractions const &f2)
     {
         numerator=numerator*f2.numerator;
         denominator=denominator*f2.denominator;
         simplify();
     }

     fractions operator*(fractions const &f2)
     {
         int num=numerator*f2.numerator;
         int dem=denominator*f2.denominator;
         fractions mul(num,dem);

         mul.simplify();
         return mul;
     }
};
int main()
{
    fractions f1(2,12);
    fractions f2(3,6);
    fractions f3=f1.add(f2);
    fractions f4=f1*f2;
    f3.print();
    f4.print();
}


