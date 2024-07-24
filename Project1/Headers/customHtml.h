#pragma once

#include <fmt/format.h>
using namespace fmt;
using namespace std;

class CustomDiv {
public:
	CustomDiv(string custom = "<div>No custom text</div>");
	~CustomDiv();
	string getDiv();
	void setDiv(string stringP);
private:
	string* div;

};