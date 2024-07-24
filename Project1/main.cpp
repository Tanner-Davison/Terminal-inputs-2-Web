#include <iostream> 
#include <fmt/format.h>
#include <fmt/ranges.h>
#include <vector>
#include <fmt/chrono.h>
#include <fstream>
#include <windows.h>
#include <fmt/os.h>
#include "Headers/customHtml.h"
using namespace std;
using namespace fmt;

#define END cout << "\n --end of program" << "\n";

void inputText(string* text) {
	string line;

	cout << "Enter your text (type 'END' on a new line to finish):" << endl;

	while (true) {
		getline(cin, line);
		if (line == "END") {
			break;
		}
		*text += line + "\n";
	}
}

void main() {
	CustomElement* ElementOne = new CustomElement;
	string* customText = new string;
	string* customStyle = new string;
	string* element = new string;

	cout << "What element would you like to create?" << endl;

	getline(cin, *element);

	cout << "set custom text" << endl;

	getline(cin, *customText);

	cout << "set styles" << endl;

	inputText(customStyle);

	ElementOne->setElement(*element, *customText, *customStyle);

	print(ElementOne->getElement());

	vector<int> v = { 1, 2, 3 };
	print("{}\n", v);

	auto now = chrono::system_clock::now();
	print("Data and time: {}\n", now);
	print("Time: {:%H:%M}\n", now);


	auto out = output_file("guide.txt");
	out.print("Dont {}", "Panic");

	ofstream outFile("example.html");
	if (!outFile) {
		cerr << "Error: could not create the file" << "\n";
		EXIT_SUCCESS;
	}

	outFile << "<!DOCTYPE html>\n"
		<< "<html lang=\"en\">\n"
		<< "<head>\n"
		<< "<meta charset=\"UTF-8\">\n"
		<< "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
		<< "<title>Document</title>\n"
		<< "</head>\n"
		<< "<body>\n"
		<< ElementOne->getElement()
		<< "</body>\n"
		<< "</html>\n";

	outFile.close();
	ShellExecuteA(NULL, "open", "example.html", NULL, NULL, SW_SHOWNORMAL);
	cout << "HTML file created and text written successfully." << endl;

	delete ElementOne;
	delete customText;
	delete customStyle;
	delete element;
	END;
	EXIT_SUCCESS;
}