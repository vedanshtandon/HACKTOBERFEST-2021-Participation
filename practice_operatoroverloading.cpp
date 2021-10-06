#include <bits/stdc++.h>
using namespace std;
class point
{
private:
    int x, y;

public:
    point(int x1 = 0, int y1 = 0)
    {
        x = x1;
        y = y1;
    }

    // operator keyword is used for operator overloading
    // Note all operators cannot be overloaded in c++
    // operators that can not be overloaded in c++ are :: sizeof ?: .
  
    // operator overloading are used to perform operations for userdefined data types 

    point operator+(point const &obj)
    {
        point result;
        result.x = x + obj.x;
        result.y = y + obj.y;
        return result;
    }
    point operator ++()
    {
        point result;
        result.x=x+1;
        result.y=y+1;
        return result;
    }
    void print()
    {
        cout << x << endl;
        cout << y << endl;
    }
};

int main()
{
    point p1(10, 20);
    point p2(30, 40);
    point p4(30,50);
    point p3 = p1 + p2 + p4;
    p2=++p2;
    p2.print();
    p3.print();
    return 0;
}
