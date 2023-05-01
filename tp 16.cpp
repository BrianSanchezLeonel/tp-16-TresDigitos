#include<bits/stdc++.h>
using namespace std;
string TresDigitos(string palabra);
int main(){
	string palabra;
	cout<<"Ingrese una palabra:"<<endl;
	cin>>palabra;
	string d=TresDigitos(palabra);
	cout<<"La palabra convertida es:"<<d;
	return 0;
}
string TresDigitos(string palabra){
	string digitos;
	char punto='.';
	int i=0,C=2;
	while(i<=palabra.size()){
		digitos+=palabra[i];
		if(i==C){
			palabra[i]=punto;
			C=C+3;
			digitos+=palabra[i];
		}
		i++;
	}
	return digitos;
}                