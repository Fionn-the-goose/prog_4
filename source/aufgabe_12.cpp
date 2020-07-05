#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

bool is_even(int n) { return n % 2 == 0; };

template<typename T>
vector<T> filter(vector<T> vec, bool bedingung(T)){
	vector<T> tmp;
	copy_if(vec.begin(), vec.end(), back_inserter(tmp), bedingung);
	return tmp;
}

TEST_CASE("soll testen ob der filter gut funktioniert", "[aufgabe_12]") {
	vector<int> v{ 1, 2, 3, 4, 5, 6 };
	vector<int> all_even = filter(v, is_even);

	REQUIRE(all_of(all_even.begin(), all_even.end(), is_even));
}

int main(int argc, char* argv[]) {
	return Catch::Session().run(argc, argv);
}