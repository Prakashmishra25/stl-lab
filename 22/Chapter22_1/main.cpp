#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << "  ";
}

int main(void){
	//��ʼ������v
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	//��ʼ��˫������l
	list<int> l;
	l.push_back(2);
	l.push_back(4);
	l.push_back(6);
	l.push_back(8);
	l.push_back(10);
	//����v��l
	copy(v.begin(), v.end(), l.begin());
	//����l��ӡl 3 5 8 10
	for_each(l.begin(), l.end(), print);
	cout <<endl;
	return 0;
}
	