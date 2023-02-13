#include <iostream>
#include <string>
using namespace std;

void borderLine() {
	cout << "\n=========================================================================================================\n";
}
//=================================================---СТРОКИ---========================================================
void delLetter(string &string1Ref, int &indexSymbolRef) {
	string1Ref.erase(indexSymbolRef, 1);
	cout << "String with deleted characters: " << string1Ref << endl;
}
//------------------------------------------------------------------------
void delSymbol(string &strRef, char &symbolRef) {
	strRef.erase(remove(strRef.begin(), strRef.end(), symbolRef), strRef.end());
	cout << "String with deleted sumbols: " << strRef << endl;
}
//------------------------------------------------------------------------
void isertSymbol(string &str1Ref, string &chRef, int &iRef) {
	str1Ref.insert(iRef, chRef);
	cout << "String after, len of new string " << str1Ref.length() << ": " << str1Ref << endl;
}
//------------------------------------------------------------------------
void replacingTheSymbol(string &str2Ref) {
	for (int i = 0; i <= str2Ref.length(); i++)
	{
		if (str2Ref[i] == '.') {
			str2Ref[i] = '!';
		}
	}
	cout << "String after, replacing the symbol '.' with '!' " << str2Ref.length() << ": " << str2Ref << endl;
}

int main()
{
	//===============================================---СТРОКИ---==========================================================
	string string1;
	string &string1Ref = string1;
	cout << "Enter string: ";
	cin >> string1Ref;
	int indexSymbol;
	int &indexSymbolRef = indexSymbol;
	cout << "Enter index, number of characters per line "<< string1Ref.length() << ": ";
	cin >> indexSymbolRef;
	delLetter(string1Ref, indexSymbolRef);
	
	borderLine();//------------------------------------------------------------------------

	string str;
	string &strRef = str;
	cout << "Enter string: ";
	cin >> strRef;
	cout << "String before: " << strRef << endl;
	char symbol;
	char &symbolRef = symbol;
	cout << "Enter sumbol: ";
	cin >> symbolRef;
	delSymbol(strRef, symbolRef);
	
	
	borderLine();//------------------------------------------------------------------------

	string str1;
	string &str1Ref = str1;
	cout << "Enter string: ";
	cin >> str1Ref;
	cout << "String before, len of string " << str1Ref.length() << ": " << str1Ref << endl;
	string ch;
	string &chRef = ch;
	cout << "Enter letter: ";
	cin >> chRef;
	int i = 0;
	int &iRef = i;
	cout << "Enter index: ";
	cin >> iRef;
	isertSymbol(str1Ref, chRef, iRef);

	borderLine();//------------------------------------------------------------------------

	string str2;
	string &str2Ref = str2;
	cout << "Enter string: ";
	cin >> str2Ref;
	cout << "String before, len of string " << str2Ref.length() << ": " << str2Ref << endl;
	replacingTheSymbol(str2Ref);

	borderLine();//------------------------------------------------------------------------

	string str3;
	string& str3Ref = str3;
	cout << "Enter string: ";
	cin >> str3Ref;
	char smb;
	char& smbRef = smb;
	int count = 0;
	cout << "Which symbol to look for: ";
	cin >> smbRef;
	for (int i = 0; i < str3Ref.length(); i++)
	{
		if (str3Ref[i] == smbRef) {
			count++;
		}
	}
		cout << "number of characters " << smbRef << " per line " << ": " << count << endl;
}
			
		
	


