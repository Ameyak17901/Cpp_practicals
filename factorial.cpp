// factorial of 10

#include<iostream>
using namespace std;

int main()
{
    long int fact = 1;
	int  i=1;
	while(i <= 10)
	{
		fact = fact * i;
		i++;
	}
	cout << "Factorial of 10: " << fact << endl;
}
