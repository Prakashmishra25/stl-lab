#include <list>
#include <iostream>
using namespace std;
void print(list<int>& l);

int main(void){
	list<int> l;  
	for(int j=18; j>=0; j--)
		l.push_back(j);
	cout << "����ǰ: " ; print(l);
	//����list<int>::sort()��������
	l.sort();
	cout << "�����: " ; print(l);
	return 0;
}

void print(list<int>& l){
	list<int>::iterator i,iend;
	iend=l.end();
	for(i=l.begin(); i!=iend; i++)
		cout << *i << ' ';
	cout << endl;
}

