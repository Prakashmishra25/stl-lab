#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << "  ";
}

bool even(int x){  //ż��
	return x % 2 ? 0:1;
}

int main(void){
	//��ʼ������v
	vector<int> v;
	v.push_back(7);
	v.push_back(2);
	v.push_back(5);
	v.push_back(4);
	v.push_back(1);
	//��ʼ������iArray
	int iArray[6]={0, 0, 0, 0, 0, 0};
	//�Ƴ�v��ż��,ʣ��Ԫ�ظ��Ƶ�iArray
	remove_copy_if(v.begin(), v.end(), iArray, even);
	//��ӡv,vû�иı�
	for_each(v.begin(), v.end(), print);
	cout << endl;
	//��ӡiArray
	for_each(iArray, iArray+6, print);
	cout << endl;
	return 0;
}
