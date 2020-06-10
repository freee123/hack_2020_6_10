#include<iostream>
#include<string>
//#include <Windows.h>

//#include<stdlib.h>

using namespace std;

/*
1.网站404攻击
2.网站篡改攻击
3.网站攻击记录
4.DNS攻击
5.服务器攻击
*/

int main() {
	string name;//用户名
	string passworld;//密码

	//输入验证
	while (1) {
		cout << "请输入用户名：";
		cin >> name;
		cout << "请输入密码";
		cin >> passworld;
		if (!(name == "jack"&&passworld == "123456")) {
			cout << "密码或用户名输入错误" << endl;
			rewind(stdin);
			getchar();
			continue;
		}
		else {
			break;
		}
	}
	//打印菜单
	std::cout << "1.网站404攻击" << std::endl;
	std::cout << "2.网站篡改攻击" << std::endl;
	std::cout << "3.网站攻击记录" << std::endl;
	std::cout << "4.DNS攻击" << std::endl;
	std::cout << "5.服务器攻击" << std::endl;
	std::cout << "6.退出" << std::endl;

	system("pause");
	rewind(stdin);
	getchar();
	return 0;
}
