#include <iostream>
#include <string>

using namespace std;
 
struct STUDENT {
	string name;
	int age;
};

 
int main() {
	//STUDENTS students;
	STUDENT man1;
	STUDENT man2;
	man1.age = 13;
	man1.name = "asd";

	cout << man1.age << endl;
	// man1, man2�� name�� age�� �ֱ�
	// students���� man1�� man2�� �ֱ�
	for (int i = 0; i <2 ; i++)
	{
		
	}
	// students�� �̿��Ͽ� man1�� man2�� name, age�� ��� (for�� ���)
	return 0;
}