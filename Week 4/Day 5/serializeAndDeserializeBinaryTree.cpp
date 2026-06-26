class Codec {
public:
    // Serialize
    void preorder(TreeNode* root, string &s) {
        if (root == nullptr) {
            s += "#,";
            return;
        }

        s += to_string(root->val) + ",";
        preorder(root->left, s);
        preorder(root->right, s);
    }

    string serialize(TreeNode* root) {
        string s;
        preorder(root, s);
        return s;
    }

    // Deserialize
    TreeNode* buildTree(stringstream &ss) {
        string val;
        getline(ss, val, ',');

        if (val == "#")
            return nullptr;

        TreeNode* root = new TreeNode(stoi(val));
        root->left = buildTree(ss);
        root->right = buildTree(ss);

        return root;
    }

    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return buildTree(ss);
    }
};