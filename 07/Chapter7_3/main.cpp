#include <deque>
#include <iostream>

int main(void){
	using namespace std;
	deque<int> d;
	d.push_back(6);
	d.push_back(7);   
	//ͷ������
	d.push_front(5);
	for(int i=0; i<d.size(); i++)  //��ӡ5 6 7
		cout << d[i] << ' ';
	cout << endl;
	//�м�λ�ò���
	d.insert(d.begin() +1 ,9);     //�ڵ�2��Ԫ��ǰ����9,��5 9 6 7
	for(int j=0; j<d.size(); j++)
		cout << d[j] << ' ';
	cout << endl;
	return 0;
}