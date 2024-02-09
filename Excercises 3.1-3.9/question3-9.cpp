
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

const int NUMBER_AGENTS = 3;
const int NUMBER_MONTHS = 12;

double highestSalesAverage(int sales[NUMBER_AGENTS][NUMBER_MONTHS]) {
    double highestAverage = 0.0;

    for (int i = 0; i < NUMBER_AGENTS; ++i) {
        int totalSales = 0;
        int numberMonths = 0;

        for (int j = 0; j < NUMBER_MONTHS; ++j) {
            if (sales[i][j] != -1) {
                totalSales += sales[i][j];
                ++numberMonths;
            }
        }
        if (numberMonths > 0) {
            double average = static_cast<double>(totalSales) / numberMonths;
            highestAverage = max(highestAverage, average);
        }
    }
    return highestAverage;
}

int main() {
    int sales[NUMBER_AGENTS][NUMBER_MONTHS] = {
        {1856, 498, 30924, 87478, 328, 2653, 387, 3754, 387587, 2873, 276, 32},
        {5865, 5456, 3983, 6464, 9957, 4785, 3875, 3838, 4959, 1122, 7766, -1},
        {23, 55, 67, 99, 265, 376, 232, 223, 4546, 564, 4544, -1}
    };

    double highestAverage = highestSalesAverage(sales);
    cout << "Highest Sales Average is: " << highestAverage << endl;

    return 0;
}