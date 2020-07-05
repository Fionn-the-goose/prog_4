#include <cstdlib> // std::rand()
#include <vector> // std::vector<>
#include <list> // std::list<> 
#include <iostream> // std::cout 
#include <iterator> // std::ostream_iterator<>
#include <algorithm> // std::reverse, std::generate

using namespace std;

int main() {
	vector<int> v_0(10);						//Legt einen Vector mit 10 Pl�tzen fest, namens v_0

	for (auto& v : v_0) {						//generiert 10 zufallszahlen die in den Vector eingef�gt werden
		v = rand();								//v iteriert durch jedes element des vectors, rand() generiert zufallszahlen
	}

	cout << "Der Vector v_0 :" << endl;
	copy(cbegin(v_0), cend(v_0),				//copy() kopiert die spanne des vectors, cbegin() und cend() gibt const iteratoren auf das erste und letzte element von v_0 zur�ck (spannt ihn sozusagen auf)
	ostream_iterator<int>(cout, "\n"));			//gibt f�r die kopierte spanne, jeweils das int an der stelle des Iterators aus.
	cout << endl;								//lehrzeile zur �bersicht

	list<int> l_0(cbegin(v_0), cend(v_0));		//erstellt eine liste der spanne von v_0 mit den elemnten von v_0
	list<int> l_1(cbegin(l_0), cend(l_0));		//f�gt die elemnte aus l_0 in die neue liste l_1 ein
	reverse(begin(l_1), end(l_1));				//der name sagt es schon, es dreht die elemnte von l_1 um. in dem es wieder durch iteriert

	cout << "Die Liste l_1 :" << endl;
	copy(cbegin(l_1), cend(l_1),				//wie ber dem vector gibt uns das hier l_1 auf der konsole aus
	ostream_iterator<int>(cout, "\n"));
	cout << endl;

	l_1.sort();									//nutzt die std sort funktion und sortiert die elemente aus l_2

	cout << "Die Liste l_1 aber sortiert :" << endl;	
	copy(l_1.cbegin(), l_1.cend(),				//printet uns die sortierte liste l_1 auf der konsole aus
	ostream_iterator<int>(cout, "\n"));
	cout << endl;

	generate(begin(v_0), end(v_0), rand);		//generiert f�r die spanne von v_0 neue random elemente und �berschreibt v_0
	
	cout << "Der neu Vector v_0 :" << endl;
	copy(v_0.crbegin(), v_0.crend(),			//crbegin() und crend() gibt einen const reverense iterator vom ersten und letzten Element vom �berschriebenen v_0 zur�ck
	ostream_iterator<int>(cout, "\n"));

	return 0;
}