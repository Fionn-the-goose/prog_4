# ifndef CIRCLE_HPP
# define CIRCLE_HPP
#include "color.hpp"
#include "vec2.hpp"
#include "window.hpp"
#include "mat2.hpp"
#include <iostream>
#include <string>

class Circle
{
public:
    Circle();
    Circle(float const& r);
    Circle(float const& r, Vec2 const& base, Color const& rgb);
    Circle(float const& r, Vec2 const& base, Color const& rgb, std::string name);
    float circumfence() const;  //const wird verwendet da 
    void draw(Window const& fensterchen);
    void draw(Window const& fensterchen, float t);
    bool is_inside(Vec2 const& Point)const;
    float give_r();
private:
    float r_{1.0f};
    Vec2 base_{};
    Color rgb_{};  
    std::string name_{};
};

bool operator< (Circle c1, Circle c2);
bool operator> (Circle c1, Circle c2);
bool operator== (Circle c1, Circle c2);

# endif