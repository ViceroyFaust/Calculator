#include "mainFrame.h"

MainFrame::MainFrame() : wxFrame(nullptr, wxID_ANY, "Calculator") {
    zero = new wxButton(this, zeroButtonId, "0");
    one = new wxButton(this, oneButtonId, "1");
    two = new wxButton(this, twoButtonId, "2");
    three = new wxButton(this, threeButtonId, "3");
    four = new wxButton(this, fourButtonId, "4");
    five = new wxButton(this, fiveButtonId, "5");
    six = new wxButton(this, sixButtonId, "6");
    seven = new wxButton(this, sevenButtonId, "7");
    eight = new wxButton(this, eightButtonId, "8");
    nine = new wxButton(this, nineButtonId, "9");
    add = new wxButton(this, addButtonId, "+");
    subtract = new wxButton(this, subtractButtonId, "-");
    multiply = new wxButton(this, multiplyButtonId, "*");
    divide = new wxButton(this, divideButtonId, "/");
    decimal = new wxButton(this, decimalButtonId, ".");
    sign = new wxButton(this, signButtonId, "-/+");
    //enter = new wxButton(this, enterButtonId, "Enter");

    gsizer = new wxGridSizer(4, 4, 0, 0);
    gsizer->Add(seven, 1, wxEXPAND);
    gsizer->Add(eight, 1, wxEXPAND);
    gsizer->Add(nine, 1, wxEXPAND);
    gsizer->Add(add, 1, wxEXPAND);
    gsizer->Add(four, 1, wxEXPAND);
    gsizer->Add(five, 1, wxEXPAND);
    gsizer->Add(six, 1, wxEXPAND);
    gsizer->Add(subtract, 1, wxEXPAND);
    gsizer->Add(one, 1, wxEXPAND);
    gsizer->Add(two, 1, wxEXPAND);
    gsizer->Add(three, 1, wxEXPAND);
    gsizer->Add(multiply, 1, wxEXPAND);
    gsizer->Add(zero, 1, wxEXPAND);
    gsizer->Add(decimal, 1,wxEXPAND);
    gsizer->Add(sign, 1, wxEXPAND);
    gsizer->Add(divide, 1, wxEXPAND);

    this->SetSizerAndFit(gsizer);

}

MainFrame::~MainFrame() {}