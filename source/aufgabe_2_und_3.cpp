#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

void printVec(vector<unsigned int> vec) {
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
}

void printMap(map<unsigned int, int> mp) {
	for (int i = 0; i < mp.size(); i++) {
		int value = i;
		cout << value << " : " << mp[i] << endl;
	}
}


int main(int argc, char* argv[])
{
	vector<unsigned int> vec;
	for (int i = 0; i < 100; i++) {
		vec.push_back(rand() % 101);
	};
	printVec(vec);
	
	set<unsigned int> no_doubles;
	for (int i = 0; i < vec.size(); i++) {
		no_doubles.insert(vec[i]);
	};

	cout << endl;
	cout << "so viele verschiedene Zahlen befinden sich im vector: " << no_doubles.size() << endl << endl;
	cout << "these numbers are not in the container:" << endl << "{ ";

	for (int i = 1; i < vec.size(); i++) {
		auto iterator = no_doubles.find(i);
		if (iterator == no_doubles.end()) {
			cout << i << " ";
		}
	};
	cout << "}" << endl << endl;

	map< unsigned int, int> commonness;
	for (auto& iterator : vec) {
		commonness[iterator] +=1;
	};

	printMap(commonness);

	return 0;
}