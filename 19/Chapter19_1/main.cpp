#include <queue>
#include <iostream>

int main(void){
	using namespace std;
	//����queue����
	queue<int> q;
	//Ԫ�����
	q.push(3);
	q.push(19);
	q.push(29);
	q.push(26);
	q.push(33);
	//Ԫ�س���
	while(!q.empty()) {
		cout << q.front() << endl;  //��ӡ����Ԫ��(ȡ����)
		q.pop(); //ɾ������Ԫ��
	}
	return 0;
}