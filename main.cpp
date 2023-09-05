#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// 1.2.4 АЛГОРИТМЫ sort и reverse

int main() {
    vector<int> numbers = {5, 12, 254, 32345, 1, 0, -2, 921,22};
    // sort сортирует указанный контейнер или обычный массив по возрастанию
    sort(numbers.begin(), numbers.end());
    for (int i : numbers) {
        cout << i << endl;
    }

    vector<string> some_string = {"aue"s, "sex"s, "pistol"s, "bee"s, "zoo", "counts"s};
    sort(some_string.begin(), some_string.end());
     for (const auto& i: some_string) {
        cout << i << endl;
    }

    vector<pair<int,string>> number_names = {{5, "John"s}, {2, "Millisa"s}, {1, "Oleg"s}, {3, "Chuperka"s}, {4, "Madness"s}};
    sort(number_names.begin(), number_names.end());
    for (const auto& i : number_names) {
        cout << i.first << " " << i.second << endl;
    }
}