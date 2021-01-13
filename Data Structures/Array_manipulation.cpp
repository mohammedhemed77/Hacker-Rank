#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
 
using namespace std;

long arrayManipulation(int n, vector<vector<int>> queries) {

    vector <int> manipulatedArr(n, 0);

    int k = 0, a = 0, b = 0;
    for (auto it : manipulatedArr) cout << it << " ";
        cout << endl;

        for (auto q : queries)
        {
            if (q.size() > 2)
            {
                a = (*q.begin());
                b = (*(q.begin() + 1));
                k = (*(q.begin() + 2));

                // update inner for loop size in the run time 
                for (int index = a; index <= b; index++)
                {
                    manipulatedArr[index - 1] += k;
                }

                for (auto it : manipulatedArr) cout << it << " ";
                cout << endl;

            }
        }
    long int result = (int)*max_element(manipulatedArr.begin(), manipulatedArr.end());
    return result;
}

int main()
{

    
    vector < vector <int >> v1 = 
    {   
        {10 ,3},
        { 1,5 ,3},
        { 4,8,7},
        { 6,9,1},
    };

        
    long int l = arrayManipulation (10,v1); 
    cout << "max Element =" << l << endl;
    system("pause");
    return 0;
}
