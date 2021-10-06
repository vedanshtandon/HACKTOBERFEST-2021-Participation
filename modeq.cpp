// #include <bits/stdc++.h>
// using namespace std;
// #define lli long long int
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif

//    lli t,z;
//    cin>>t;
//    for(z=1;z<=t;z++)
//    {
//       long long int n,m,sum,x,y,a=0;
//       sum=0;
//        m=z;

//        cout<<"for m=  "<<z<<endl;
//           for(x=1;x<(m/2)+1;x++)
//           {
//               for(y=x+1;y<=m;y++)
//               {
                  
//                   if(m%x == ((m%y)%x))
//                   {
//                       cout<<"( "<<x<<" , "<<y<<" )";
//                       cout<<"           yes";

//                       if(y%x==0)
//                       {
//                           cout<<"                  is a factor";
//                       }
//                       else{
//                           cout<<"      ___________________________";
//                           a=a+1;
//                       }
//                       sum=sum+1;
//                       cout<<endl;
//                   }
//                 //   else{
//                 //       cout<<"           No";
//                 //   cout<<endl;
//                 //   }
                  
//               }
//           }
//           cout<<"sum for m=  "<<z<<"   is eqaul to "<<sum<<endl;
//           cout<<a<<endl;
//    }
//     return 0;
// }



// // #include <bits/stdc++.h>
// // using namespace std;
// // #define lli long long int
// // int main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);

// //     // #ifndef ONLINE_JUDGE
// //     // freopen("input.txt","r",stdin);
// //     // freopen("output.txt","w",stdout);
// //     // #endif

// //    lli t,z;
// //    cin>>t;
// //    for(z=1;z<=t;z++)
// //    {
// //       long long int n,m,sum,x,y,;
// //       cin>>n;
// //       cin>>m;
// //       sum=0;

// //       if(n>=m)
// //       {

// //           sum= ((n*(n-1)) -(m*(m-1)))/2;
// //           for(x=1;x<=(m-1)/2  +1;x++)
// //           {
// //               for(y=x+1;y<=m;y++)
// //               {
// //                   if(m%x == ((m%y)%x))
// //                   {
// //                       sum=sum+1;
// //                   }
// //               }
// //           }
// //       }
// //       else
// //       {
// //           for(x=1;x<n;x++)
// //           {
// //               for(y=x+1;y<=n;y++)
// //               {
// //                   if(m%x == ((m%y)%x))
// //                   {
// //                       sum=sum+1;
// //                   }
// //               }
// //           }
// //       }
// //      cout<<sum<<endl;
// //    }
// //     return 0;
// // }





#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

   lli t,z;
   cin>>t;
   for(z=1;z<=t;z++)
   {
       long long int n,m,x,b,k,a,sum=0;

       cin>>n;
       cin>>m;
       sum=0;
      

      if(n<=m)
      {
          long long int array[n+1]={0};
        for(a=2;a<=n;a++)
        {
          k=m%a;
          array[k]=array[k]+1;
          sum=sum+array[k];
          for(b=k+a;b<=n;b=b+a)
          {
              array[b]=array[b]+1;
          }
        }
      }
      else
      {
          long long int array[m+1]={0};
          sum= ((n*(n-1)-(m*(m-1))))/2;
          for(a=2;a<=m;a++)
      {
          k=m%a;
          array[k]=array[k]+1;
          sum=sum+array[k];
          for(b=k+a;b<=m;b=b+a)
          {
              array[b]=array[b]+1;
          }
      }
      }
      cout<<sum<<endl;
   }
    return 0;
}