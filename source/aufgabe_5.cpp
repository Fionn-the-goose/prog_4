#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "circle.cpp"
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

list<Circle> sorted_circles;

Circle c1{3.5};
Circle c2{2.7};
Circle c3{1.0};
Circle c4{9.8};
Circle c5{74.1};
Circle c6{2.7};
Circle c7{5.3};

TEST_CASE("Vec2 Aufgabe 2.2", "[vec2]")
{
	sorted_circles.push_back(c1);
	sorted_circles.push_back(c2);
	sorted_circles.push_back(c3);
	sorted_circles.push_back(c4);
	sorted_circles.push_back(c5);
	sorted_circles.push_back(c6);
	sorted_circles.push_back(c7);
	sorted_circles.sort();
	REQUIRE(is_sorted(sorted_circles.begin(), sorted_circles.end()));
}

int main(int argc, char* argv[])
{
	return 0;
}