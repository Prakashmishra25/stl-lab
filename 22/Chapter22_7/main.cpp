#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << "  ";
}

int main(void){
	vector<int> v;
	v.push_back(13);
	v.push_back(25);
	v.push_back(27);
	v.push_back(25);
	v.push_back(29);
	//��v��25ȫ���滻Ϊ100
	replace(v.begin(), v.end(), 25, 100);
	cout << "v����Ԫ��: ";
	for_each(v.begin(), v.end(), print);
	cout << endl;
	//��iArray��5ȫ���滻Ϊ200
	int iArray[7]={3,6,5,9,5,5,10};
	replace(iArray, iArray+7, 5, 200);
	cout << "����iArrayԪ��: ";
	for_each(iArray, iArray+7, print);
	cout << endl;
	return 0;
}