#include<iostream>
#include<string>
//#include <Windows.h>

//#include<stdlib.h>

using namespace std;

/*
1.��վ404����
2.��վ�۸Ĺ���
3.��վ������¼
4.DNS����
5.����������
*/

int main() {
	string name;//�û���
	string passworld;//����

	//������֤
	while (1) {
		cout << "�������û�����";
		cin >> name;
		cout << "����������";
		cin >> passworld;
		if (!(name == "jack"&&passworld == "123456")) {
			cout << "������û����������" << endl;
			rewind(stdin);
			getchar();
			continue;
		}
		else {
			break;
		}
	}
	//��ӡ�˵�
	std::cout << "1.��վ404����" << std::endl;
	std::cout << "2.��վ�۸Ĺ���" << std::endl;
	std::cout << "3.��վ������¼" << std::endl;
	std::cout << "4.DNS����" << std::endl;
	std::cout << "5.����������" << std::endl;
	std::cout << "6.�˳�" << std::endl;

	system("pause");
	rewind(stdin);
	getchar();
	return 0;
}
