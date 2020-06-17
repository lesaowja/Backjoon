#include<iostream>
#include<string>

using namespace std;

class queue
{
public:

	void Clear()
	{
		tail = 0;
		head = 0;
	}
	int Size()
	{
		cout << tail - head << endl;
		return 0;
	}
	int front()
	{
		if (tail == head)
		{
			cout << "-1" << endl;
		}
		else
		{
			cout << Answer[head] << endl;
		}

		return 0;
	}
	int back()
	{
		if (tail == head)
		{
			cout << "-1" << endl;
		}
		else
		{
			cout << Answer[tail - 1] << endl;
		}

		return 0;
	}
	int empty()
	{
		if (tail != head)
		{
			cout << 0 << endl;
		}
		else
		{
			cout << 1 << endl;
		}
		return 0;
	}

	int pop()
	{
		if (tail != head)
		{
			cout << Answer[head] << endl;
			head++;
		}
		else
		{
			cout << "-1" << endl;
		}
		return Answer[tail];
	}
	bool push(int Num)
	{
		Answer[tail] = Num;

		tail++;
		return true;
	}


private:
	int head = 0;
	int tail = 0;
	int Answer[10000];


};

int main()
{
	class queue Use;

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
		else if (check == "front")
		{
			Use.front();
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
		else if (check == "back")
		{
			Use.back();
		}

	}

	return 0;
}