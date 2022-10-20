#include <cstdio>
#include <fstream>
#include <iostream>
#include <vector>


using namespace std;
int main() {
    ifstream in_file("./input.txt");
    string line {};

    if (!in_file) {
        cout << "error reading file\n";
        return 1;
    }

    vector<int> v;

    while (getline(in_file, line))
        v.push_back(stoi(line));
    in_file.close();

    for (unsigned int i=0; i<v.size(); i++) {
        for (unsigned int j=i+1; j<v.size(); j++) {
            for (unsigned int k=j+1; k<v.size(); k++) {
                if (v[i] + v[j] + v[k] == 2020) {
                    cout << v[i] * v[j] * v[k] << endl;
                    return 0;
                }
            }
        }
    }

    cout << "did not find answer";
    return 0;
}

