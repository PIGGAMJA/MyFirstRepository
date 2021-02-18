#include <iostream>
using namespace std;

// 실수 입력받아 둘째 자리까지 출력하기

int main()
{
	float a;
	cin >> a;

	cout << fixed;
	cout.precision(2);
	cout << a; 
	
	// cout.precision을 통해 소수점 제한을 둘 수 있음.
	// 이걸 설정한 후 다시 해제해서 실수 전체의
	// 출력 범위를 설정하고 싶으면
	// cout.unsef(ios::fixed); 라는 라인을 추가하면 됨.

	return 0;
}