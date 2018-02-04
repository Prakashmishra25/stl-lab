#include <slist>
#include <iostream>
using namespace std;
void print(slist<int>& sl);

int main(void){
	slist<int> sl;
	for(int j=10; j>=1; j--)  //�����ͷ��βԪ��Ϊ1~10
		sl.push_front(j);
	//splice()����
	slist<int> carry;
	carry.splice(carry.begin(), sl, sl.begin()); //carry��Ԫ��1
	//��ӡcarry
	cout << "carry������Ԫ��Ϊ: " ;
	print(carry);
	cout << endl;
	//��ӡsl
	cout << "sl������Ԫ��Ϊ: "  ;
	print(sl);
	cout << endl;
	//merge()�����÷�
	slist<int> x;
	x.push_front(32);
	x.push_front(31);
	x.push_front(30);
	sl.merge(x);
	//��ӡx
	cout << "x������Ԫ��Ϊ: ��" ;
	print(x);
	cout << endl;
	//��ӡl
	cout << "sl������Ԫ��Ϊ: " ;
	print(sl);
	cout << endl;
	return 0;
}

void print(slist<int>& sl){
	slist<int>::iterator i,iend;
	iend=sl.end();
	for(i=sl.begin(); i!=iend; i++)
		cout << *i << ' ';
}
