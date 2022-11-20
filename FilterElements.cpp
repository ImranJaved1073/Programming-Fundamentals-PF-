//FILTER ELEMENTS
//Given a list of N integers A = [a1, a2, ..., aN], you have to find those integers which are repeated at least K times.
//In case no such element exists you have to print - 1.
//
//If there are multiple elements in A which are repeated at least K times, then print these elements ordered by 
//their first occurrence in the list.
//
//Let's say A = [4, 5, 2, 5, 4, 3, 1, 3, 4] and K = 2. Then the output is
//
//4 5 3
//
//because these numbers have appeared at least 2 times.
//Among these numbers,
//4 has appeared first at position 1,
//5 has appeared next at position 2,
//and 3 has appeared thereafter at position 6.
//That's why, we print in the order 4, 5 and finally 3.
//
//Input
//First line contains an integer, T, the number of test cases.Then T test cases follow.
//Each test case consist of two lines.First line will contain two space separated integers, Nand K, where N is the 
//size of list A, and K represents the repetition count.In the second line, there are N space separated integers
//which represent the elements of list A = [a1, a2, ..., aN].
//
//Output
//For each test case, you have to print all those integers which have appeared in the list at least K times in the
//order of their first appearance, separated by space.If no such element exists, then print - 1.
//
//Constraints
//1 <= T <= 10
//1 <= N <= 10000
//1 <= K <= N
//1 <= ai <= 109
//
//Sample Input
//
//3
//9 2
//4 5 2 5 4 3 1 3 4
//9 4
//4 5 2 5 4 3 1 3 4
//10 2
//5 4 3 2 1 1 2 3 4 5
//Sample Output
//
//4 5 3
//- 1
//5 4 3 2 1


#include <iostream>
using namespace std;

int main() {
    int t,t2;
    cout << "______________________________________________________" << endl;
    cout << "                     INPUT                            " << endl;
    cout << "______________________________________________________" << endl;
    cout << "Enter test cases:";
    cin >> t;
    t2 = t;
    int** arr = new int* [t];
    int* k = new int[t];
    int* n = new int[t];
    while (t2 != 0) 
    {
        for (int i = t2 - 1; i < t2; i++)
        {
            cout << "Enter size of Array(N):";
            cin >> n[i];
	    if (n[i] < 1)
	    {
            	cout << "Invalid Input size of Array(N) must be greater than 1" << endl;
		cout << "Enter size of Array(N):";
		cin >> n[i];
	    }
            cout << "Enter repetition count(K):";
            cin >> k[i];
            while (k[i] > n[i])
            {
                cout << "Repetition count(K) must be less than or equal to size of Array(N):";
                cin >> k[i];
            }
            arr[i] = new int[n[i]];
        }
        for (int i = t2-1; i < t2; i++)
        {
	    cout << "Enter elements of Array " << t-i << ":  ";
            for (int j = 0; j < n[i]; j++)
                cin >> arr[i][j];
        }
        t2--;
    }
	
    cout << "______________________________________________________" << endl;
    cout << "                     OUTPUT                          " << endl;
    cout << "______________________________________________________" << endl;
    t2 = t;
    int t3 = t;
    while (t3!=0) {
        bool flag = false;
        for (int i = t2-1; i < t2 && t2!=0; i++)
        {
	    cout << "Test Case " << (t-i) << ":";
            for (int a = 0 ; a < n[i]; a++)
            {
                int count = 1;
                for (int j=a+1; j < n[i]; j++)
                {
                    if (arr[i][a] == arr[i][j])
                    {
                        count++;
                        arr[i][j] = -99;
                    }
                }
                if (count >= k[t2-1] && arr[i][a] != -99 && a<n[i])
                {
                    cout << arr[i][a] << " ";
                    flag = true;
                }
            }
            if (flag == false)
                cout << "-1";
            cout << endl;
            t2--;
        }
        t3--;  
    }
	
    for (int i = 0; i < t; i++)
    {
        delete[]arr[i];
        arr[i] = nullptr;
    }
	
    delete[]arr;
    arr = nullptr;
	
    delete[]k;
    k = nullptr;
	
    delete[]n;
    n = nullptr;
	
    return 0;
}
