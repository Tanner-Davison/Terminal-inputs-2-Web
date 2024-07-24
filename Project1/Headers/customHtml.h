#pragma once

#include <fmt/format.h>
using namespace fmt;
using namespace std;

class CustomElement {
public:
	CustomElement(string custom = "<div style=\"display:flex; align-items:center; justify-content:center;\">No custom text</div>");
	~CustomElement();
	string getElement();
	void setElement(string type = "div", string bodyP = "", string style = "");
private:
	string* element;

};