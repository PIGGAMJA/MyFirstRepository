#include <iostream>
using namespace std;

// 정수 2개 입력받아 그대로 출력하기

int main() 
{
	int a, b;
	cin >> a >> b; 

	// c++ 에서는 scanf 대신 cin
	// stream이라는 새로운 개념이 있음.

	cout << a << " " << b;
	
	return 0;
}