#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to hold sentence and frequency
struct Sentence {
    string word;
    int freq;
};

// Comparator for sorting
bool compare(const Sentence &a, const Sentence &b) {
    if (a.freq == b.freq)
        return a.word < b.word;  // Lexicographical order
    return a.freq > b.freq;      // Higher frequency first
}

vector<string> result(string searchFor) {
    int const size = 4;
    string words[size] = {"i love you", "island", "i love geeksforgeeks", "ironman"};
    int occurence[size] = {5, 3, 2, 2};

    vector<Sentence> matched;

    // Finding matching sentences
    for (int i = 0; i < size; i++) {
        // Checking prefix match
        if (words[i].substr(0, searchFor.length()) == searchFor) {
            matched.push_back({words[i], occurence[i]});
        }
    }

    // Sorting the matched results
    sort(matched.begin(), matched.end(), compare);

    // Preparing the final top 3 results
    vector<string> top3;
    int limit = min(3, (int)matched.size());
    for (int i = 0; i < limit; i++) {
        top3.push_back(matched[i].word);
    }

    // Print the results
    for (const string &s : top3) {
        cout << s << " , ";
    }
    cout << endl;

    return top3;
}

int main() {
    // Call the result function for demonstration
    string search;
    cout << "Enter the value: ";
    getline(cin, search);  // Using getline to take the complete sentence including spaces
    result(search);
    return 0;
}
