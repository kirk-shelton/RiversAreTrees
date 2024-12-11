#include "unitTest.hpp"
#include "header.hpp"
#include <cassert>

void testInsertNode() {
    TreeNode* root = nullptr;
    root = insertNode(root, "", "Root", 1000, std::vector<Dam>{{"Root Dam", 1950}});
    assert(root != nullptr && "Root should not be null after insertion");

    TreeNode* child = insertNode(root, "Root", "Child", 500, std::vector<Dam>{{"Child Dam", 1960}});
    assert(root->left == child && "Child should be the left node of root");

    cout << "testInsertNode passed." << endl;
}

void testBuildTreeFromCSV() {
    TreeNode* root = buildTreeFromCSV("testdata.csv");
    assert(root != nullptr && "Tree should be built from CSV");
    assert(root->name == "Columbia" && "Root should be 'Columbia'");

    cout << "testBuildTreeFromCSV passed." << endl;
}

void testDeleteNode() {
    TreeNode* root = new TreeNode("Node", 1000);
    root->left = new TreeNode("Left", 500);
    root->right = new TreeNode("Right", 500);

    deleteNode(root, "Child");
    assert(root->left == nullptr && "Left node should be deleted");

    cout << "testDeleteNode passed." << endl;
}

void testNavigateTree() {
    TreeNode* root = new TreeNode("Root", 1000);
    root->left = new TreeNode("Left", 500);
    root->right = new TreeNode("Right", 500);

    TreeNode* result = navigateToChild(root, "Right");
    assert(result == root->right && "Should navigate to right child");

    cout << "testNavigateTree passed." << endl;
}

void testDisplayNode() {
    TreeNode* node = new TreeNode("Test", 100);
    node->addDam(Dam("Test Dam", 2020));
    node->displayNode();  // Output is manually verified for now

    cout << "testDisplayNode passed." << endl;
}

int main() {
    testDeleteNode();
    return 0;
}
