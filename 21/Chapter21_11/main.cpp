#include <algorithm>
#include <vector>
#include <iostream>

int main(void){
	using namespace std;
	//��ʼ������v={1, 8, 8, 8, 6, 6, 8}
	vector<int> v;
	v.push_back(1);
	v.push_back(8);
	v.push_back(8);
	v.push_back(8);
	v.push_back(6);
	v.push_back(6);
	v.push_back(8);
	//����������{8, 8, 8}
	vector<int>::iterator iLocation;
	iLocation=search_n(v.begin(), v.end(), 3, 8);
	if(iLocation != v.end())
		cout << "��v���ҵ�3��������Ԫ��8" << endl;
	else 
		cout << "v��û��3��������Ԫ��8" << endl;
	//����������{8, 8, 8, 8}
	iLocation=search_n(v.begin(), v.end(), 4, 8);
	if(iLocation != v.end())
		cout << "��v���ҵ�4��������Ԫ��8" << endl;
	else 
		cout << "v��û��4��������Ԫ��8" << endl;
	//����������{6, 6}
	iLocation=search_n(v.begin(), v.end(), 2, 6);
	if(iLocation != v.end())
		cout << "��v���ҵ�2��������Ԫ��6" << endl;
	else 
		cout << "v��û��2��������Ԫ��6" << endl;
	return 0;
}
