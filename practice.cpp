#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int count;
    vector <pair<int,string>> human;
    cin >> count;
    for (int i = 0; i < count; ++i) {
        string name;
        int age;
        cin >> name >> age;
        human.push_back({age, name});
    }
    sort(human.begin(), human.end());
    reverse(human.begin(), human.end());
    for (const auto& i : human) {
        cout << i.second << endl;
    }
}