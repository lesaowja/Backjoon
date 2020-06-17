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
	// man1, man2에 name과 age값 넣기
	// students에서 man1과 man2를 넣기
	for (int i = 0; i <2 ; i++)
	{
		
	}
	// students를 이용하여 man1과 man2의 name, age값 출력 (for문 사용)
	return 0;
}