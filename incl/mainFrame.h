#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <wx/wx.h>

enum ButtonId {
    // Number Buttons
    zeroButtonId = wxID_LAST + 1,
    oneButtonId,
    twoButtonId,
    threeButtonId,
    fourButtonId,
    fiveButtonId,
    sixButtonId,
    sevenButtonId,
    eightButtonId,
    nineButtonId,
    // Operation Buttons
    addButtonId,
    subtractButtonId,
    multiplyButtonId,
    divideButtonId,
    // Misc Buttons
    decimalButtonId,
    signButtonId,
    enterButtonId
};

class MainFrame : public wxFrame {
private:
public:
MainFrame();
~MainFrame();

wxButton* zero;
wxButton* one;
wxButton* two;
wxButton* three;
wxButton* four;
wxButton* five;
wxButton* six;
wxButton* seven;
wxButton* eight;
wxButton* nine;
wxButton* add;
wxButton* subtract;
wxButton* multiply;
wxButton* divide;
wxButton* decimal;
wxButton* sign;
//wxButton* enter;

wxGridSizer* gsizer;


};


#endif