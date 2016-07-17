//Implement a function void reverse(char* str) in C or C++ which reverses a nullterminated
//string.

char* reverseString(char* str){
	int len = strlen(str);//this required looking up
	char *t = new char[len+1]; //+1 for null terminator
	for(int i=0; i<len; i++){
		t[i] = str[len - 1 -i];
	}
	t[len]='\0'; //this char is the null terminator
	return t;
}

//HAND WRITTEN ANALYSIS
//relatively straightforward implementation, dont think its feasible
//to get better than O(n)
//the key to this hinges on knowing about strlen, from there
//you can easily traverse the char pointer in reverse

//COMPILED
//works for simple cases as well as empty


//Provided solution was essentially the same except they did it in-place
//instead of using space for a second str