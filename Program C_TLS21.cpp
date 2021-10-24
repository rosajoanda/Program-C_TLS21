//Menghitung Volume Bangun Ruang

#include <iostream>
using namespace std;
int main ()
{
	int pilihan ; 
	float s, p, l, t, r, a, ts, ps, ls, Volume, Luasalas;
	
	cout <<"Program Menghitung Volume Bangun Ruang " << endl ; 
	cout <<"Pilihan bangun ruang yang disediakan yaitu : " << endl ; 
	cout <<"1. Kubus" << endl ;
	cout <<"2. Balok" << endl ;
	cout <<"3. Bola" << endl ; 
	cout <<"4. Tabung" << endl ;
	cout <<"5. Kerucut" << endl ;
	cout <<"6. Prisma segitiga" << endl ;
	cout <<"7. Limas segiempat" << endl ;
	cout <<"\n Nomor bangun ruang yang dipilih adalah : " ;
	cin  >>pilihan ; 
	
	switch (pilihan)
	{
	case 1 :
		cout <<"\nKubus" << endl ;
		cout <<"masukkan panjang sisi : " ;
		cin  >>s ; 
		Volume=s*s*s ;
		cout <<"Volumenya adalah : " << Volume << endl ; 
	break ;
	case 2 :
		cout <<"\nBalok" << endl ;
		cout <<"Masukkan panjang : " ;
		cin  >>p ;
		cout <<"Masukkan lebar : " ; 
		cin  >>l ; 
		cout <<"Masukkan tinggi : " ;
		cin  >>t;
		Volume=p*l*t ;
		cout <<"Volumenya adalah : " << Volume << endl ;
	break ;
	case 3 :
		cout <<"\nBola" << endl ;
		cout <<"Masukkan jari-jari : " ;
		cin  >>r ; 
		Volume=1.3333333333*3.14*r*r*r ; 
		cout <<"Volumenya adalah : " << Volume << endl ;
	break ; 
	case 4 :
		cout <<"\nTabung" << endl ;
		cout <<"Masukkan jari-jari : " ;
		cin  >>r ;
		cout <<"Masukkan tinggi tabung : " ;
		cin  >>t ;
		Volume=3.14*r*r*t ;
		cout <<"Volumenya adalah : " << Volume << endl ;
	break ;
	case 5 : 
		cout <<"\nKerucut" << endl ;
		cout <<"Masukkan jari-jari : " ;
		cin  >>r ;
		cout <<"Masukkan tinggi : " ;
		cin  >>t ;
		Volume=0.3333333333*3.14*r*r*t ; 
		cout <<"Volumenya adalah : " << Volume << endl ;
	break ;
	case 6 :
		cout <<"\nPrisma Segitiga" << endl ; 
		cout <<"Masukkan tinggi segitiga pada alas : " ;
		cin  >>ts ; 
		cout <<"Masukkan besar alas segitiga pada alas : " ;
		cin  >>a ; 
		cout <<"Masukkan tinggi prisma : " ;
		cin  >>t;
		Luasalas=0.5*ts*a ; 
		Volume=Luasalas*t ;
		cout <<"Volumenya adalah : " << Volume << endl ;
	break ;
	case 7 :
		cout <<"\nLimas Segirmpat" << endl ;
		cout <<"Masukkan panjang segiempat : " ;
		cin  >>ps ; 
		cout <<"Masukkan lebar segiempat : " ;
		cin  >>ls ; 
		cout <<"Masukkan tinggi limas : " ;
		cin  >>t ;
		Luasalas=ps*ls ;
		Volume=0.3333333333*Luasalas*t ;
		cout <<"Volumenya adalah : " << Volume << endl ;
	break ;
	default :
		cout <<"\nNomor yang dimasukkan salah" ; 
	}
	return 0 ; 
	
}
