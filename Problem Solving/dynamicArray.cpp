#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




/*
 * Complete the 'dynamicArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    
    int x = 0, y = 0, seqIndex = 0;
    int lastAnswer = 0;

    
    vector<vector<int>> seqList(n);

    // create vector and initialize it with zeros 
    vector<int> result ;
    
    for (auto seq : queries)
    {
        if (seq.size() >2)
        {
            x = *(seq.begin() + 1);
            y = *(seq.begin() + 2);

            if (*(seq.begin()) == 1)
            {
                seqIndex = (x ^ lastAnswer) % n;
                // append y value 
                seqList[seqIndex].push_back(y);
            }
            else
            {
                seqIndex = (x ^ lastAnswer) % n;
                lastAnswer = seqList.at(seqIndex).at((y % seqList[seqIndex].size()));
                result.push_back(lastAnswer);
            }


        }
    }
    return result;
}

int main() {
    
    vector <int> v2;
    vector < vector <int> > v1 = {
        {2 ,5},
        {1,0,5 },
        {1 ,1 ,7},
        {1 ,0 ,3},
        {2 ,1 ,0},
        {2 ,1, 1},
        
    };
    v2 = dynamicArray(2,v1);

    for (auto it = v2.begin(); it != v2.end(); ++it) 
    {
        cout << *it << endl; 
    }
}



