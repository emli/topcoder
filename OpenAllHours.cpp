#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


class OpenAllHours {
public:
	string verify(int N, vector <string> openingTime, vector <string> closingTime) {

	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.4 (beta) modified by pivanof
bool KawigiEdit_RunTest(int testNum, int p0, vector <string> p1, vector <string> p2, bool hasAnswer, string p3) {
	cout << "Test " << testNum << ": [" << p0 << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p1[i] << "\"";
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p2.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p2[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	OpenAllHours *obj;
	string answer;
	obj = new OpenAllHours();
	clock_t startTime = clock();
	answer = obj->verify(p0, p1, p2);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p3 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
	if (hasAnswer) {
		res = answer == p3;
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	all_right = true;
	
	int p0;
	vector <string> p1;
	vector <string> p2;
	string p3;
	
	{
	// ----- test 0 -----
	p0 = 2;
	string t1[] = {"04:47","16:47"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	string t2[] = {"16:47","04:47"};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = "correct";
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 3;
	string t1[] = {"03:00","18:30","08:59"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	string t2[] = {"09:00","04:15","19:01"};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = "correct";
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 3;
	string t1[] = {"03:47","03:48","03:49"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	string t2[] = {"03:44","03:45","03:46"};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = "incorrect";
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 1;
	string t1[] = {"05:00"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	string t2[] = {"04:59"};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = "incorrect";
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 6;
	string t1[] = {"01:08","12:46","23:28","20:30","19:02","06:41"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	string t2[] = {"05:56","18:53","02:29","23:26","23:57","08:44"};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = "incorrect";
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = 7;
	string t1[] = {"01:12","11:23","12:23","13:05","18:26","08:37","22:08"};
			p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
	string t2[] = {"03:21","13:04","22:16","21:46","08:19","10:17","13:01"};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	p3 = "correct";
	all_right = KawigiEdit_RunTest(5, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!
