#include <string>
#include <iostream>

int main(void){
	using namespace std;
	string s;
	cout << s.empty() << endl;  //���ַ���,����1
	s+="1234567";
	cout << s.empty() << endl;  //��Ϊ��,����0
	cout << s.size() << endl;   //7���ַ�,����7
	cout << s.length() << endl; //����7
	//
	const char* cArray=s.c_str();
	cout << cArray[2] << endl;  //�����ַ�3
	return 0;
}