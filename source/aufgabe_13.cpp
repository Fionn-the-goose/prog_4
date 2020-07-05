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
    Window fensterchen{ std::make_pair(800,800) };

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

    while (!fensterchen.should_close()) {
        if (fensterchen.get_key(GLFW_KEY_ESCAPE) == GLFW_PRESS) {
            fensterchen.close();
        }

        c1.draw(fensterchen);

        for (auto const& c : circles){
            c.draw( fensterchen );
        }

        fensterchen.update();
    }

    return 0;
}