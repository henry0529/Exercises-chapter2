

#include <iostream>
#include <unordered_map>

using namespace std;

int mode(int array[], int size) {
    unordered_map<int, int> freqencyMap;
    
    for (int i = 0; i < size; ++i) {
        freqencyMap[array[i]]++;
    }
        int modeNumber = array[0]; 
        int maxFreqency = freqencyMap[array[0]]; 
    for (auto& pair : freqencyMap) {
        if (pair.second > maxFreqency) {
            modeNumber = pair.first;
            maxFreqency = pair.second;
        }
    }
    return modeNumber;
}

int main() {
    int nums[] = {11, 12, 13, 14, 15, 16, 17, 17, 17, 18, 19, 20, 20, 20, 20};
    
        int size = sizeof(nums) / sizeof(nums[0]);
        int result = mode(nums, size);
            cout << "Mode: " << result << endl;
    
    return 0;
}