#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;

	struct databrg {
   		char namabrg[15];
   		int hrgsatuan;
   		int jmlhbeli;
	};

	struct hitungan {
 		int banyak,bayar;
		databrg * d;
	}; hitungan n;

	int total(int a) {
	int t;
		t=n.d[a].hrgsatuan*n.d[a].jmlhbeli;
	return t;
	}

	int sub() {
	int s; s=0;
   	for(int i=0;i<n.banyak;i++){
	   s=s+total(i);
	}
   	return s;
	}
	
	int diskon() {
	int d;
 		if (subtotal()>80000) {
		 d=subtotal()*0.10;
		 }
   		else {
   		 d=0;
   		}
   return d;
	}
	
 	int grand() {
	int g;
    g=subtotal()-diskon();
      return g;
	}
	
	int kembalian() {
	int k;
    k=n.bayar-grand();
    return k;
	}

int main() {
	cout<<"-----------------------------------------------"<<endl;
	cout<<"                 PROGRAM KASIR			      "<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<"Banyak Barang : ";cin>>n.banyak;
	n.d=new databrg[n.banyak];
		for(int i=0;i<n.banyak;i++) {
		  cout<<endl;
		  cout<<"Barang ke- "<<(i+1)<<endl;
		  cout<<"Nama Barang	: "; cin>>n.d[i].namabrg;
		  cout<<"Harga Satuan	: "; cin>>n.d[i].hrgsatuan;
		  cout<<"Jumlah Beli	: "; cin>>n.d[i].jmlhbeli;
		  }
	system ("CLS");
 	  cout<<"---------------------------------------------------------"<<endl;
      cout<<"|	Nama		Harga		   Jumlah	|"<<endl;
      cout<<"---------------------------------------------------------"<<endl;
			for(int i=0;i<n.banyak;i++) {
				cout<<"|     "<<"\t"<<			n.d[i].namabrg<<"\t\t"<<n.d[i].hrgsatuan<<"\t\t\t"<<n.d[i].jmlhbeli<<"  	|"<<endl;
			}
        cout<<"---------------------------------------------------------"<<endl;
       cout<<"Total		: Rp. "<<subtotal()<<endl;
       cout<<"Diskon		: Rp. "<<diskon()<<endl;
       cout<<"Grand Total	: Rp. "<<grand()<<endl;
       cout<<"Bayar		: Rp. "; cin>>n.bayar;
       cout<<"\nKembalian	: Rp. "<<kembalian()<<endl;
       cout<<"\nTerimakasih \n";

   getch();

   }
