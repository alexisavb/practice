#include <bits/stdc++.h>

using namespace std;

class Urlify{
	public:
		string url(string,int);
};

string Urlify::url(string strg, int tam){
	int count = 0;
	for(int i = 0; i < tam;i++){
		if(strg[i] == ' '){
			count++;
		}
	}	
	int newTam = (count*3)+(tam-count);	
	char *chr = new char[newTam]();	
	for(int i = 0, j = 0;i < tam;i++){
		if(strg[i] == ' '){
			chr[j] = '%';
			chr[j+1] = '2';
			chr[j+2] = '0';
			j+=3;
		}else{
			chr[j++] = strg[i];
		}
	}	
	return chr;
}

int main(){
	Urlify rl;
	string aux = rl.url("Mr John Smith    ",13);
	cout << "Resultado: " << aux  << endl;
}