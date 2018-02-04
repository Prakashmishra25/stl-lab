#include <algorithm>
#include <list>
#include <iostream>
using namespace std;
struct print{
	int count; //��ӡ��Ԫ�ؼ���
	print(){count=0;}
	void operator()(int x){
		cout << 3*x << endl;
		count++;
	}
};

int main(void){
	//˫�������ʼ��
	list<int> l;
	l.push_back(29);
	l.push_back(32);
	l.push_back(16);
	l.push_back(22);
	l.push_back(27);
	//��ӡ�����Ԫ��
	print p=for_each(l.begin(),l.end(),print());
	//��ӡ��Ԫ�ظ���
	cout << p.count << endl;
	return 0;
}