#include <fstream>
#include <iostream>
using namespace std;
  
int main(void){
	fstream rwFileStream;
	rwFileStream.open("d:\\digit.txt", ios::in|ios::out|ios::binary|ios::trunc);
	if(!rwFileStream){
		cout << "���ļ�ʧ��" << endl;
		return 1;
	}
	for(char i=0; i<26; i++)
		rwFileStream << char('a'+i);  //д��26����ĸ
	//
	rwFileStream.seekg(3, ios::beg);  //��λ����3����ĸ��(��0����)
	char c;
	rwFileStream.get(c);
	cout << c << endl;    //��ӡ���ַ�d
	rwFileStream.close();
	return 0;
}
