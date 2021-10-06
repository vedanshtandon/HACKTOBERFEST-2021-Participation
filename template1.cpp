#include <bits/stdc++.h>
using namespace std;
// example of function template
// example of function template
template <typename T>
T findmax(T x,T y)
{
    return (x>y)?x:y;
}
template <typename P>
P findmin(P x,P y)
{
    return (x<y)?x:y;
}
template <typename Q>
Q sum(Q x,Q y)
{
    return x+y;
}
template <typename m>
m sum(m x,m y,m z)
{
    return x+y+z;
}
template <typename R>
R minus(R x,R y)
{
    return x-y;
}
template <typename s>
s multiply(s x,s y)
{
    return x*y;
}
int main()
{
    cout<<"MAXIMUM  "<<findmax<int> (5,6)<<endl;
    cout<<"MAXIMUM  "<<findmax<float> (5.12,6.15)<<endl;
    cout<<"MAXIMUM  "<<findmax<char> ('a','z')<<endl;

    cout<<"MINIMUM  "<<findmin<int> (5,6)<<endl;
    cout<<"MINIMUM  "<<findmin<float> (5.12,6.15)<<endl;
    cout<<"MINIMUM  "<<findmin<char> ('a','z')<<endl;

    cout<<"SUM "<<sum<int>(50,60,78)<<endl;
    cout<<"SUM "<<sum<float>(50.25,60.41)<<endl;
    cout<<"SUM "<<sum<double>(120.56,68.25)<<endl;
    return 0;
}