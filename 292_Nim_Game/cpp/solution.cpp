#include <iostream>
using namespace std;

class Solution {
public:
    bool canWinNim(int n) 
    {
        return !(n%4 == 0);
    }
};

int main()
{
	int testCase[] = {0, 1, 2, 4, 8, 9, 112, 439, 23234};
	Solution s;

	for (int i=0; i<9; i++) 
	{
		cout << "[" << testCase[i] << "]: " << s.canWinNim(testCase[i]) << endl;
	}

	return 0;
}
