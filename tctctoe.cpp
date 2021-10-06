#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

   lli t,z; 
   cin>>t;
   for(z=1;z<=t;z++)
   {
       long long int i,j,cross=0,zer=0,sp=0,k=0,p=0;
       char ch[3][3];
      for(i=0;i<=2;i++)
      {
          for(j=0;j<=2;j++)
          {
              cin>>ch[i][j];
              if(ch[i][j]=='X')
              {
                  cross=cross+1;
              }
              else if(ch[i][j]=='O')
              {
                  zer=zer+1;
              }
              else{
                  sp=sp+1;
              }
          }
      }
      
               if(ch[0][0]=='X' && ch[0][1]=='X' && ch[0][2]=='X')
               {
                   k=k+1;
               }
                 
                 if(ch[0][0]=='O' && ch[0][1]=='O' && ch[0][2]=='O')
               {
                   p=p+1;
               }

               if(ch[1][0]=='X' && ch[1][1]=='X' && ch[1][2]=='X')
               {
                   k=k+1;
               }
                 
                 if(ch[1][0]=='O' && ch[1][1]=='O' && ch[1][2]=='O')
               {
                   p=p+1;
               }

               if(ch[2][0]=='X' && ch[2][1]=='X' && ch[2][2]=='X')
               {
                   k=k+1;
               }
                 
                 if(ch[2][0]=='O' && ch[2][1]=='O' && ch[2][2]=='O')
               {
                   p=p+1;
               }



               if(ch[0][0]=='X' && ch[1][0]=='X' && ch[2][0]=='X')
               {
                   k=k+1;
               }
                 
                 if(ch[0][0]=='O' && ch[1][0]=='O' && ch[2][0]=='O')
               {
                   p=p+1;
               }

              if(ch[0][1]=='X' && ch[1][1]=='X' && ch[2][1]=='X')
               {
                   k=k+1;
               }
                 
                 if(ch[0][1]=='O' && ch[1][1]=='O' && ch[2][1]=='O')
               {
                   p=p+1;
               }

               if(ch[0][2]=='X' && ch[1][2]=='X' && ch[2][2]=='X')
               {
                   k=k+1;
               }
                 
                 if(ch[0][2]=='O' && ch[1][2]=='O' && ch[2][2]=='O')
               {
                   p=p+1;
               }

               if(ch[0][0]=='X' && ch[1][1]=='X' && ch[2][2]=='X')
               {
                   k=k+1;
               }
                if(ch[0][0]=='O' && ch[1][1]=='O' && ch[2][2]=='O')
                {
                    p=p+1;
                }

                if(ch[0][2]=='X' && ch[1][1]=='X' && ch[2][0]=='X')
                {
                    k=k+1;
                }
                if(ch[0][2]=='O' && ch[1][1]=='O' && ch[2][0]=='O')
                {
                    p=p+1;
                }
                
                
                
                if((k==1 && p==1) || (cross-zer)<0 || (cross-zer)>1 )
                {
                    cout<<"3"<<endl;
                }
                else if(k==2 && p==0 && sp==0)
                {
                    cout<<"1"<<endl;
                }
                else if(k==1 && p==0 && cross>zer)
                {
                    cout<<"1"<<endl;
                }
                else if( k==0 && p==1 && cross==zer)
                {
                    cout<<"1"<<endl;
                }
                else if(k==0 && p==0 && sp==0)
                {
                    cout<<"1"<<endl;
                }
                else if(k==0 && p==0 && sp>0)
                {
                    cout<<"2"<<endl;
                }
                else{
                    cout<<"3"<<endl;
                }
           }
    return 0;
}