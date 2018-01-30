//Welcome to the most robust Hello World program ever
#include<iostream>
			#include<cstdlib>
#include<cmath>
		#include<string>
using namespace std;


//checks the string is in fact Hello World
bool is_hello_world(string the_string){
	const string hw = "hello world";

if(hw.length() == the_string.length()){
for(int i = 0; i < the_string.length(); i++){
if(the_string[i] != hw[i]){
return false;
}
								}
}
			return true;
}


							string hello_world(string s){

string hello_worlds = "";
if(is_hello_world(s)){
	for(int i = 0; i < s.length(); i++){
hello_worlds +=s[i];
}
	}
			return hello_worlds;
}


	int main(){

				string s = "hello world";
	cout << hello_world(s) << endl;



}
