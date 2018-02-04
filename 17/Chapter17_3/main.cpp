#include <string>
#include <iostream>

int main(void){
	using namespace std;
	char* cArray="a12345678b";
	string s(cArray);
	s.erase(s.begin());
	cout << s << endl;  //��ӡ��12345678b
	//
	s.erase(s.begin()+3, s.end()-2);
	cout << s << endl;  //��ӡ��1238b
	//
	s.erase(0,2);
	cout << s << endl;  //��ӡ38b
	//
	s.clear();
	return 0;
}