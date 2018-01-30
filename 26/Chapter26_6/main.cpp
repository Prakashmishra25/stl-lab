#include <memory>
#include <iostream>
using namespace std;

class A{
public:
	A(int i_):i(i_){}
	operator int() const { return i; }  //ת��Ϊint��ӡ
private:
	int i;
};

int main(void){
	//����10������ռ�
	allocator<A> alloc;
	A* p=alloc.allocate(10);  
	//��ԭʼ�洢��������ֵ
	int i;
	raw_storage_iterator<A*, A> rsi(p);
	for(i=0; i<10; i++)
		*rsi++=A(i);
	//��ӡ
	for(i=0; i<10; i++)
		cout << static_cast<int>(*p++) << " ";
	//�ͷſռ�
	alloc.deallocate(p, 10);  
	return 0;
}


 
