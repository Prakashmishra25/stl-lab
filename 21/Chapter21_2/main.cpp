#include <algorithm>
#include <list>
#include <iostream>

int main(void){
	using namespace std;
	//˫�������ʼ��
	list<int> l;
	l.push_back(10);
	l.push_back(18);
	l.push_back(26);
	l.push_back(26);
	l.push_back(30);
	//����Ԫ��26
	list<int>::iterator iLocation=find(l.begin(),l.end(),26);
	if(iLocation != l.end())
		cout << "�ҵ�Ԫ��26" << endl;
	//��ӡԪ��18
	cout << "ǰһ��Ԫ��Ϊ" << *(--iLocation) << endl;
	return 0;
}