#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int xa,ya;
  int xb,yb;
  int xc,yc;
  int xd,yd;
  int ab,bc,ca;
  cout<<"the first vertex of the triangle: "<<endl;
  cin>>xa>>ya;
  cout<<"the third vertex of the triangle: "<<endl;
  cin>>xb>>yb;
  cout<<"the third vertex of the triangle: "<<endl;
  cin>>xc>>yb;
  cout<<"the fourth point: "<<endl;
  cin>>xd>>yd;
  ab=(xa-xb)*(yd-yb)-(xd-xb)*(ya-yb);
  bc=(xb-xc)*(yd-yc)-(xd-xc)*(yb-yc);
  ca=(xc-xa)*(yd-ya)-(xd-xa)*(yc-ya);
  
      cout<<"result: ";
  if(ab>0&&bc>0&&ca>0)
  {
    cout<<"0"<<" ";
  }
  if(ab<0||bc<0||ca<0)
  {
    cout<<"1"<<" ";
  }
  if(ab==0||bc==0||ca==0)
  {
    cout<<"2"<<" ";
  }
  return 0;
}
