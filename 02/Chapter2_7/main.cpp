#include <stdio.h>
template<class T>
class A{
public: 
	void func(T a){
		printf("ʹ��func(T a)��Ա����ģ��\n");
	}
};

template<class T1, class T2> 
class B: public A<T1>{
public:
	void func(T1 t1, T2 t2){
		printf("ʹ��func(T1 t1, T2 t2)��Ա����ģ��\n");
	}
};

int main(void){
	B<int, double> b;
	b.func(30, 60);
	A<int> a=static_cast<A<int> >(b);
	a.func(10);
	return 0;
}
