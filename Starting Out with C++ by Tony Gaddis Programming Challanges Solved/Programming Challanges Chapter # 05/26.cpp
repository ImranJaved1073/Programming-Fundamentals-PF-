#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ofstream file;
	string name, desc;
	file.open("random.html");
	cout << "Enter your name:";
	getline(cin, name);
	cout << "Describe yourself:";
	getline(cin, desc);

	file << "<html>\n";
	file << "<head>\n";
	file << "</head>\n";
	file << "<body>\n";
	file << "<center>\n";
	file << "<h1>" << name << "</h1>\n";
	file << "</center>\n";
	file << "<hr />" << desc << "<hr />" ;
	file << "</body>\n";
	file << "<html>";
}
