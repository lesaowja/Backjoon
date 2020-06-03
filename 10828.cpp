#include<iostream>
#include<string>

using namespace std;

class Stack
{
public:
	Stack()
	{
		Clear();
	}
	void Clear()
	{
		size = 0;
	}
	int Size()
	{
		cout << size << endl;
		return 0;
	}

	int empty()
	{
		if (size == 0)
		{
			cout << 1 << endl;
		}
		else
		{
			cout << 0 << endl;
		}
		return 0;
	}
	int top()
	{
		if (size == 0)
		{
			cout << "-1" << endl;
		}
		else
			cout << Answer[size] << endl;
		return 0;
	}
	int pop()
	{
		if (size > 0)
		{
			cout << Answer[size] << endl;
			size--;
		}
		else
		{
			cout << "-1" << endl;
		}
		return Answer[size];
	}
	bool push(int Num)
	{
		size++;
		Answer[size] = Num;

		return true;
	}


private:
	int size = 0;
	int Answer[50];


};

int main()
{
	Stack Use;

	int a;
	string check;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> check;
		if (check == "push")
		{
			int Num;
			cin >> Num;
			Use.push(Num);
		}
		else if (check == "pop")
		{
			Use.pop();
		}
		else if (check == "size")
		{
			Use.Size();
		}
		else if (check == "empty")
		{
			Use.empty();
		}
		else if (check == "top")
		{
			Use.top();
		}

	}

	return 0;
}

