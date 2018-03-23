#include <bits/stdc++.h>

using namespace std;

class Urlify{
	public:
		string url(char *,int);
};

string Urlify::url(char *strg, int tam){
	int count = 0, index;
	for(int i = 0; i < tam;i++){
		if(strg[i] == ' '){
			count++;
		}
	}		
	index = tam + (count * 2);			
	//if(tam < strlen(strg)){strg[tam] = '/0';}
	for(int i = tam -1; i >= 0; i--){
		if(strg[i] == ' '){
			strg[index - 1] = '0';
			strg[index - 2] = '2';
			strg[index - 3] = '%';
			index -= 3;
		}else{
			strg[index - 1] = strg[i];
			index--;
		}
	}	
	return strg;
}

int main(){
	Urlify rl;
	char cat[] = "Mr John Smith    ";
	string aux = rl.url(cat,13);
	cout << "Resultado: " << aux  << endl;
}