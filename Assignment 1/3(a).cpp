//QUESTION
/*Fibonacci series is a series where every next element is sum of previous two. First two
elements are 0 and 1. For example series is: 0, 1, 1, 2, 3, 5, 8, 13, 21, …
a) Write a program to print nth term of the Fibonacci series, while ‘n’ is input by user*/

#include<iostream>
using namespace std;
int main()
{
	int n, term1 = 0, term2 = 1, nextTerm = 0, i;
	cout << "Enter the n value: ";
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		term1 = term2;
		term2 = nextTerm;
		nextTerm = term1 + term2;
	}
	cout << n << "th term of fibonacci series is:" << term2;
	return 0;
}
