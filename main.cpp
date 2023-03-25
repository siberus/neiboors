#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int temp;
    vector<int> arr;
    bool flag = true;
    while (cin >> temp)
    {
        arr.push_back(temp);
        char c = cin.get();
        if (c == '\n')
            break;
    }

        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr.at(i) >= arr.at(i + 1)) {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES";
        }
        else
            cout << "NO";

    return 0;
}
