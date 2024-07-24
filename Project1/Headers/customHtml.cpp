#include "customHtml.h"
#include <iostream>

using namespace std;

CustomDiv::CustomDiv(string custom) : div(new string(custom)) {
	cout << "Custom Div Created" << endl;
}


void CustomDiv::setDiv(string stringP) {
	*div = "<div>" + stringP + "</div>";
}
string CustomDiv::getDiv() {
	return *div;

}






CustomDiv::~CustomDiv() {
	delete div;
}