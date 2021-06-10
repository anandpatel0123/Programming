#include <bits/stdc++.h>
using namespace std;
string ltrim(const string &);
string rtrim(const string &);

vector<string> mostActive(vector<string> customers) {
    map<string, int> m;
    vector<string> res;
    for(auto c : customers) {
        auto iter = m.find(c);
        if(iter == m.end()) m[c] = 1;
        else m[c]++;
    }
    for(auto iter = m.begin(); iter != m.end(); advance(iter, 1)) {
        double percent = (double)iter->second / customers.size();
        if(percent >= 0.05) res.push_back(iter->first);
    }
    sort(res.begin(), res.end());
    return res;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    string customers_count_temp;
    getline(cin, customers_count_temp);
    int customers_count = stoi(ltrim(rtrim(customers_count_temp)));
    vector<string> customers(customers_count);
    for (int i = 0; i < customers_count; i++) {
        string customers_item;
        getline(cin, customers_item);
        customers[i] = customers_item;
    }
    vector<string> result = mostActive(customers);
    for (int i = 0; i < result.size(); i++) {
        fout << result[i];
        if (i != result.size() - 1) {
            fout << "\n";
        }
    }
    fout << "\n";
    fout.close();
    return 0;
}
