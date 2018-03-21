#include <bits/stdc++.h>

using namespace std;


class Unique{
	public:
		bool uniqueCharacter(string strg);
};


bool Unique::uniqueCharacter(string strg){
	int size = strg.length();
	bitset<256> array;
	for(int i = 0; i < size; i++){		
		if(array[strg[i]] == 1){
			return false;
		}
		array[strg[i]] = 1;
	}
	return true;
}


int main(){
	Unique character;
	string chain = "qwertyuiopasdfghjklzxcvbnma";
	if(character.uniqueCharacter(chain)){
		cout << "This string: " << chain << " is unique";
	}else{
		cout << "This string: " << chain << " is not unique";
	}

}