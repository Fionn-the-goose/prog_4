#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
	
	vector<unsigned int> vec;
	list<unsigned int> vec_list;

	for (int i = 0; i < 100; i++) {
		vec.push_back(rand() % 101);
	};

	copy(cbegin(vec), cend(vec), back_inserter(vec_list));

	auto iterator = vec_list.begin();
	for (int i = 1; i <= 10; i++) { iterator++; };

	copy(vec_list.begin(), iterator,
	ostream_iterator<unsigned int>(cout, "\n"));


	return 0;
}
