#include "settings.h"

class comp_mouse {
public:

    string type;
    string color;
    string maker;
    string model;
    bool RGB;
    bool additional_buttons;

    void scroll() {
        cout << "mouse wheel is scrolling\n";
    }
    void RGB_on() {
        cout << "backlight on\n";
    }
    void RGB_off() {
        cout << "backlight off\n";
    }
    void slide() {
        cout << "mouse is sliding\n";
    }
    void not_slide() {
        cout << "mouse isn't sliding\n";
    }
    void pc_connected() {
        cout << "the mouse is connected to the computer\n";
    }
    void pc_unconnected() {
        cout << "the mouse isn't connected to the computer\n";
    }
};

class mousepad {
public:

    string type;
    string color;
    bool pattern;
    bool is_whole;
    bool is_wet;
    bool is_ontable;

    void on_table() {
        if (is_ontable) {
            cout << "the mouse pad is on the table\n";
        }
        else {
            cout << "the mouse pad isn't on the table\n";
        }
    }
    void in_wash() {
        cout << "the mouse pad in the wash\n";
    }
    void whole() {
        cout << "the mouse pad is whole\n";
    }
    void torn() {
        cout << "the mouse pad is torn\n";
    }
    void actual_condition() {
        if (is_whole == false) {
            cout << "the mouse pad has reached the end of its useful life, it's time to buy a new one\n";
        }
        else {
            cout << "the mouse pad is still useful\n";
        }
    }
};

class machete {
public:

    string type;
    string handle_color;
    string blade_color;
    bool machete_teeth;
    bool is_sharpened;
    bool is_clean;

    void chop(mousepad& k) {
        cout << "machete chops the " << k.type << "\n";
        k.is_whole = false;
    }
    void cut(comp_mouse m) {
        cout << "machete cuts the " << m.type << "\n";
    }
    void blunt() {
        cout << "the blade is blunt\n";
    }
    void sharpened() {
        cout << "the blade is sharpened\n";
    }
    void stuck() {
        cout << "the machete is stuck\n";
    }
};

int main()
{
    comp_mouse m;
    m.type = "mouse";
    m.additional_buttons = true;
    m.color = "black";
    m.maker = "Razer";
    m.model = "Bacilisk V2";
    m.RGB = true;

    machete r;
    r.type = "machete";
    r.blade_color = "gold";
    r.handle_color = "black";
    r.is_clean = true;
    r.is_sharpened = true;
    r.machete_teeth = false;

    mousepad k;
    k.type = "mouse pad";
    k.color = "black";
    k.is_ontable = true;
    k.is_wet = false;
    k.is_whole = true;
    k.pattern = true;

    k.actual_condition();
    r.chop(k);
    k.actual_condition();
    r.cut(m);
    m.pc_unconnected();
    Sleep(INFINITE);
}