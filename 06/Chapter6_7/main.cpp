#include <vector>
#include <iostream>
using namespace std;
void print(vector<int>& v);

int main(void){  
	using namespace std;
	vector<int> v;
	print(v);
	//���5��Ԫ��
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5); 
	print(v);
	//�����4��Ԫ��
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	print(v);
	//����vector���ݿռ��С
	v.reserve(30);
	print(v);
	return 0;
}

void print(vector<int>& v){
	cout << "---------------------" << endl;
	cout << "empty = " << v.empty() << endl;
	cout << "size = " << v.size() << endl;
	cout << "max_size = " << v.max_size() << endl;
	cout << "capacity = " << v.capacity() << endl;
}