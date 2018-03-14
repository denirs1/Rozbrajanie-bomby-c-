#include <cstdlib>
#include <iostream>
#include <cmath>
#include <ctime>
#include <windows.h>
#include <conio.h>
//Stworzone przez Denis Kuœpit prawa autorskie Kappa
using namespace std; //nie wyswietla dobrych po wpisaniu zlej na easy
int wybor;
int w=0;
int d=0;
int z=0;
char witaj[25]= "witaj w grze C4";
void start(){
	
	for(unsigned int i=0; i<strlen(witaj) ; ++i){
	    cout<<witaj[i];
	    cout.width(2);
	    Sleep(500);
	 
	}
	Sleep(1000);
	
}//wyswietla napis na poczatku
void menu(){
	cout<<"Stworzone przez:"<<endl<<"Denis Kuspit"<<endl;
	cout<<"zasady i ogolniki"<<endl;
	cout<<"zakaz wpisywania liter bo wywali to gre"<<endl;
	cout<<"liczby dla bomby sa losowe"<<endl;
	cout<<"sa 3 poziomy trudnosci"<<endl;
	cout<<"latwy-5 liczb"<<endl;
	cout<<"sredni-10 liczb"<<endl;
	cout<<"trudny-15 liczb"<<endl;
	cout<<"podane wiecej niz 2 liczby zle konczy gre i uznaje ze przegrales"<<endl;
}//menu
//tryb easy
void easy(int t[5]){

	
	for(int i=0;i<5;i++){
	
		t[i]=rand()%10;
		//cout<<t[i]<<endl; -wyswietlanie liczby wylosowanej do gry
		cout<<"podaj liczbe z zakresu 0-9 w bombie"<<endl;
		cin>>w;
			if(w==11){
			break;
		}
		
		if(t[i]==w){
		d++;
		cout<<"dobrze"<<endl;
		cout<<"dobre odp"<<d<<endl;
		
	}
		else{
		z++;
		cout<<"zle"<<endl;}
		cout<<"zle odp"<<z<<endl;
	
	}
	

	 if(z<2)
			cout<<"wygrales"<<endl;
	 else
			cout<<"przegrales"<<endl;
	getch();
	d=0;
	z=0;
}
//tryb medium
void medium(int t[10]){
	
	
	for(int i=0;i<10;i++){
	
		t[i]=rand()%10;
		//cout<<t[i]<<endl; -wyswietlanie liczby wylosowanej do gry
		cout<<"podaj liczbe z zakresu 0-9 w bombie"<<endl;
		cin>>w;
			if(w==11){
			break;
		}
		
		if(t[i]==w){
		d++;
		cout<<"dobrze"<<endl;
		cout<<"dobre odp"<<d<<endl;
		
	}
		else{
		z++;
		cout<<"zle"<<endl;}
		cout<<"zle odp"<<z<<endl;
	
	}
	

	 if(z<2)
			cout<<"wygrales"<<endl;
	 else
			cout<<"przegrales"<<endl;
	getch();
	d=0;
	z=0;
}
//tryb hard
void hard(int t[15]){

	
	for(int i=0;i<15;i++){
	
		t[i]=rand()%10;
		//cout<<t[i]<<endl; -wyswietlanie liczby wylosowanej do gry
		cout<<"podaj liczbe z zakresu 0-9 w bombie"<<endl;
		cin>>w;
			if(w==11){
			break;
		}
		
		if(t[i]==w){
		d++;
		cout<<"dobrze"<<endl;
		cout<<"dobre odp"<<d<<endl;
		
	}
		else{
		z++;
		cout<<"zle"<<endl;}
		cout<<"zle odp"<<z<<endl;
	
	}
	

	 if(z<2)
			cout<<"wygrales"<<endl;
	 else
			cout<<"przegrales"<<endl;
	getch();
	d=0;
	z=0;
}

int main(int argc, char *argv[])
{
	start();
	system("cls");
	do{
		int tab[5];
	srand(time(0));
	M:
	cout<<"witaj"<<endl;
	
	cout<<"wybierz opcje"<<endl;
	
	cout<<"1.informacje"<<endl;
	cout<<"2.poziom latwy"<<endl;
	cout<<"3.poziom sredni"<<endl;
	cout<<"4.poziom trudny"<<endl;
	cout<<"5.wyjscie "<<endl;
	cin>>wybor;
if(!cin){
	cin.clear(); 
  cin.sync(); 
cout<<"to nie liczba"<<endl;
goto M;
}
else{

	cout<<"wybrales="<<wybor<<endl;
	switch(wybor){
		
		case 1:{
		menu();	
		break;} 
		case 2:{
			
			easy(tab);
			system("cls");
			
			break;
		}
		case 3:{
			medium(tab);
			system("cls");
			break;
		}
		case 4:{
			hard(tab);
			system("cls");
			break;
		}
		case 5:{
			
			break;
		}
	}
		}

	}while(wybor!=5);
	
	
	system("pause");
	return 0;
}
