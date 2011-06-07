
// {{{ Boilerplate Code <--------------------------------------------------
//
// vim:filetype=cpp foldmethod=marker foldmarker={{{,}}}

#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>

#define FOR(I,A,B)	for(int I = (A); I < (B); ++I)
#define REP(I,N)	FOR(I,0,N)
#define ALL(A)		(A).begin(), (A).end()

using namespace std;

// }}}

class CubeStickers
{
public:
	long long hashColor(string s) {
		long long result = 0;
		REP(i, s.length()) {
			unsigned char c = s[i];
			result <<= 5;
			result |= c;
		}
		return result;
	}
	string isPossible(vector<string> sticker)
	{
		vector<long long> first_choosen, second_choosen;
		REP(i, sticker.size()) {
			long long hash_sticker = hashColor(sticker[i]);
			bool needsAdding = true;
			REP(j, first_choosen.size()) {
				if (first_choosen[j] == hash_sticker) {
					REP(k, second_choosen.size()) {
						if(second_choosen[k] == hash_sticker) {
							needsAdding = false;
							break;
						}
					}
					if(needsAdding) {
						second_choosen.push_back(hash_sticker);
						needsAdding = false;
					}
					break;
				}
			}
			if(needsAdding)
				first_choosen.push_back(hash_sticker);
			if(first_choosen.size() + second_choosen.size() == 6)
				return "YES";
		}
		return "NO";
	}
};

