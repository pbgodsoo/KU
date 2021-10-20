//202020898 박범수
//6번
/*
#include<iostream>
using namespace std;

int main()
{
	string a, b;
	cout << "새 암호를 입력하세요>>";
	cin >> a;
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> b;

	if (a == b)
		cout << "같습니다." << endl;
	else
		cout << "같지 않습니다." << endl;
}
*/

//8번
/*
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string a;
	char name[100];
	int max = 0;
	int n = 0;

	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요\n" << ">>";

	for (int i = 1; i <= 5; i++) {
		cin.getline(name, 100, ';');
		cout << i << " : " << name << endl;

		if (max < strlen(name)) {
			max = strlen(name);
			n = i;
			a = name;
		}
	}
	cout << "가장 긴 이름은 " << a << endl;
}
*/

//11번
/*
#include<iostream>
using namespace std;

int main()
{
	int k, n = 0;
	int sum = 0;

	cout << "끝수를 입력하세요>>";
	cin >> n;

	for (k = 0; k <= n; k++) {
		sum += k;
	}

	cout << "1에서 " << n << "까지의 합은 " << sum << " 입니다.\n";
}
*/