#include <iostream>

//2-1
/*
int main() {
	std::cout << "Hello\n";
	std::cout << "ù ��° ������ �Դϴ�.";
	return 0;
}
*/

//2-2
/*
double area(int r);

double area(int r) {
	return 3.14 * r * r;
}

int main() {
	int n = 3;
	char c = '#';
	std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
	std::cout << "n + 5 = " << n + 5 << '\n';
	std::cout << "������ " << area(n);
}
*/

//2-3
/*
using namespace std;

int main() {
	cout << "�ʺ� �Է��ϼ���>>";

	int width;
	cin >> width;

	cout << "���̸� �Է��ϼ���>>";

	int height;
	cin >> height;

	int area = width * height;
	cout << "������ " << area << "\n";
}
*/

//2-4
/*
using namespace std;

int main() {
	cout << "�̸��� �Է��ϼ���>>";
	char name[11];
	cin >> name;

	cout << "�̸��� " << name << "�Դϴ�\n";
}
*/

//2-5
/*
#include <cstring>

using namespace std;

int main() {
	char password[11];
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;
	while (true) {
		cout << "��ȣ>>";
		cin >> password;
		if (strcmp(password, "C++") == 0) {
			cout << "���α׷��� ���� �����մϴ�." << endl;
			break;
		}
		else
			cout << "��ȣ�� Ʋ���ϴ�~~" << endl;
	}
}
*/

//2-6
/*
using namespace std;

int main() {
	cout << "�ּҸ� �Է��ϼ���>>";

	char address[100];
	cin.getline(address, 100, '\n');

	cout << "�ּҴ� " << address << "�Դϴ�\n";
}
*/

//2-7
/*
#include <string> 
using namespace std;

int main() {
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;

	cout << song + "�� �θ� ������";
	cout << "(��Ʈ : ù���ڴ� " << elvis[0] << ")?";

	getline(cin, singer);
	if (singer == elvis)
		cout << "�¾ҽ��ϴ�.";
	else
		cout << "Ʋ�Ƚ��ϴ�. " + elvis + "�Դϴ�." << endl;
}
*/