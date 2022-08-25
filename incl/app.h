#ifndef APP_H
#define APP_H

#include <wx/wx.h>
#include <mainFrame.h>

class CalculatorApp : public wxApp {
private:
    MainFrame* m_frame1;
public:
    virtual bool OnInit();

};

#endif