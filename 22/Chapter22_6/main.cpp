#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

int square(int x){
	return x*x;
}

void print(int x){
	cout << x << "  ";
}

int main(void){
	//vector��ʼ��	
	vector<int> v;
	v.push_back(5);
	v.push_back(15);
	v.push_back(25);
	//list��ʼ��
	list<int> l(3);
	//��vector����Ԫ��ִ��ƽ�����㣬����list����
	transform(v.begin(), v.end(), l.begin(), square);
	//��ӡ����Ԫ��
	for_each(l.begin(), l.end(), print);
	cout << endl;
	return 0;
}