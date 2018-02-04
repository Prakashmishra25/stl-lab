#include <list>
#include <iostream>
using namespace std;
void print(list<int>& l);  

int main(void){
	list<int> l;
	for(int j=1; j<=10; j++)
		l.push_back(j);
	//splice()����
	list<int> carry;
	carry.splice(carry.begin(), l, l.begin()); //carry��Ԫ��1
	//��ӡcarry
	cout << "carry������Ԫ��Ϊ: " ;
	print(carry);
	cout << endl;
	//��ӡl
	cout << "l������Ԫ��Ϊ: "  ;
	print(l);
	cout << endl;
	//merge()�����÷�
	list<int> x;
	x.push_back(30);
	x.push_back(31);
	x.push_back(32);
	l.merge(x);
	//��ӡx
	cout << "x������Ԫ��Ϊ: ��" ;
	print(x);
	cout << endl;
	//��ӡl
	cout << "l������Ԫ��Ϊ: " ;
	print(l);
	cout << endl;
	return 0;
}

void print(list<int>& l){
	list<int>::iterator i,iend;
	iend=l.end();
	for(i=l.begin(); i!=iend; i++)
		cout << *i << ' ';
}
