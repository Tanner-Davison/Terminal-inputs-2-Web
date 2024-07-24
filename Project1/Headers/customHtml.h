#pragma once

#include <fmt/format.h>
using namespace fmt;
using namespace std;

class CustomDiv {
public:
	CustomDiv(string custom = "<div style=\"display:flex; align-items:center; justify-content:center;\">No custom text</div>");
	~CustomDiv();
	string getDiv();
	void setDiv(string type = "div", string bodyP = "", string style = "");
private:
	string* div;

};