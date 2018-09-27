#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string toMorse(string, string[]);

string toMorse(string text, string morse[]) {
	string morsevalue;
	string letterSpace = "  ";
	string wordSpace = "   ";

	for (int k = 0; text[k]; k++) {
		if (text[k] != ' ') {
			text[k] = toupper(text[k]);
			letterSpace += morse[text[k] - 'A'] + " ";
			morsevalue = letterSpace;
		}
		if (text[k] == ' ') {
			letterSpace += letterSpace;
		}
	}

	return morsevalue;
}

int main() {

	char alpha[] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	string morse[] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
	string text, morsecode;
	string repeat = "yes";
	string question;

	cout << "Are you ready?" << endl;
	cin >> question;
	cout << "Let's go mazafaka!" << endl << endl;

	while (repeat == "yes") {
		cout << "Decode :  " ;
		cin.get();
		getline(cin, text);
		cout << "Your text : " << text << endl;
		cout << "Morse code : " << toMorse(text, morse) << endl << endl;

		cout << "Do you want to try more?" << endl ;
		cout << "yes/no" << endl;
		cin >> repeat;
		cout << endl;
	}

	return 0;
}