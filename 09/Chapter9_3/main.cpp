#include <slist>
#include <iostream>

int main(void){
	using namespace std; 
	slist<int> sl;
	//����15��16��5��5��5��17��18
	sl.push_front(18);
	sl.push_front(17);
	sl.push_front(5);
	sl.push_front(5);
	sl.push_front(5);
	sl.push_front(16);
	sl.push_front(15);
	//ɾ��Ԫ��,ʣ��17��18
	slist<int>::iterator i,iend;
	i=sl.begin();
	i++;
	sl.erase(i);      //ɾ��15
	sl.pop_front();   //ɾ��16
	sl.remove(5);     //ɾ�����е�5
	//��ӡ
	iend=sl.end();
	for(i=sl.begin(); i!=iend; i++)  //��ӡ17 18
		cout << *i << ' ' ;
	cout << endl;
	return 0;
}
