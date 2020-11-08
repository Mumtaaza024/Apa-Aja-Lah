#include <iostream>
#include <string>
#include <stdlib.h>
 
using namespace std;
 
int main() {
int tugas,uts,uas;
float mean;
string name,pass,mk1,mk2;
cout << "Username : "; cin >> name;
cout << "Password : "; cin >> pass;
 
cout << "\n\n";
 
if (name == "admin")
{
if (pass == "123")
{
cout << "LOGIN BERHASIL!";
}
else cout << "PASSWORD ANDA SALAH!";
}
else if (pass == "123")
{
cout << "USERNAME ANDA SALAH!";
}
else cout << "USERNAME DAN PASSWORD ANDA SALAH!";
 
cout << "\n\n";


system("cls");

cout << "LOGIN BERHASIL!"<<endl;
cout << "=========================================================";
cout <<"\n";

cout <<"input nilai mata kuliah"<<endl;
cout <<"1. Algoritma dan Pemrograman "<<endl;
cout <<"2. Kalkulus"<<endl;

cout <<"Pilih : ";cin>>mk1;
cout <<"nilai harian : ";cin>>tugas;
cout <<"nilai UTS : ";cin>>uts;
cout <<"nilai UAS : ";cin>>uas; 

mean = (tugas+uts+uas)/3;

if (mean>=80){
	cout<<"anda lulus"<<" "<<mk1<< " dengan nilai :  "<<mean<<endl;
}else {
	cout<<"anda tidak lulus"<<" "<<mk1<< " karena nilai anda :  "<<mean<<" kurang dari 80 "<<endl;
}

 return 0;
}


