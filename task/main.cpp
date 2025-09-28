#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>    

using namespace std;

int main() {
    int NumberOfLaptops = 0;
    int Capital = 0;
    int total;

    cout << "Enter number of laptops you can buy: ";
    cin >> NumberOfLaptops;

    cout << "Enter your  capital: ";
    cin >> Capital;

    cout << "Enter your total number of laptops: ";
    cin >> total;

    vector<int> profits;
    cout << "Enter array of profits: " << endl;
    for (int i = 0; i < total; i++) {
        int k;
        cin >> k;
        profits.push_back(k);
    }

    vector<int> prices;
    cout << "Enter array prices:" << endl;
    for (int i = 0; i < total; i++) {
        int k;
        cin >> k;
        prices.push_back(k);
    }

    vector<pair<int, int>> laptops;
    for (size_t i = 0; i < profits.size(); ++i) {
        laptops.push_back(pair<int, int>(prices[i], profits[i]));
    }


    sort(laptops.begin(), laptops.end());


    priority_queue<int> currProfits;

    int indx = 0;


    for (int i = 0; i < NumberOfLaptops; ++i) {
        while (indx < laptops.size() && laptops[indx].first <= Capital) {
            currProfits.push(laptops[indx].second);
            indx++;
        }

        if (currProfits.empty()) break;

        Capital += currProfits.top();
        currProfits.pop();
    }

    cout << "-------------------------------------------------" << endl;
    cout << "Final capital = " << Capital << endl;

    return 0;
}


