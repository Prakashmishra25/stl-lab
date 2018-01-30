#include <algorithm>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	int iArray[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
	const int len=sizeof(iArray)/sizeof(int);
	//
	cout << "������" << endl;
	make_heap(iArray, iArray+len);
	for_each(iArray, iArray+len, print);
	cout << endl;
	//
	cout << "ִ��һ��Ԫ�س���" << endl;
	pop_heap(iArray, iArray+len);
	for_each(iArray, iArray+len, print);
	cout << endl;
	return 0;
}