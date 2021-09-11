#include <iostream> 
using namespace std;

int cnt = 1; // �̵� Ƚ���� �̿�.
int line = 0; // ��� ���� ��

void Hanoi(int n, char from, char temp, char to)
{
	if (n == 1)
		cout << "#" << ++line << "." << " ��ũ 1���� " << from << "�������� " << to << "�� �ű��." << endl;
	else
	{
		Hanoi(n - 1, from, to, temp);
		cout << "#" << ++line << "." << " ��ũ 1���� " << from << "�������� " << to << "�� �ű��." << endl;
		Hanoi(n - 1, temp, from, to);
		cnt = pow(2, n) - 1;
	}
}

void main()
{
	int n; //������ ��

	cout << "������ ������ �Է��ϼ��� : ";
	cin >> n;

	Hanoi(n, 'A', 'B', 'C');    // n���� ������ 'A'���� 'C'�� �̵�

	cout << "��ü ���� �̵� ��(���ݼ� : " << n << ") = " << cnt << endl;
}