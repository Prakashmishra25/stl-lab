#include <fstream>
#include <iostream>
using namespace std;
 
int main(void){
	ifstream rFileStream;
	rFileStream.open("d:\\ˮ��.txt", ios::in|ios::binary);
	if(!rFileStream){
		cout << "���ļ�ʧ��" << endl;
		return 1;
	}
	char c;
	while(!rFileStream.eof()){
		rFileStream.get(c);
		cout << c;
	}
	rFileStream.close();
	return 0; 
}
