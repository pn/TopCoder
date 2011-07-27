
// {{{ Boilerplate Code <--------------------------------------------------
//
// vim:filetype=cpp foldmethod=marker foldmarker={{{,}}}

#include <string>
#include <vector>

using namespace std;

// }}}

class TrainingCamp
{
public:
	vector<string> determineSolvers(vector<string> attendance, vector<string> problemTopics)
	{
		vector<string> result;
		vector<string>::iterator it;
		for (it=attendance.begin(); it < attendance.end(); it++)
		{
			string studentResults = "";
			vector<string>::iterator it_topics;
			for (it_topics=problemTopics.begin(); it_topics < problemTopics.end(); it_topics++)
			{
				int i;
				char currentResult = 'X';
				for (i=0; i < (*it).size(); i++)
				{
					if ((*it_topics)[i] == 'X' && (*it)[i] != 'X')
					{
						currentResult = '-';
						break;
					}
				}
				studentResults += currentResult;
			}
			result.push_back(studentResults);
		}
		return result;
	}
};

