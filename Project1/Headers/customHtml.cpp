#include "customHtml.h"
#include <iostream>

using namespace std;

CustomElement::CustomElement(string custom) : element(new string(custom)) {
	cout << "Custom Div Created" << endl;
}

void CustomElement::setElement(string type, string bodyP, string style) {
	*element = "<" + type + " style=\"" + style + "\">" + bodyP + "</" + type + ">";
}
string CustomElement::getElement() {
	return *element;
}

CustomElement::~CustomElement() {
	delete element;
}