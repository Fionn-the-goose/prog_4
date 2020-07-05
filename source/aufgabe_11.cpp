#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;
vector<int> v_1{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
vector<int> v_2{ 9, 8, 7, 6, 5, 4, 3, 2, 1 };
vector<int> v_3 (9);

bool is_10(int value) { return value == 10; }

TEST_CASE("überprüft ob alle elemente 10 sind", "[aufgabe_11]"){
	auto lambda = [](int const& a, int const& b) -> int { return a + b; };
	std::transform(v_1.begin(), v_1.end(), v_2.begin(), v_3.begin(), lambda);
	REQUIRE(all_of(v_3.begin(), v_3.end(), is_10));
}

int main(int argc, char* argv[]) {
	return Catch::Session().run(argc, argv);
}