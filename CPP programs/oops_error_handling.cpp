#include  <iostream>
using namespace std;

double  mul(int  a,  int  b)
{
 if( b == 0 ) {
throw  "multiplication  by  zero  condition!";
}
return  (a*b);
}

int main () 
{ int x  =  50;
 int  y  =  0;
double  z  =  0;

try {
z = mul(x, y);
 cout  <<  z  <<  endl;
} 
 catch  (const  char*  msg) 
  { cerr << msg << endl;
}
return  0;
}
