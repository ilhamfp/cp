/*
    At the end of a busy day, The Chef and his assistants play a game together. The game is not just for fun but also used to decide who will have to clean the kitchen. The Chef is a Game Master, so his concern is how to manage the game but not how to win the game like his assistants do.

    The game requires players to find the only ball under one of the N cups after their positions are changed in a special way. At the beginning of the game, The Chef places N cups in a row and put a ball under the C-th cup from the left (the cups are numbered from 1 to N). All players can see the initial position of the ball. Then Chef performs Q flip operations. Each flip operation is defined by two integers L and R such that 1 ≤ L ≤ R ≤ N and consists in reversing the segment [L, R] of cups. Namely, Chef swaps L-th and R-th cups, (L+1)-th and (R−1)-th cups, and so on. After performing all the operations Chef asks his assistants to choose a cup that they think the ball is under it. Who can guess the position of the ball will win the game, and of course, the others will have to clean the kitchen.

    The Chef doesn't want to check all the N cups at the end of the game. He notes down the value of C and the pairs (L, R) and asked you, the mastered programmer, to determine the cup that contains the ball.

    Input
    The first line of the input contains a single integer T, denoting the number of test cases. The description of T test cases follows. The first line of each test case contains three space-separated integers N, C and Q, denoting the total number of cups, the initial position of the ball and the number of flip operations Chef will perform. Each of the following Q lines contains two space-separated integers L and R, denoting the ends of the segment of the current flip operation.

    Output
    For each test case output on a separate line the final position of the ball.

    Constraints
    1 ≤ T ≤ 10
    1 ≤ N ≤ 100000 (105)
    1 ≤ C ≤ N
    1 ≤ Q ≤ 10000 (104)
    1 ≤ L ≤ R ≤ N
    Example
    Input:
    1
    5 2 3
    1 4
    3 5
    1 5

    Output:
    1
    Explanation
    The row of cups at the beginning of the game and after each flip is shown below. Here '-' means an empty cup and 'B' is the cup that hides the ball, the segment of flip is marked bold.


    -B---
    --B--
    ----B
    B----
*/


#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c,q;
        cin>>n>>c>>q;
        for (int i = 0; i < q; ++i)
        {
            int l,r;
            cin>>l>>r;
            if (c>=l && c<=r)
            {
                int dif1 = c-l;
                int dif2 = r-c;
                if (dif1<dif2)
                {
                    c = r-dif1;
                } else if (dif2<dif1){
                    c = l+dif2;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
