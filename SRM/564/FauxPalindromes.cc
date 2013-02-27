
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

using namespace std;

// }}}

class FauxPalindromes
{
public:
    bool isPalindrome(const string& word)
    {
        for (int i=0; i < word.length()/2; ++i)
            if (word[i] != word[word.length()-1-i])
                return false;
        return true;
    }
	string classifyIt(string word)
	{
        if (isPalindrome(word))
            return "PALINDROME";
        string tmp;
        tmp += word[0];
        for (int i=1; i<word.length(); ++i)
            if (tmp[tmp.length()-1] != word[i])
                tmp += word[i];
        if (isPalindrome(tmp))
		    return "FAUX";
		return "NOT EVEN FAUX";
	}
};

