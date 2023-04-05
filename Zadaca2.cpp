#include <iostream>
#include <vector>
#include <algorithm>

bool areAnagrams(const std::string& s1, const std::string& s2) {
    if (s1.size() != s2.size()) {
        return false;
    }
    std::vector<int> counts(26, 0);
    for (char c : s1) {
        ++counts[c - 'a'];
    }
    for (char c : s2) {
        --counts[c - 'a'];
    }
    return std::all_of(counts.begin(), counts.end(), [](int count) {
        return count == 0;
    });
}

int main() {
    std::string s1, s2;
    std::cout << "Enter two words: ";
    std::cin >> s1 >> s2;
    if (areAnagrams(s1, s2)) {
        std::cout << s1 << " and " << s2 << " are anagrams." << std::endl;
    } else {
        std::cout << s1 << " and " << s2 << " are not anagrams." << std::endl;
    }
    return 0;
}
