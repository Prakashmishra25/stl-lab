#include <set>
#include <iostream>
int main(void){
	using namespace std;
	multiset<int> ms;
	ms.insert(10);
	ms.insert(13);
	ms.insert(11);
	ms.insert(19);
	ms.insert(13);
	ms.insert(19);
	ms.insert(19); 
	//���������ӡ
	multiset<int>::reverse_iterator ri, riend;
	riend=ms.rend();
	for(ri=ms.rbegin(); ri!=riend; ri++) //��ӡ��10 11 13 13 19 19 19
		cout << *ri << ' ';
	cout << endl;
	return 0;
}
