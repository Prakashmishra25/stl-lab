#include <algorithm>
#include <list>
#include <iostream>

bool parity_equal(int x, int y){
	return (x-y)%2 == 0 ? 1:0;
}

int main(void){
	using namespace std; 
	//�����ʼ��
	list<int> l;
	l.push_back(3);
	l.push_back(6);
	l.push_back(9);
	l.push_back(11);
	l.push_back(11);
	l.push_back(18);
	l.push_back(20);
	l.push_back(20);
	//�����ڽ���ȵ�Ԫ��
	list<int>::iterator iResult=adjacent_find(l.begin(),l.end());
	if(iResult != l.end()){
		cout << "���������������ڽӵ�Ԫ����ȣ�" << endl;
		cout << *iResult << endl;
		iResult++;
		cout << *iResult << endl;
	}
	//������ż����ͬ���ڽ�Ԫ��
	iResult=adjacent_find(l.begin(), l.end(), parity_equal);
	if(iResult != l.end()){
		cout << "�����������ڽ�Ԫ�ص���ż����ͬ: " << endl;
		cout << *iResult << endl;
		iResult++;
		cout << *iResult << endl;
	}
	return 0;
}
