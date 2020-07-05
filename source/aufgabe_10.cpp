#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

bool is_multiple_of_3(unsigned int value) {
	return value % 3 == 0;
}

bool is_not_multiple_of_3(unsigned int value) {
	return value % 3 != 0;
}

TEST_CASE("filter alle vielfache von drei", "[erase]"){
	vector<unsigned int> v;
	for (int i = 0; i < 100; i++) {
		v.push_back(rand() % 101);
	};

	v.erase(remove_if(v.begin(), v.end(), is_not_multiple_of_3), v.end());
	REQUIRE(all_of(v.begin(), v.end(), is_multiple_of_3));
}

int main(int argc, char* argv[]) {
	return Catch::Session().run(argc, argv);
}