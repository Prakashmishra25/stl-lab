#include <slist>
#include <iostream>

int main(void){
	using namespace std;
	slist<int> sl1,sl2;
	sl1.push_front(1);
	sl1.push_front(3);
	sl1.push_front(5);
	sl2.push_front(2);
	sl2.push_front(4);
	sl2.push_front(6);
	//��ӡ������������Ԫ��
	sl1.swap(sl2);
	slist<int>:: iterator isl1,isl2;
	cout << "sl1����Ԫ�� " ;
	for(isl1=sl1.begin(); isl1!=sl1.end(); isl1++)
		cout << *isl1 << ' ' ;
	cout << endl;
	cout << "sl2����Ԫ�� " ;
	for(isl2=sl2.begin(); isl2!=sl2.end(); isl2++)
		cout << *isl2 << ' ' ;
	cout << endl;
	return 0;
}
