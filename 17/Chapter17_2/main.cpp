#include <string>
#include <iostream>

int main(void){
	using namespace std;
	char* cArray="hello, world!";
	string s(cArray);
	//���鷽ʽ
	for(unsigned int j=0; j< s.size(); j++)
		cout << "��" << j << "���ַ�: " << s[j] << endl;
	//��������ʽ
	string::reverse_iterator ri, rend;
	rend=s.rend();
	cout << "�����ӡ�ַ�" << endl;
	for(ri=s.rbegin(); ri!=rend; ri++)
		cout << *ri << ' ' ;
	cout << endl;
	return 0;
}