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

void main() {
	CustomDiv* divOne = new CustomDiv;
	string* customText = new string;

	cout << "set custom text" << endl;
	getline(cin, *customText);

	divOne->setDiv(*customText);
	print(divOne->getDiv());

	//printing containers
	vector<int> v = { 1, 2, 3 };
	print("{}\n", v);

	//printing current data and time;
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
		<< divOne->getDiv()
		<< "</body>\n"
		<< "</html>\n";

	outFile.close();
	ShellExecuteA(NULL, "open", "example.html", NULL, NULL, SW_SHOWNORMAL);
	cout << "HTML file created and text written successfully." << endl;
	delete divOne;
	delete customText;

	END;
	EXIT_SUCCESS;
}