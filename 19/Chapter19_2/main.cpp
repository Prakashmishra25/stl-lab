#include <queue>
#include <list>
#include <iostream>
#define QUEUE_SIZE 50

int main(void){
	using namespace std;
	//��˫��������queue���еĵײ�����
	queue<int, list<int> > q;
	if(q.size() < QUEUE_SIZE)
		q.push(51);
	if(q.size() < QUEUE_SIZE)
		q.push(36);
	if(q.size() < QUEUE_SIZE)
		q.push(28);
	//Ԫ�س���
	while(!q.empty()){
		cout << q.front() << endl;  //��ӡ51 36 28
		q.pop();  //����
	}
	return 0;
}