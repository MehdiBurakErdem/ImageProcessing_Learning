#include<iostream>

using namespace std;

void Hosgeldiniz(){
	/* C++ Dili fonksiyon oluþturma deneme amaçlý oluþturuldu*/
	cout<<"Dizi olusturma kismina hosgeldinz"<<endl;
}

int main(){
	int sayi;
	
	cout<<"Lutfen bir sayi giriniz: ";
	cin>>sayi;
	
	/* 	1. Kýsým */ /* Deneme Amaçlý Çalýþtýrýldý*/
	/*
	if(sayi%2 == 0){
		cout<<"Sayi cifttir :))"<<endl<<"Sayi = "<<sayi;
	}
	else if(sayi%2 != 0){
		cout<<"Sayi tektir :)"<<endl<<"Sayi = " <<sayi;
	}
	*/
	
	/* 	2.kISIM */
	
	int tur;
	int yon = 0;
	for(int i=1; i<=sayi; i++){
		if(yon == 0){
			tur = ((10 - i) % 10 + 10) % 10 ;
			for(int j=0; j<=tur; j++){
				cout<<j;
			}
			cout<<endl;
			if(tur == 0){
				yon = 9;
			}
		}
		else if(yon == 9){
			tur = i % 10 ;
			for(int j=0; j<=tur; j++){
				cout<<j;
			}
			cout<<endl;
			if(tur == 9){
				yon = 1;
				i++;
			}
		}
		else{
			tur = 10 - (i % 10);
			for(int j=0; j<tur; j++){
				cout<<j;
			}
			cout<<endl;
			if(tur == 1){
				yon = 9;
				i++;
			}
		}
	}
	
	
	
	/* 	3.Kýsým */ /* Deneme Amaçlý Çalýþtýrýldý*/
	/*
	Hosgeldiniz();
	int sayilar[] = {11, 22, 33, 44, 55, 66, 77};
	cout<<sayi%7<< ". index de ki eleman: "<<sayilar[sayi%7]<<endl;
	
	int *adress = &sayilar[sayi%7];
	cout<<sayi%7<< ". index de ki elemanýn adresi: "<<adress;
	*/
	
	
}
