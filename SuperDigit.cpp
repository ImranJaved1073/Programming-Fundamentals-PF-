//We define super digit of an integer x using the following rules :
//
//If  has only 1 digit, then its super digit is x.
//
//Otherwise, the super digit of  is equal to the super digit of the digit - sum of x.Here, digit - sum of a number 
//is defined as the sum of its digits.
//
//For example, super digit of  will be calculated as :
//
//super_digit(9875) = super_digit(9 + 8 + 7 + 5)
//= super_digit(29)
//= super_digit(2 + 9)
//= super_digit(11)
//= super_digit(1 + 1)
//= super_digit(2)
//= 2.
//You are given two numbers n and k.You have to calculate the super digit of P.
//
//P is created when number n is concatenated k times.That is, if n = 123 and k = 3, then P= 123123123.
//
//Input Format
//
//The first line contains two space separated integers,n and k.
//
//Output Format
//
//Output the super digit of P, where P is created as described above.
//
//Sample Input 0
//
//148 3
//Sample Output 0
//
//3
//Explanation 0
//
//Here n = 123 and k = 3, so P = 123123123.
//
//super_digit(P) = super_digit(148148148)
//= super_digit(1 + 4 + 8 + 1 + 4 + 8 + 1 + 4 + 8)
//= super_digit(39)
//= super_digit(3 + 9)
//= super_digit(12)
//= super_digit(1 + 2)
//= super_digit(3)
//= 3.

#include <iostream>
#include <string>

using namespace std;

int superDigit(string n, int k) 
{
	int sum = 0;
	for (int i = 0; i < n.length(); i++) 
	{
		sum += (n[i] - 48);
	}
	sum *= k;
	if (sum < 10) 
	{
		return sum;
	}
	return superDigit(to_string(sum), 1);
}

int main()
{
	string n;
	int k;
	cin >> n >> k;
	cout << superDigit(n, k);
	return 0;
}

//#include <iostream>
//using namespace std;
//
//int superDigit(long long int n, int k)
//{
//	long long int sum = 0;
//	while (n > 0)
//	{
//		sum += n % 10;
//		n /= 10;
//	}
//	sum *= k;
//	if (sum < 10) {
//		return sum;
//	}
//	else {
//		return superDigit(sum, 1);
//	}
//}
//
//int main()
//{
//	long long int n;
//	int k;
//	cin >> n >> k;
//	cout << superDigit(n, k);
//	return 0;
//}
//
