#include <iostream>
using namespace std;

// �Ǽ� �Է¹޾� ��° �ڸ����� ����ϱ�

int main()
{
	float a;
	cin >> a;

	cout << fixed;
	cout.precision(2);
	cout << a; 
	
	// cout.precision�� ���� �Ҽ��� ������ �� �� ����.
	// �̰� ������ �� �ٽ� �����ؼ� �Ǽ� ��ü��
	// ��� ������ �����ϰ� ������
	// cout.unsef(ios::fixed); ��� ������ �߰��ϸ� ��.

	return 0;
}