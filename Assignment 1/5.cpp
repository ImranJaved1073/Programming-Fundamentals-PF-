



#include <iostream>
using namespace std;
int main()
{
	int col,num=1;
	cout<<"Enter number of columns =";
	cin>>col;
	for(int i=1;i<=col;i=i+2)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<num<<" ";
			num++;
		}
		cout<<endl;
	}
}
