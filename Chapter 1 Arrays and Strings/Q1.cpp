//Implement an algorithm to determine if a string has all unique characters. What
//if you cannot use additional data structures?

//first iteration is a brute force method
//this runs at O(n^2) which is not good at all
bool isStringCharUnique(string s){
	int len = s.length;
	for(int x=0; x<len; x++){
		char c = s[x];
		for(int y=x+1; y<len; y++){
			if(c==s[y]){
				return false;
			}
		}
	}
	return true;
}

//HAND WRITTEN ANALYSIS
//if len=0 than no for loops will run and returns true
//-ideally would clarify whether any empty string is considered unique or not
//would also need to consider NULL case which I forgot
//-> if(s==NULL) return true/false; depending on wanted functionality

//COMPILED ANALYSIS
//int len = s.length; should be s.length()
//something that would need further clarification is if capital and lower case are
//considered equal characters. If not then this works, if so then we would require
//a conversion from upper to lower or vice versa

//I cant think of an alternative that doesnt utilize any new data structures


//Provided solution notes:
//-early optimization if length exceeds all possible chars (ie. 26x2 letters) return false
//-apparantly saying "cannot use additional data structures" does not mean language provided structures...
//--ideally would clarify that as well
//--easy to track with flags if thats the case and can achieve O(n)