#include <iostream>
#define max 20

using namespace std;
string data [max];
int jml =0;

bool isFull(){
	if(jml>=max){
		return true;
	} else {
		return false;
	}
}

bool isEmpty(){
	if(jml==0){
		return true;
	} else {
		return false;
	}
}

void enqueue(){
	if(!isFull()){
		cout <<"Masukkan Data : ";
		cin >>data[jml];
		jml++;
	}
}

void dequeue(){
	if(!isEmpty()){
		for(int a=0; a<jml-1; a++){
			data[a] = data [a+1];
		}
		jml--;
	}
}

void view(){
	if(!isEmpty()){
		cout << "Data Antrian : "<<endl;
		for(int a= jml-1; a>=0; a--){
			cout <<a+1 <<"."<<data[a] <<endl;
		}
	} else {
		cout <<"Antrian Kosong" <<endl;
	}
	if (isFull()){
		cout <<"Antrian Penuh" << endl;
	}
	cout <<endl;
}

int main(){
	int pil;
	string isi;
	
	queue:
		system("cls");
		cout<<"Program Antrian Tiket";
		cout<<"\n--------------------"<<endl;
		view();
		cout << "Menu Utama\n1. Masuk\n2. Keluar\nPilihan : ";
		cin >> pil;
	
	if (pil==1){
		system ("cls");
		enqueue();
		goto queue;
	} else if (pil==2){
		system ("cls");
		dequeue();
		goto queue;
		
	} 
}
