#include <set>
#include <iostream>
int main(void){
	  using namespace std;
	  multiset<int> ms;
	  ms.insert(10);
	  ms.insert(13);  //
	  ms.insert(11);
	  ms.insert(19);
	  ms.insert(13);  //
	  ms.insert(16);
	  ms.insert(13);  //
	  ms.insert(17);
	  //find����Ԫ��13
	  int v=19;
	  multiset<int>::iterator i_v = ms.find(v);
	  cout << *i_v << endl;
	  //equal_range����Ԫ��13
	  v=13;
	  pair<multiset<int>::iterator, multiset<int>::iterator> p=ms.equal_range(v);
	  cout << "���ڵ���" << v <<"�ĵ�һ��Ԫ��Ϊ(x��k)Ϊ " << *p.first << endl;
	  cout << "����" << v << "�ĵ�һ��Ԫ��(x>k)Ϊ " << *p.second << endl;
	  //��ӡ�ظ���ֵԪ��13
	  multiset<int>::iterator i;
	  cout << "��ֵΪ" << v << "������Ԫ��Ϊ ";
	  for(i=p.first; i!=p.second; i++)  //��ӡ��13 13 13 
		  cout << *i << ' ';
	  cout << "\n\n\n";
	  return 0;
}
