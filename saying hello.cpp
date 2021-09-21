#include <iostream>

using namespace std;

int main()
{
    string name;

    cout << "What is your name?: " << endl;
    cin >> name;
    getline(cin, name);
    cout << "Hello," << name << ", nice to meet you! " << endl;
}
