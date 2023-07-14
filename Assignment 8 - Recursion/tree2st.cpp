#include <iostream>
#include <string>

using namespace std;

// Definition of TreeNode (please define this structure or class)

// Function to convert a binary tree to string representation
string tree2str(TreeNode* root) {
    string ans = to_string(root->val);
    if (root->left) //left side check
        ans += "(" + tree2str(root->left) + ")";
    if (root->right) { //right side check
        if (!root->left)
            ans += "()"; //left side not present, but right side present
        ans += "(" + tree2str(root->right) + ")";
    }
    return ans;
}

int main() {
    // Create a binary tree (please define your tree structure here)

    // Call the tree2str function and print the output
    TreeNode* root = "4(2(3)(1))(6(5))";
    string result = tree2str(root);
    cout << "String representation of the binary tree: " << result << endl;

    return 0;
}
