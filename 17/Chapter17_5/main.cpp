#include <string>
#include <iostream>

int main(void){
	using namespace std;
	        //0123456789012345678901234
	string s("dog bird chicken bird cat");
	//�ַ�������
	cout <<	s.find("bird") << endl;  //��ӡ4
	cout << (int)s.find("pig") << endl;   //��ӡ-1
	//�ַ�����
	cout << s.find('i',7) << endl;   //��ӡ11
	//���ַ�����ĩβ��ʼ�����ַ���
	cout << s.rfind("bird") << endl; //��ӡ17
	//���ַ�����ĩβ��ʼ�����ַ�
	cout << s.rfind('i') << endl;    //��ӡ18
	//���ҵ�1������ĳ�Ӵ����ַ�
	cout << s.find_first_of("13r98") << endl;  //�ҵ��ַ�r,��ӡ6
	//���ҵ�1��������ĳ�ַ������ַ�
	cout << s.find_first_not_of("dog bird 2006") << endl;  //�ҵ��ַ�c,��ӡ9
	//�������һ������ĳ�Ӵ����ַ�
	cout << s.find_last_of("13r98") << endl;  //�ַ�r,��ӡ19
	//�������һ��������ĳ�ַ������ַ�
	cout << s.find_last_not_of("tea") << endl;  //�ַ�c,��ӡ22
	return 0;
}