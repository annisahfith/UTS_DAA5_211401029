#include <iostream>
#define max 20

using namespace std;
string data[max];
int jml = 0;

bool isEmpty(){
	if(jml==0){
		return true;
	} else {
		return false;
	}
}

bool isFull(){
	if(jml>=max){
		return true;
	} else {
		return false;
	}
}

void push(){
	if (!isFull()){
		cout <<"Masukkan Data : ";
		cin >>data[jml];
		jml++;
	}
}

void pop(){
	if(!isEmpty()){
		jml--;
	}
}

void display(){
	if (!isEmpty()){
		cout <<"Susunan Buku : "<<endl;
		for(int i=0; i<jml; i++){
			cout << i+1<< "."<<data[i]<<endl;
		}
	} else {
		cout <<"Tumpukan Kosong !"<<endl;
	}
	
	if (isFull()){
		cout <<"Tumpukan Telah Penuh" <<endl;
	}
	cout <<endl;
}


int main(){
	int pil;
	string isi;

	stack:
		
		system ("cls");	
		cout<<"Program Tumpukan Buku";
		cout<<"\n---------------------"<<endl;
		display();
		cout<<"Menu : \n1. Input\n2. Hapus  ";
		cout<<"\n Nomor yang dipilih :";
		cin>>pil;
		
	if (pil==1){
		system ("cls");
		push();
		goto stack;
	}	else if (pil==2){
		pop();
		goto stack;
	}
}
