/*You are given a number N. You have to find the number of operations required to reach N from 0. You have 2 operations available:

Double the number
Add one to the number

Example:
Input:
2
8
7
Input:
4
5

Explanation:
Testcase1:
Input  : N = 8
Output : 4
0 + 1 = 1, 1 + 1 = 2, 2 * 2 = 4, 4 * 2 = 8
Testcase2:
Input  : N = 7
Output : 5
0 + 1 = 1, 1 + 1 = 2, 1 + 2 = 3, 3 * 2 = 6, 6 + 1 = 7*/


// this is simple greedy question since we have to minimize the operation 
// for these question ....greedy.....we only see the best solution at each step not like dynamic overall
// these questions can easily solved by taking in reverse


#include <iostream>
using namespace std;

int main() {
	
	int t; cin>>t; while(t--)
	{
	    int n; cin>>n;
	    
	    int count=0;
	    while(n)
	    {
	        if(n%2==0)
	        {n=n/2; count++;}
	        else
	        {n=n-1; count++;}
	    }
	
	cout<<count<<endl;
	}
	return 0;
}
 
