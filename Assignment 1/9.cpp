#include<iostream> 
using namespace std;
int main()
{
    unsigned int num;
    cout << "Enter a number:";
    cin >> num;

    for (int count = 1; count <= num / 2; count++)
    {
        int v1 = 0, v2 = 0;
        if (count + (num - count) == num)
        {
            for (int j = 2; j <= count / 2; j++)
            {
                if (count % j == 0)
                    v1++;
            }
            for (int j = 2; j <= (num - 1) / 2; j++)
            {
                if ((num - count) % j == 0)
                    v2++;
            }
        }
        if (v1 == 0 && v2 == 0)
            cout << count << "+" << num - count << "=" << num << endl;
    }
    return 0;
}
