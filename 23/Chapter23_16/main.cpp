#include <algorithm>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ',';
}

int main(void){
	int iArray[]={3, 6, 9, 10, 10, 10, 13, 16, 17, 20};
	const int len=sizeof(iArray)/sizeof(int);
	pair<int* ,int*> range=equal_range(iArray, iArray + len, 10);
	cout << "��һ�����Բ���10��Ԫ��Ϊ" << *range.first << endl;
	cout << "���һ�����Բ���10��Ԫ��Ϊ" << *range.second << endl;
	cout << "���п�����ǰ�����10��Ԫ��Ϊ";
	for_each(range.first, range.second+1, print);
	cout << endl;
	return 0;
}
