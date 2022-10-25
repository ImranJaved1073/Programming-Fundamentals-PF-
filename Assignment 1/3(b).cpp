//QUESTION
/*Fibonacci series is a series where every next element is sum of previous two. First two
elements are 0 and 1. For example series is: 0, 1, 1, 2, 3, 5, 8, 13, 21, …
b) Write a program to print Sum of Fibonacci series until ‘n’ terms.*/

#include<iostream>
using namespace std;
int main()
{
	int n, term1 = 0, term2 = 1, nextTerm = 0, i, sum = 0;
	cout << "Enter the n value: ";
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		term1 = term2;
		term2 = nextTerm;
		nextTerm = term1 + term2;
		sum = sum + term2;

	}
	cout << "\nSum of Fibonnaci series is:" << sum;
	return 0;
}

