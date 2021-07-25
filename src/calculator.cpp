#include <gtkmm.h>

class CalculatorWindow : public Gtk::Window {
    public:
        CalculatorWindow();
};

CalculatorWindow::CalculatorWindow() {
    set_title("Basic application");
    set_default_size(200, 200);
}

int main(int argc, char* argv[]) {

}
