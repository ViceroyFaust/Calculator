#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <wx/wx.h>

enum ButtonId {
    // Number Buttons
    ZeroButtonId = wxID_LAST + 1,
    OneButtonId,
    TwoButtonId,
    ThreeButtonId,
    FourButtonId,
    FiveButtonId,
    SixButtonId,
    SevenButtonId,
    EightButtonId,
    NineButtonId,
    // Operation Buttons
    AddButtonId,
    SubtractButtonId,
    MultiplyButtonId,
    DivideButtonId,
    // Misc Buttons
    decimalButtonId,
    signButtonId
};

class MainFrame : public wxFrame {
private:
public:

wxButton* zero, one, two, three, four, five, six, seven, eight, nine,
    add, subtract, multiply, divide, decimal, sign;

MainFrame();
~MainFrame();

};


#endif