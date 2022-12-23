#include <iostream>
using namespace std;
inline int square(int x)
{
	return x*x;
}
int main()
{   int a=6;
	cout << "Our square is: " << square(a) << "\n";
	return 0;
} 