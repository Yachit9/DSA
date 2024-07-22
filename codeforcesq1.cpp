//Q1 only pluses
// Kmes has written three integers a
// , b
//  and c
//  in order to remember that he has to give Noobish_Monk a×b×c
//  bananas.

// Noobish_Monk has found these integers and decided to do the following at most 5
//  times:

// pick one of these integers;
// increase it by 1
// .
// For example, if a=2
// , b=3
//  and c=4
// , then one can increase a
//  three times by one and increase b
//  two times. After that a=5
// , b=5
// , c=4
// . Then the total number of bananas will be 5×5×4=100
// .

// What is the maximum value of a×b×c
//  Noobish_Monk can achieve with these operations?

#include <iostream>
#include <vector>
#include <algorithm>  

using namespace std;

void processTestCase(int a, int b, int c) {
    for (int i = 0; i < 5; i++) {
        int mini = min({a, b, c});  

        if (mini == a) a++;
        else if (mini == b) b++;
        else if (mini == c) c++;
    }

    int result = a * b * c;  
    cout << result << endl;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        processTestCase(a, b, c);
    }

    return 0;
}
