#include <algorithm>
#include <bit>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	if ("0x" == s.substr(0, 2)) {
		auto iss = istringstream{ s.substr(2) };
		int x;
		iss >> hex >> x;

		cout << dec << x;
	}
	else if ('0' == s[0]) {
		auto iss = istringstream{ s.substr(1) };
		int x;
		iss >> oct >> x;

		cout << dec << x;
	}
	else {
		cout << s;
	}

	return 0;
}