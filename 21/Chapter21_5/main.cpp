#include <algorithm>
#include <iostream>

int main(void){
	using namespace std;
	//���������ַ���
	char* string1="abcdef7ghijklmn";
	char* string2="zyx3pr7ys";
	//��Χ����string1��string2��
	char* result=find_first_of(string1, string1 + strlen(string1),
							   string2, string2 + strlen(string2));
	cout << "�ַ���string1�ĵ�һ��������string2���ַ�Ϊ��"
		 << *result << endl;  //��ӡ7
	return 0;
}