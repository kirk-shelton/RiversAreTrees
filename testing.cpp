#include "unitTest.hpp"

int main() {
    testBuildTreeFromCSV();
    testInsertNode();
    testDeleteNode();
    testSearchNode();
    testNavigateNode();
    testDisplayNode();

    cout << "All tests passed successfully!" << endl;
    return 0;
}