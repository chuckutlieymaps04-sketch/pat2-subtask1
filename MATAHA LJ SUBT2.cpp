#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string morseCode(char letter){
	switch(letter){
	case 'A': return".-";
	case 'B': return"-...";
	case 'C': return"-.-";
	case 'D': return"-..";
	case 'E': return".";
	case 'F': return"..-.";
	case 'G': return"--.";
	case 'H': return"....";
	case 'I': return"..";
	case 'J': return".---";
	case 'K': return"-.-";
	case 'L': return".-..";
	case 'M': return"--";
	case 'N': return"-.";
	case 'O': return"---";
	case 'P': return".--.";
	case 'Q': return"--.-";
	case 'R': return".-.";
	case 'S': return"...";
	case 'T': return"-";
	case 'U': return"..-";
	case 'V': return"...-";
	case 'W': return".--";
	case 'X': return"-..-";
	case 'Y': return"-.--";
	case 'Z': return"--..";
	
	default:return"";
	}
}
int main(){
	string message;
	string fullmessage= "";
	
	cout <<"Enter a message in English:"<<endl;
	cin>>message;
	
	cout<<endl;
	cout <<"Output Morse code:" <<endl;
	
	for(int i = 0;i <message.length();i++)
	{
	char ch = toupper(message[i]);
	
	if (ch>= 'A'&& ch<='Z')
	{
		string code = morseCode(ch);
		
		cout <<ch<<":" <<code<<endl;
		
		fullmessage =fullmessage + code +" ";
	}
  }
	cout <<endl;
	cout <<"Full Morse Code Message:"<<endl;
	cout <<fullmessage << endl;
	
 return 0;	
}