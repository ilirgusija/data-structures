class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
};

class Tree {
public:
    TreeNode* root;
    TreeNode* left;

    int height;

    Tree(int height = -1, TreeNode* root = nullptr): height(height), root(root) {}
    bool isempty();
    bool isfull();
    TreeNode* find();
    void findparent();
    void printtree();
    void addnode();
    void insertnode();
    void deletenode();
    TreeNode* withdrawnode();
};

