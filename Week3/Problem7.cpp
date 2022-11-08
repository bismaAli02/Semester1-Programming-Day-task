#include <iostream>
using namespace std;
main()
{
    int size, cost, area;
    float costpp, costpa;
    cout << "Enter the size of bag of fertilizer in pounds: ";
    cin >> size;
    cout << "Enter the cost of bag: ";
    cin >> cost;
    cout << "Enter the area in square feet that can be covered by the bag: ";
    cin >> area;
    costpp = (cost * 1.0) / (size * 1.0);
    costpa = (cost * 1.0) / (area * 1.0);
    cout << "The cost of fertilizer per pound is: " << costpp << endl;
    cout << "The cost of fertilizing the area per square foot is: " << costpa << endl;
}
