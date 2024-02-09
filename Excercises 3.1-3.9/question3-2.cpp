


#include <iostream>
#include <algorithm>

using namespace std;

const int NUM_AGENTS = 3;
const int NUM_MONTHS = 12;

int sales[NUM_AGENTS][NUM_MONTHS] = {
    {1856, 498, 30924, 87478, 328, 2653, 387, 3754, 387587, 2873, 276, 32},
    {5865, 5456, 3983, 6464, 9957, 4785, 3875, 3838, 4959, 1122, 7766, 2534},
    {23, 55, 67, 99, 265, 376, 232, 223, 4546, 564, 4544, 3434}
};

double monthlyAverage(const int agentIndex) {
    double salesTotal = 0;
    for (int month = 0; month < NUM_MONTHS; ++month) {
        salesTotal += sales[agentIndex][month];
    }
    return salesTotal / NUM_MONTHS;
}

int median(const int agentIndex) {
    vector<int> monthlySales(sales[agentIndex], sales[agentIndex] + NUM_MONTHS);
    sort(monthlySales.begin(), monthlySales.end());
    return monthlySales[NUM_MONTHS / 2];
}

int main() {
    int monthlyAgent = 0;
    double bestAverage = monthlyAverage(0);
    for (int agent = 1; agent < NUM_AGENTS; ++agent) {
        double currentAverage = monthlyAverage(agent);
        if (currentAverage > bestAverage) {
            monthlyAgent = agent;
            bestAverage = currentAverage;
        }
    }
    cout << "Best sales average per agent: " << monthlyAgent + 1 << endl;

    int agentHighestMedian = 0;
    int highestMedian = median(0);
    for (int agent = 1; agent < NUM_AGENTS; ++agent) {
        int currentMedian = median(agent);
        if (currentMedian > highestMedian) {
            agentHighestMedian = agent;
            highestMedian = currentMedian;
        }
    }
     cout << "Highest median sales per agent: " << agentHighestMedian + 1 << endl;

    return 0;
}
  


 
