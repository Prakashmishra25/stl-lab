#include <queue>
#include <iostream>
#define QUEUE_SIZE 50
int main(void){
	  using namespace std;
	  //��˫�˶���deque�����ȶ��еĵײ�����
	  priority_queue<int, deque<int> > pq;
	  if(pq.size() < QUEUE_SIZE)
		pq.push(36);
	  if(pq.size() < QUEUE_SIZE)
		pq.push(51);
	  if(pq.size() < QUEUE_SIZE)
		pq.push(18);
	  //Ԫ�س���
	  while(!pq.empty()){
		cout << pq.top() << endl;  //��ӡ51 36 18
		pq.pop();  //����
	  }
	  return 0;
}
