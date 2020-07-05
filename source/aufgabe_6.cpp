#define CATCH_CONFIG_RUNNER
#include"catch.hpp"
#include"Circle.hpp"
#include<iostream>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<algorithm>

using namespace std;	

	Circle c1{ 3.5 };
	Circle c2{ 2.7 };
	Circle c3{ 1.0 };
	Circle c4{ 9.8 };
	Circle c5{ 74.1 };
	Circle c6{ 2.7 };
	Circle c7{ 5.3 };
	list<Circle> sorted_circles{ c1, c2, c3, c4, c5, c6, c7 };
	list<Circle> sorted_circles2{ c1, c2, c3, c4, c5, c6, c7 };

class Funktor {
public:
	bool operator()(Circle const& c1, Circle const& c2) {
		return c1 < c2;
	};
};

TEST_CASE("Aufgabe 4.6", "[aufgabe_6]")
{
	auto sorting_lambda = [](Circle const& c1, Circle const& c2)->bool {return c1 < c2; };
	sorted_circles.sort(sorting_lambda);
	sorted_circles2.sort(Funktor{});
	REQUIRE(is_sorted(sorted_circles.begin(), sorted_circles.end()));
	REQUIRE(is_sorted(sorted_circles2.begin(), sorted_circles2.end()));
};

int main(int argc, char* argv[]) 
{
	return Catch::Session().run(argc, argv);
}