// were a given a string s and have two container post and pre 
// we can perform 2 operation on them 
// 1.remove the first charachter of post and append to pre 
// 2.remove the last character of pre and append it to post 

// using all charcter od s and pre return a lexicographically smaller string 
// write code for getMinimalString and return lexicographically smaller string

#include <iostream>
#include <string>

std::string getMinimalPostString(const std::string& s) {
    std::string pre;   // This simulates the "pre" string
    std::string post;  // The final "post" string
    int i = 0;         // Pointer to iterate over the string s
    int n = s.size();  // Size of the input string

    while (i < n || !pre.empty()) {
        // If pre is not empty and the last character of pre is smaller or equal to the next character in s, move it to post
        if (!pre.empty() && (i >= n || pre.back() <= s[i])) {
            post.push_back(pre.back());  // Remove last character from pre
            pre.pop_back();
        }
        // Otherwise, move the next character from s to pre
        else if (i < n) {
            pre.push_back(s[i]);  // Move first character of s to pre
            i++;
        }
    }

    return post;
}

int main() {
    std::string s = "acdb";
    std::string result = getMinimalPostString(s);
    std::cout << result << std::endl;  // Expected Output: "abdc"
    return 0;
}
