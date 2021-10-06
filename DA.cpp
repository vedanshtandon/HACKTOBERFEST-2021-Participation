#include <bits/stdc++.h>
using namespace std;
class DynamicArray
{
public:
    int *data;
    int nextindex = 0;
    int capacity = 5;

    DynamicArray()
    {
        data = new int[5];
        nextindex = 0;
        capacity = 5;
    }

    void add(int element)
    {
        if (nextindex == capacity)
        {
            int *newdata = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }
            capacity = capacity * 2;
            delete[] data;
            data = newdata;
        }
        data[nextindex] = element;
        nextindex++;
    }

    void print()
    {
        for (int i = 0; i < nextindex; i++)
        {
            cout << data[i] << endl;
        }
    }
};
int main()
{
    DynamicArray d1;
    d1.add(90);
    d1.add(80);
    d1.add(70);
    d1.add(60);
    d1.add(50);
    d1.add(40);
    d1.add(30);
    d1.add(20);
    d1.add(10);

    d1.print();
    return 0;
}