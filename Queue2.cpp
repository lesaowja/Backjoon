#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main()
{
	cin.tie(0);
	cin.sync_with_stdio(0);
	string check;
	queue<int> q;
	int a;

	cin >> a;

	int Num;
	for (int i = 0; i < a; i++)
	{
		cin >> check;
		if (check == "push")
		{
			cin >> Num;
			q.push(Num);
		}
		else if (check == "pop")
		{
			if (!q.empty())
			{
				cout << q.front() << "\n";
				q.pop();
			}
			else
			cout<< -1 << "\n";
		}
		else if (check == "front")
		{
			if (q.empty())
			{
				cout << -1 << "\n";
			}
			else cout << q.front() << "\n";
		}
		else if (check == "back")
		{
			if (q.empty())
				cout << -1 << "\n";
			else 
				cout << q.back() << "\n";
		}
		
		else if (check == "size")
		{
			cout << q.size() << "\n"; 
		}
		else if (check == "empty")
		{
			if (q.empty())
			{
				cout << 1 << "\n";
			}
			else
				cout << 0 << "\n";
		}
	}  
}