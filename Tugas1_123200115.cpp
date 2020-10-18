#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
	
	char nama[20];
	int nim, uts1,uts2,uts3,uts4,uts5;
	int uas1,uas2,uas3,uas4,uas5,js,ja;
	float means,meana;
	
	cout<<"Masukkan Nama Anda 	: "; gets(nama);
	cout<<"Masukkan NIM Anda 	:  ";cin>>nim;
	cout<<"Maukkan nilai UTS semester 1 Anda : "; cin>>uts1;
	cout<<"Maukkan nilai UTS semester 2 Anda : "; cin>>uts2;
	cout<<"Maukkan nilai UTS semester 3 Anda : "; cin>>uts3;
	cout<<"Maukkan nilai UTS semester 4 Anda : "; cin>>uts4;
	cout<<"Maukkan nilai UTS semester 5 Anda : "; cin>>uts5;
	
	cout<<"Maukkan nilai UAS semester 1 Anda : "; cin>>uas1;
	cout<<"Maukkan nilai UAS semester 2 Anda : "; cin>>uas2;
	cout<<"Maukkan nilai UAS semester 3 Anda : "; cin>>uas3;
	cout<<"Maukkan nilai UAS semester 4 Anda : "; cin>>uas4;
	cout<<"Maukkan nilai UAS semester 5 Anda : "; cin>>uas5;
	
	js=uts1+uts2+uts3+uts4+uts5;
	means=js/5;
	
	ja=uas1+uas2+uas3+uas4+uas5;
	meana=ja/5;
	
	system("cls");
	
	cout<<"========================================================================"<<endl;
	cout<<"================================BIODATA================================="<<endl;
	cout<<"========================================================================"<<endl;
	cout<<"Nama 	: "<<nama<<endl;
	cout<<"NIM		: "<<nim<<endl;
	cout<<"Rata-rata nilai UTS 	: "<<means<<endl;
	cout<<"Rata-rata nilai UAS 	: "<<meana<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Maaf aku cuma buat pake yang sederhana"<<endl;
	cout<<"Niatnya buat pake array tapi senen udah UTS"<<endl;
	cout<<"Taulah kampus mana yang senen dah mulai UTS"<<endl;
	cout<<"PEACE :)";
	
	return 0;

}
