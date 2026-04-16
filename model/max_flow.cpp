#include <iostream>
using namespace std;

int main() {
    int minCapacity = 16;
    int maxCapacity = 19;

    cout << "=== MAX FLOW MODEL ===\n";
    cout << "Evacuation Capacity per Trip: "
         << minCapacity << " to " << maxCapacity << " persons\n";

    cout << "Interpretation:\n";
    cout << "This represents the maximum number of evacuees\n";
    cout << "that can be transported per cycle.\n";

    cout << "\nBottleneck: Transportation capacity\n";

    return 0;
}
