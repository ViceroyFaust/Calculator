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
    mod = new wxButton(this, modButtonId, "mod");
    roll = new wxButton(this, rollButtonId, "roll");
    swap = new wxButton(this, swapButtonId, "swap");
    pop = new wxButton(this, popButtonId, "pop");

    decimal = new wxButton(this, decimalButtonId, ".");
    sign = new wxButton(this, signButtonId, "-/+");
    enter = new wxButton(this, enterButtonId, "Enter");
    back = new wxButton(this, backButtonId, "<-");
    clear = new wxButton(this, clearButtonId, "C");
    clearAll = new wxButton(this, clearAllButtonId, "AC");

    operationSizer = new wxBoxSizer(wxVERTICAL);
    operationSizer->Add(back, 1, wxEXPAND);
    operationSizer->Add(clear, 1, wxEXPAND);
    operationSizer->Add(clearAll, 1, wxEXPAND);
    operationSizer->Add(enter, 2, wxEXPAND);

    numpadSizer = new wxGridSizer(5, 4, 0, 0);
    numpadSizer->Add(roll, 1, wxEXPAND);
    numpadSizer->Add(swap, 1, wxEXPAND);
    numpadSizer->Add(pop, 1, wxEXPAND);
    numpadSizer->Add(mod, 1, wxEXPAND);
    numpadSizer->Add(seven, 1, wxEXPAND);
    numpadSizer->Add(eight, 1, wxEXPAND);
    numpadSizer->Add(nine, 1, wxEXPAND);
    numpadSizer->Add(add, 1, wxEXPAND);
    numpadSizer->Add(four, 1, wxEXPAND);
    numpadSizer->Add(five, 1, wxEXPAND);
    numpadSizer->Add(six, 1, wxEXPAND);
    numpadSizer->Add(subtract, 1, wxEXPAND);
    numpadSizer->Add(one, 1, wxEXPAND);
    numpadSizer->Add(two, 1, wxEXPAND);
    numpadSizer->Add(three, 1, wxEXPAND);
    numpadSizer->Add(multiply, 1, wxEXPAND);
    numpadSizer->Add(zero, 1, wxEXPAND);
    numpadSizer->Add(decimal, 1,wxEXPAND);
    numpadSizer->Add(sign, 1, wxEXPAND);
    numpadSizer->Add(divide, 1, wxEXPAND);

    parentSizer = new wxBoxSizer(wxHORIZONTAL);
    parentSizer->Add(numpadSizer, 3, wxEXPAND);
    parentSizer->Add(operationSizer, 1, wxEXPAND);

    this->SetSizerAndFit(parentSizer);

}

MainFrame::~MainFrame() {}