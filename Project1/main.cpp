#include <iostream> 
#include <fmt/format.h>
#include <fmt/ranges.h>
#include <vector>
#include <fmt/chrono.h>
#include <fstream>
#include <windows.h>
#include <limits>
#include <fmt/os.h>
#include "Headers/customHtml.h"
using namespace std;
using namespace fmt;

#define END cout << "\n --end of program" << "\n";

void inputText(string* text) {
	string line;

	cout << "(type 'END' on a new line to finish): " << endl;

	while (true) {
		getline(cin, line);
		if (line == "END") {
			break;
		}
		*text += line + "\n";
	}
}

void createElement(string* element, string* customText, string* customStyle, CustomElement* elementObj) {
	cout << "Which element would you like to create?" << endl;
	cin >> *element;
	cout << "Create Inner Element/ Inner Text!" << endl;
	inputText(customText);
	cout << "Set your inline styles for the parent/main element." << endl;
	inputText(customStyle);
	cout << "element Created!" << endl;

	elementObj->setElement(*element, *customText, *customStyle);
}

void main() {
	CustomElement* ElementOne = new CustomElement{ "element One" };
	string* customText = new string;
	string* customStyle = new string;
	string* element = new string;

	cout << "PRAC: " << &customText << endl;
	boolean createEl = true;

	while (createEl) {
		string stillCreating;
		cout << "Do you want to Create a new Element? (YES/NO)" << endl;
		cin >> stillCreating;

		if (stillCreating == "YES" || stillCreating == "yes") {
			createElement(element, customText, customStyle, ElementOne);
		}
		else if (stillCreating == "NO" || stillCreating == "no") {
			cout << "Creation of Elements Done." << endl;
			createEl = false;
		}
		else {
			cout << "Unknown Command Please Try Again." << endl;
		}
	}



	print(ElementOne->getElement());

	vector<int> v = { 1, 2, 3 };
	print("{}\n", v);

	auto now = chrono::system_clock::now();

	print("Data and time: {}\n", now);
	print("Time: {:%H:%M}\n", now);


	auto out = output_file("guide.txt");
	out.print("Dont {}", "Panic");

	ofstream outFile("index.html");
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
	ShellExecuteA(NULL, "open", "index.html", NULL, NULL, SW_SHOWNORMAL);
	cout << "HTML file created and text written successfully." << endl;

	delete ElementOne;
	delete customText;
	delete customStyle;
	delete element;

	END;
	EXIT_SUCCESS;
}