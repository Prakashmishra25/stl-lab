#include <string>
#include <iostream>

int main(void){
	using namespace std;
	string s1;
	s1.push_back('a');
	s1.push_back('b');
	s1.push_back('c');
	cout << "��ӡs1: " << s1 << endl;
	//
	char* cArray="efgh";
	string s2(cArray);
	cout << "��ӡs2: " << s2 << endl;
	//�ַ�����"+"����
	cout << "��ӡs1+s2: " << s1 + s2 << endl;
	//�ַ���s1������ַ���s2
	cout << "append��,��ӡs1: " << s1.append(s2) << endl;
	//��s1�ĵ�2���ַ�λ��ǰ�����ַ�'8'
	string::iterator i;
	i=s1.begin();
	i++;
	s1.insert(i,'8');
	cout << "insert��,��ӡs1: " << s1 << endl;
	//�ַ�����"+="����
	s1+=s2;
	cout << "s1+=s2��,��ӡs1: " << s1 << endl;
	return 0;
}