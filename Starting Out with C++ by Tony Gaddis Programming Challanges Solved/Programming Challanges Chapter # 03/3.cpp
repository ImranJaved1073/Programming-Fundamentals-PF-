#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float test_score1,test_score2,test_score3,test_score4,test_score5;
	float average;
	cout << "Enter score of test 1:";
	cin >> test_score1;
	cout << "Enter score of test 2:";
	cin >> test_score2;
	cout << "Enter score of test 3:";
	cin >> test_score3;
	cout << "Enter score of test 4:";
	cin >> test_score4;
	cout << "Enter score of test 5:";
	cin >> test_score5;
	average = (test_score1+test_score2+test_score3+test_score4+test_score5)/5;
	cout << setprecision(1) << fixed << "Test score average is:"<< average;
}
