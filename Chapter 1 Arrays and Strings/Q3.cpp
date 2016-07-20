//Given two strings, write a method to decide if one is a permutation of the other.

//Immediate question is: are equal strings considered a permutation?
//I am going to go with no

#include <unordered_map>

bool isPermutation(string s1, string s2){
	if(s1==s2) return false; //could just switch to true if above is wrong
	if(s1.length()!=s2.length()) return false;
	if(s1.length()==0) return false; //assume empty string has no permutations
	
	//to easily do this in O(n) just track character occurences
	//utilize a hashtable for this
	unordered_map<char, int> map1;
	unordered_map<char, int> map2;
	for(int i=0; i<s1.length(); i++){
		char c = s1[i];
		if(map1.find(c)==map1.end()){ //not found
			//we can input it as first found
			map1[c]=1;
		} else {
			map1[c]=map1[c]+1;
		}
	}
	
	for(int i=0; i<s2.length(); i++){
		char c = s2[i];
		if(map2.find(c)==map2.end()){ //not found
			//we can input it as first found
			map2[c]=1;
		} else {
			map2[c]=map2[c]+1;
		}
	}
	
	//now we can compare
	for(auto k : map1){ //iterate over map
		if(map2[k.first]!=k.second) return false;
	}
	
	return true;
}

//works well for all tested values
//- "test" "sett"	true
//- "test" "set"	false
//- "test" "sets"	false
//- "test" ""		false
//and more...