#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string a = "123 456 789";
    stringstream ss(a);
    int t;
    ss >> t;
    cout << t << endl;
    cout << ss.str() << endl;
}
