struct TrieNode {
    TrieNode* children[26] = {nullptr};
    bool is_end = false;
};

class StreamChecker {
private:
    TrieNode* root;
    string stream;

    void insert(const string& word) {
        TrieNode* curr = root;
        for (int i = word.length() - 1; i >= 0; --i) {
            int idx = word[i] - 'a';
            if (!curr->children[idx]) {
                curr->children[idx] = new TrieNode();
            }
            curr = curr->children[idx];
        }
        curr->is_end = true;
    }

public:
    StreamChecker(vector<string>& words) {
        root = new TrieNode();
        stream = "";
        for (const string& word : words) {
            insert(word);
        }
    }

    bool query(char letter) {
        stream += letter;
        TrieNode* curr = root;
        for (int i = stream.length() - 1; i >= 0; --i) {
            int idx = stream[i] - 'a';
            if (!curr->children[idx]) {
                return false;
            }
            curr = curr->children[idx];
            if (curr->is_end) {
                return true;
            }
        }
        return false;
    }
};
