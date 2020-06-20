#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int>s;
	int count;
	int num;
	int sum = 0;
	int popnum;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		num = 0;
		cin >> num;
		if (num == 0)
		{
			sum -= s.top();
			s.pop();
		}
		else
		{
			s.push(num);
			sum += num;
			popnum = num;	
		}
		 
	}
	cout << sum << endl;
	 
	return 0;
}