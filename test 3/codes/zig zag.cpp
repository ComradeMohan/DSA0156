#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N = 7;
    vector<int> arr = {4, 3, 7, 8, 6, 2, 1};
  for (int i = 0; i < N - 1; i++) {
        if (i % 2 == 0) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }
        else {
            if (arr[i] < arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
    cout << "Zig-Zag rearranged array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
