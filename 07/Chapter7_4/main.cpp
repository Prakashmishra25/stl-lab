#include <deque>
#include <iostream>
  
int main(void){
	using namespace std;
	deque<int> d;
	d.push_back(4);
	d.push_back(5);
	d.push_back(3);
	d.push_back(3);
	d.push_back(3);
	d.push_back(6);
	for(int i=0; i<d.size(); i++)
		cout << d[i] << ' ' ;
	cout << endl;
	//ͷβ������λ��ɾ��Ԫ��
	d.erase(d.begin() +1);
	d.pop_front();
	d.pop_back();
	for(int j=0; j<d.size(); j++)
		cout << d[j] << ' ' ;
	cout << endl;
	//ɾ������Ԫ��
	d.clear();
	cout << "ִ��clear()" <<endl << "dequeԪ��ȫ�����" << endl;
	return 0;
}
