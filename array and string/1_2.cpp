#include <bits/stdc++.h>

using namespace std;

class Permutation{
	public:
		bool isPermutation(string str1, string str2);
};

bool Permutation::isPermutation(string str1, string str2){
	int sizeStr1 = str1.length();
	int sizeStr2 = str2.length();	
	if(sizeStr1 != sizeStr1){		
		return false;
	}

	int *array = new int[128]();

	for(char &c : str1){		
		array[c]++;
	}

	for(char &c : str2){
		array[c]--;
		if(array[c] < 0){return false;}	
	}		
	return true;
}


int main(){
	Permutation per;
	string s1 = "hola";
	string s2 = "alhh";
	if(per.isPermutation(s1,s2)){
		cout << "yes" << endl;
	}else{
		cout << "no" << endl;
	}
}