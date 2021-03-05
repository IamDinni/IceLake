#include <iostream>

using namespace std;
 
int greyConverter(int n) { 
    return n ^ (n >> 1); 
}
 
int main()
{
    int n = 9;
    cout << greyConverter(n) << endl;
 
    return 0;
}