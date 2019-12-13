#include <iostream>
#include<fstream>
using namespace std;

long NOD(long a, long b) {

 while (a != b) {
  if (a > b) {
   long tmp = a;
   a = b;
   b = tmp;
  }
  b = b - a;
 }
 return a;
}

int main()
{
 long x1, y1, x2, y2, len1, len2;
 ifstream f("file.txt");
 f >> x1 >> y1 >> x2 >> y2;
 len1 = abs(x1 - x2);
 len2 = abs(y1 - y2);
 ofstream file("file.txt");
 if (len1 == len2)
  file << "The number of dots is " << len1 + 1;
 else
  file << "The number of dots is " << NOD(len1, len2) + 1;
}
