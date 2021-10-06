#include <bits/stdc++.h>
using namespace std;

// demonstrating the template functionality through class templare
// class templates

template <typename T>
class Array
{
    public :
       int size;
       T *ptr;
    public :
       Array(T arr[],int s);
       void print();
};
template <typename T>
Array<T>::Array(T arr[], int s) {
    ptr = new T[s];
    size = s;
    for(int i = 0; i < size; i++)
        ptr[i] = arr[i];
}
 
template <typename T>
void Array<T>::print() {
    for (int i = 0; i < size; i++)
        cout<<" "<<*(ptr + i);
    cout<<endl;
}


// demonstrating the application of templates
// function tempates


template <typename T>
T sum(T x, T y)
{
    return x + y;
}
template <typename T>
T multiply(T x,T y)
{
    return x*y;
}
int main()
{
    system("cls");
    cout << sum<int>(4, 5) << endl;
    cout << sum<float>(5.5, 6.9) << endl;
    cout << sum<double>(5.22, 6.8745) << endl;

    cout << multiply<int>(4, 5) << endl;
    cout << multiply<float>(5.5, 6.9) << endl;
    cout << multiply<double>(5.22, 6.8745) << endl;

    return 0;
}