#include <iostream>
#include <vector>

using namespace std; 

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {

    vector <int> result;
    int wordCounter = 0;

    for (auto i = queries.begin(); i != queries.end(); ++i)
    {
        wordCounter = 0;

        for (auto j = strings.begin(); j != strings.end(); ++j)
            if (*i == *j)  wordCounter++;

        result.push_back(wordCounter);
    }
    return result;
}
