#include <algorithm>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ',';
}

int main(void){
	int iArray[]={7, 8, 6, 2, 9, 5, 10, 3, 0, 1, 13, 11, 12};
	const int len=sizeof(iArray)/sizeof(int);
	//
	cout << "��ӡiArray����Ԫ��\n";
	for_each(iArray, iArray + len, print);
	cout << endl;
	//ִ��nth_element�㷨
	cout << "*nth��Ϊ��9��Ԫ��,��ӡiArray����Ԫ��\n";
	nth_element(iArray, iArray + 9, iArray + len);
	for_each(iArray, iArray + len, print);
	cout << endl;
	return 0;
}