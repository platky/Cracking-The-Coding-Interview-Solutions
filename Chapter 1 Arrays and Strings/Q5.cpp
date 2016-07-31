/*Implement a method to perform basic string compression using the counts
of repeated characters. For example, the string aabcccccaaa would become
a2blc5a3. If the "compressed" string would not become smaller than the original
string, your method should return the original string.*/

string simpleCompression(string s){
	string t="";
	char cur = 0; //best way to represent empty char
	int count =0;
	for(int i=0; i<s.size(); i++){
		if(cur==0){
			cur=s[i];
			count++;
		} else if(s[i]==cur){
			count++;
		} else {
			t+=cur+to_string(count);
			count=1;
			cur=s[i];
		}
	}
	t+=cur+to_string(count);
	if(t.size()<s.size()){
		return t;
	} else {
		return s;
	}
}

//compression runs in O(n) where n is length of the string.