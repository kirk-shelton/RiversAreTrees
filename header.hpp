// /*
// Name: Group 13
// Class: CPSC223, Fall 2024
// Date: December 8, 2024
// Programming Assignment: Project 2
// Description: 
// */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Represents a dam with attributes for its size and year of construction
class Dam {
public:
    string name;    // Name of the dam
    int yearBuilt;  // Year the dam was constructed

    Dam(const string& n, int y);
    void displayInfo() const;
};

// Represents a node in the binary tree, storing information about a water body
struct TreeNode {
    string name;             // Name of the tributary
    string parent;           // Parent tributary
    float flowRate;          // Average flow rate in cubic meters per second
    vector<Dam> dams;        // Dams associated with the tributary
    TreeNode* left;          // Pointer to the left child
    TreeNode* right;         // Pointer to the right child

    TreeNode(const string& n, float f);
    void addDam(const Dam& dam);
    void displayNode() const;
};

TreeNode* insertNode(TreeNode* root, const string& parent, const string& name, float flowRate, const vector<Dam>& dams);
TreeNode* buildTreeFromCSV(const string& filename);
void deleteNode(TreeNode*& root, const std::string& name);
TreeNode* navigateToChild(TreeNode* root, const std::string& childName);
void traverseTree(TreeNode* root);
void exploreTree(TreeNode* root);
void displayTree(TreeNode* root);
#endif // HEADER_HPP

