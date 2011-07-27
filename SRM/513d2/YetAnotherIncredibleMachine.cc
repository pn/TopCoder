
// {{{ Boilerplate Code <--------------------------------------------------
//
// vim:filetype=cpp foldmethod=marker foldmarker={{{,}}}

#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

// }}}

class YetAnotherIncredibleMachine
{
public:
	int countWays(vector<int> platformMount, vector<int> platformLength, vector<int> balls)
	{
		const int modulo = 1000000009;
		long long result = 1;
		sort(balls.begin(), balls.end());
		vector<int>::iterator it;
		int i;
		for (i=0; i < platformMount.size(); i++)
		{
			int moves = 0;
			int left = platformMount[i] - platformLength[i];
			int right = platformMount[i] + platformLength[i];
			int j;
			for (j=0; j < balls.size(); j++)
			{
				if (balls[j] < left)
					continue;
				if (balls[j] > right)
					break;
				if (balls[j] < platformMount[i])
					left = balls[j]+1;
				else if (balls[j] > platformMount[i])
				{
					right = balls[j]-1;
					break;
				}
				else
					return 0;
			}
			if (right - left >= platformLength[i])
				moves = right - left - platformLength[i] + 1;
			else
				return 0;
			result = (result * moves) % modulo;
		}
		return result;
	}
};

