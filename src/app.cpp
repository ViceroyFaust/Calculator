#include "app.h"

wxIMPLEMENT_APP(CalculatorApp);

bool CalculatorApp::OnInit() {
    m_frame1 = new MainFrame();
    m_frame1->Show();
    wxPuts(wxT("App Initialized"));
    return true;
}
