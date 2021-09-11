#include <iostream> 
using namespace std;

int cnt = 1; // 이동 횟수에 이용.
int line = 0; // 출력 줄의 수

void Hanoi(int n, char from, char temp, char to)
{
	if (n == 1)
		cout << "#" << ++line << "." << " 디스크 1개를 " << from << "지점에서 " << to << "로 옮긴다." << endl;
	else
	{
		Hanoi(n - 1, from, to, temp);
		cout << "#" << ++line << "." << " 디스크 1개를 " << from << "지점에서 " << to << "로 옮긴다." << endl;
		Hanoi(n - 1, temp, from, to);
		cnt = pow(2, n) - 1;
	}
}

void main()
{
	int n; //원반의 수

	cout << "원반의 갯수를 입력하세요 : ";
	cin >> n;

	Hanoi(n, 'A', 'B', 'C');    // n개의 원반을 'A'에서 'C'로 이동

	cout << "전체 원반 이동 수(원반수 : " << n << ") = " << cnt << endl;
}