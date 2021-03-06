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


class SyllableCountEstimator {
public:
	int estimate(const string& w) {
	    int ans = 0;
		for(char x : w){
		    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
		        ans++;
		    }
		}

        for (int i = 0; i < w.size(); ++i) {
            if(w.substr(i,2) == "au" || w.substr(i,2) == "oa" || w.substr(i,2) == "oo" || w.substr(i,3) == "iou" ){
                ans--;
            }
        }

        if (w.back() == 'e'){
            ans--;
        }

        int len = w.size();
        if (w.size() >= 3 && w[len - 2] == 'l' && w[len - 1] == 'e' && w[len - 3] != 'a' && w[len - 3] != 'e'
        && w[len - 3] != 'i' && w[len - 3] != 'o' && w[len - 3] != 'u'){
            ans++;
        }
        if (ans < 1){
            ans = 1;
        }
        return ans;
	}
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.4 (beta) modified by pivanof
bool KawigiEdit_RunTest(int testNum, string p0, bool hasAnswer, int p1) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"";
	cout << "]" << endl;
	SyllableCountEstimator *obj;
	int answer;
	obj = new SyllableCountEstimator();
	clock_t startTime = clock();
	answer = obj->estimate(p0);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p1 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p1;
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
	
	string p0;
	int p1;
	
	{
	// ----- test 0 -----
	p0 = "potato";
	p1 = 3;
	all_right = KawigiEdit_RunTest(0, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = "haul";
	p1 = 1;
	all_right = KawigiEdit_RunTest(1, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = "gooooooal";
	p1 = 1;
	all_right = KawigiEdit_RunTest(2, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = "rhythm";
	p1 = 1;
	all_right = KawigiEdit_RunTest(3, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = "e";
	p1 = 1;
	all_right = KawigiEdit_RunTest(4, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = "le";
	p1 = 1;
	all_right = KawigiEdit_RunTest(5, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 6 -----
	p0 = "various";
	p1 = 3;
	all_right = KawigiEdit_RunTest(6, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 7 -----
	p0 = "queued";
	p1 = 4;
	all_right = KawigiEdit_RunTest(7, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 8 -----
	p0 = "qwertyuiopasdfghjkl";
	p1 = 5;
	all_right = KawigiEdit_RunTest(8, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 9 -----
	p0 = "participle";
	p1 = 4;
	all_right = KawigiEdit_RunTest(9, p0, true, p1) && all_right;
	// ------------------
	}
	
	{
	// ----- test 10 -----
	p0 = "ukulele";
	p1 = 3;
	all_right = KawigiEdit_RunTest(10, p0, true, p1) && all_right;
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
