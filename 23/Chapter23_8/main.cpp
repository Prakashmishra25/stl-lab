#include <algorithm>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	int iArray[]={2, 8, -15, 90, 26, 7, 23, 30, -27, 39, 55};
	const int len=sizeof(iArray)/sizeof(int);
	//
	cout << "��С��������" << endl;
	sort(iArray, iArray+len);
	for_each(iArray, iArray+len, print);
	cout << endl;
	//
	cout << "�ɴ�С����" << endl;
	sort(iArray, iArray+len, greater<int>());
	for_each(iArray, iArray+len, print);
	cout << endl;
	return 0;
}
