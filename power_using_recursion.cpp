#include<iostream>
using namespace std;

double Power(double n,int p=2)
{
    double ans=1;
    if(p==0)
       return ans;
    else
 {
    for(int i=1;i<=p;i++)
    {ans=ans*n;}
    return ans;
 }
}


double Recurse(double n,int p=2)
{

    if(p==0)
      {return 1;}

    if(p==1)
    {return n;}

    else
    {return (n*Recurse(n,p-1));}

}
