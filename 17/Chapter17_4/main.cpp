#include <string>
#include <iostream>

int main(void){
	using namespace std;
	char* cArray1="hello,boy!";
	string s(cArray1);
	//
	s.replace(6,3,"gril");  //boy�滻Ϊgirl
	cout << s << endl;      //��ӡhello gril!
	//
	s.replace(10,1,1,'.');  //��"hello gril!"��'!'�滻Ϊ'.'
	cout << s << endl;      //��ӡhello gril.
	//
	s.replace(s.begin(),s.begin()+5, "good morning");
	cout << s << endl;     //��ӡgood morning girl.
	return 0;
}