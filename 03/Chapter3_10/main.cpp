#include <iostream>
using namespace std;

int main(void){
	cout.width(20);
	cout << "hello" << endl;  //�Ҷ������hello,ռ20���ַ�
	//  
	cout.precision(4);
	cout << 2006.526 << endl; //���2007
	//
	cout.precision(5);
	cout << 2006.526 << endl;  //���2006.5
	//
	cout.precision(7);
	cout << 2006.526 << endl;  //���2006.526
	//
	cout.width(20);
	cout.fill('*');
	cout << "baby" << endl;    //���**************baby
	return 0;
}