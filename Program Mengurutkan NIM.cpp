#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

typedef struct{
int nim;
char nama [25];
}
	brg;
	brg data[15];
	brg temp;
	int n,i,b ;
	
	int main(){
		cout<<"\t\t"<<"------------------------------"<<endl;
		cout<<"\t\t"<<"|     Program Sortir Nim     |"<<endl;
		cout<<"\t\t"<<"------------------------------"<<endl;
		cout<<"Masukkan Banyak Data : ";
		cin>>n;
		
			for (i=0;i<n;i++){
				cout<<endl;
				cout<<"Data ke-"<<(i+1)<<":"<<endl;
				cout<<"Input Nim	: ";cin>>data[i].nim;
				cout<<"Input Nama	: ";cin>>gets(data[i].nama);
				cout<<endl;
			}
			
			cout<<"\t\t\t"<<"Data Sebagai Berikut : "<<endl;
			cout<<"\t\t\t"<<"----------------------------"<<endl;
			cout<<"\t\t\t"<<" |    NIM    |    NAMA    |"<<endl;
			cout<<"\t\t\t"<<"----------------------------"<<endl;
			
				for (b=0;b<n;b++){
					
					cout<<"\t\t\t"<<" |     "<<data[b].nim<<"\t"<<		  data[b].nama<<"\t"<<"  |"<<endl;
				}
				cout<<endl;
				
				cout<<"\t\t\t"<<"---------------------------"<<endl;
				
					for(i=0;i<n;i++){
						for(b=0;b<n-1;b++){
							if(data[b].nim>data[b+1].nim){
								temp.nim=data[b].nim;
								data[b].nim=data[b+1].nim;
								data[b+1].nim=temp.nim;
								
								strcpy(temp.nama,data[b].nama);
								strcpy(data[b].nama,data[b+1].nama);
								strcpy(data[b+1].nama,temp.nama);
								
							}
						}
					}
					
					cout<<endl;
					
					
					cout<<endl;
					
					cout<<"\t\t\t"<<"Setelah Diurutkan Dari NIM Terkecil : "<<endl;
					cout<<"\t\t\t"<<"----------------------------"<<endl;
					cout<<"\t\t\t"<<" |    NIM    |    NAMA    |"<<endl;
					cout<<"\t\t\t"<<"----------------------------"<<endl;
			
					for(b=0;b<n;b++){
						cout<<"\t\t\t"<<" |     "<<data[b].nim<<"\t"<<		  data[b].nama<<"\t"<<"  |"<<endl;
					}
					
					cout<<endl;
}
