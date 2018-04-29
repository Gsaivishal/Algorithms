#include <vector>
#include <map>
#include <iostream>
using namespace std;
#define ul unsigned long int

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ul T; cin >> T;
	for (auto t = 0; t < T; ++t)
	{
		ul m = 0, n = 0;
		multimap<ul, ul> myMap;
		vector<ul> vecValues;

		cin >> m >> n;

		for (auto idx = 1; idx <= n; ++idx)
		{
			ul tempFirst = 0; cin >> tempFirst;
			if (tempFirst <= m)
			{
				myMap.emplace(tempFirst, idx);
				vecValues.push_back(tempFirst);
			}
		}

		for (auto &vec:vecValues)
		{
			multimap<ul, ul>::const_iterator current = myMap.find(vec);
			ul curr_value = current->first;
			ul id = current->second;
			ul diff = m - curr_value;

			myMap.erase(current);

			multimap<ul, ul>::const_iterator gett_id2 = myMap.find(diff);
			if ((gett_id2 != myMap.cend()) && (gett_id2->first + curr_value == m))
			{
				cout << id << " " << gett_id2->second << endl;
				break;
			}
		}
	}
	return 0;
}
