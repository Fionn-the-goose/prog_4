#define _USE_MATH_DEFINES
#include "window.hpp"
#include "circle.hpp"
#include <GLFW/glfw3.h>
#include <utility>
#include <cmath>
#include <set>
#include <map>
#include <iostream>

int main(int argc, char* argv[])
{
    Window fensterchen{ std::make_pair(1000,1000) };

    Circle c1{ {300.0f} , {500.0f, 450.0f} , {0.255f, 0.0f, 0.255f}, {"Marie"} };
    Circle c2{ {200.0f} , {500.0f, 350.0f} , {0.255f, 5.0f, 0.0f}, {"Jakob"} };
    Circle c3{ {160.0f} , {300.0f, 420.0f} , {0.0f, 0.0f, 0.255f}, {"Adrian"} };
    Circle c4{ {70.0f} , {400.0f, 370.0f} , {0.255f, 5.0f, 0.0f}, {"Sebastian"} };
    Circle c5{ {60.0f} , {50.0f, 430.0f} , {0.1f, 0.0f, 0.255f}, {"Luigi"} };
    Circle c6{ {29.0f} , {150.0f, 330.0f} , {0.255f, 0.9f, 12.0f}, {"Theresa"} };
    Circle c7{ {220.0f} , {250.0f, 310.0f} , {0.4f, 25.0f, 0.255f}, {"Fionn"} };
    Circle c8{ {150.0f} , {350.0f, 410.0f} , {0.122f, 0.7f, 0.0f}, {"Cake"} };
    Circle c9{ {190.0f} , {350.0f, 410.0f} , {0.122f, 0.7f, 0.0f}, {"Lea"} };
    Circle c10{ {12.0f} , {350.0f, 410.0f} , {0.122f, 0.7f, 0.0f}, {"Nico"} };
    Circle c11{ {350.0f} , {350.0f, 410.0f} , {0.122f, 0.7f, 0.0f}, {"Natuto"} };
    Circle c12{ {240.0f} , {350.0f, 410.0f} , {0.122f, 0.7f, 0.0f}, {"A"} };
    Circle c13{ {96.0f} , {350.0f, 410.0f} , {0.122f, 0.7f, 0.0f}, {"Der Pringelsmann"} };
    Circle c14{ {75.0f} , {350.0f, 410.0f} , {0.122f, 0.7f, 0.0f}, {"Gott"} };
    Circle c15{ {110.0f} , {350.0f, 410.0f} , {0.122f, 0.7f, 0.0f}, {"MrMcMonopoliemann"} };
    std::set<Circle> circles = { c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15};
    std::string input{};
    
    
    int counter_sec{ 0 };
    int counter_sec2{ 0 };
    float thicc{ 5.0 };
    float zeit{ 0.0f };
    float differenz = 0.0f;
    float differenz2 = 0.0f;
    float differenz_counter = 0.0f;


    while (!fensterchen.should_close()) {
        if (fensterchen.get_key(GLFW_KEY_ESCAPE) == GLFW_PRESS) {
            fensterchen.close();
        }

        auto t = fensterchen.get_time();
        bool left_pressed = fensterchen.get_mouse_button(GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS;
        
        int text_offset_x = 10;
        int text_offset_y = 5;
        unsigned int font_size = 35;

        std::string display_text = "time: " + std::to_string(t) + " " + std::to_string(counter_sec) + " " + std::to_string(counter_sec2);
        fensterchen.draw_text(text_offset_x, text_offset_y, font_size, display_text);
        
        if (left_pressed) {
            std::cout << "geben sie den zu Highlightenden Kreis an: ";
            std::cin >> input;
        }

        if (t - differenz >= counter_sec) {
            counter_sec++;
        }

        if (counter_sec == 10) {
            differenz = differenz + 10;
        }

        if (input != "") {
            if (t - differenz >= counter_sec2) {
                counter_sec2++;
            }
            if (counter_sec2 == 9) {
                input = "";
                counter_sec2 = 0;
            }
        }

        for (auto c : circles) {
            c.draw(fensterchen);
        }

        for (auto c : circles) {
            if (input == c.give_name()) {
                c.draw({ fensterchen }, { thicc }, { 0.0f, 0.0f, 0.0f });                          
            }
        }

        counter_sec = counter_sec % 10;
        fensterchen.update();
    }
    return 0;
}