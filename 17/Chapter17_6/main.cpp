#include <string>
#include <iostream>

int main(void){
	using namespace std;
	string s1("abcdef");
	string s2("abc");
	cout << s1.compare("abcdef") << endl;  //���,��ӡ0
	cout << s1.compare(s2) << endl;   //s1 > s2,��ӡ1
	cout << s1.compare("abyz") << endl; //s1 < "abyz",��ӡ-1
	//
	cout << s1.compare(0,3,s2) << endl; //s1��ǰ3���ַ�==s2,��ӡ0
	return 0;
}