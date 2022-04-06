// C++ code for calculating the minimum number of squares can place in given rectangular bar
// number of squares
#include<iostream>
#include<string>
#include<unistd.h>
#include<algorithm>
using namespace std;

// Function to find number of squares
int NumOfSquares(int x, int y)
{
	// Here in built c++ gcd function is used
	int s = __gcd(x, y);

	int ans = (x * y) / (s * s);

	return ans;
}

// Driver code
int main()
{
	int m ,n;
	cout<<"enter the value of lenght \n";
	
	cin>>m;
	cout<<"enter the value of breadth \n";
	cin>>n;
	cout<<"the minimun square that can be fill given area is \n";

	// Call the function NumberOfSquares
	cout << NumOfSquares(m, n)<<endl;//gives the desired number of squares to be fill

	return 0;
}
