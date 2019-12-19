#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
  float shir1, dolg1, shir2, dolg2;

  cout<<"Enter the latitude of the first point: "<<endl;
  cin>>shir1;
  cout<<"Enter the longitude of the first point: "<<endl;
  cin>>dolg1;
  cout<<"Enter the latitude of the second point: "<<endl;
  cin>>shir2;
  cout<<"Enter the longitude of the second point: "<<endl;
  cin>>dolg2;
  float PI = 3.14159;
  float L = 40000;
  float R = L/(2*PI);
    float Rad = PI/180;
  shir1=shir1*Rad;
  dolg1=dolg1*Rad;
  shir2=shir2*Rad;
  dolg2=dolg2*Rad;
  float rasst;
  rasst=R*acosf(cosf(shir1)*cosf(shir2)*cosf(dolg1-dolg2)+sinf(shir1)*sinf(shir2));
  cout<<"The shortest path on the surface: "<<rasst;
  return 0;
}
