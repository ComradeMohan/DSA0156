#include <iostream>
#include <unordered_map>
using namespace std;
void EXTRA_ELE(int A[], int B[], int N) {
    unordered_map<int, int> elementCount;
    for (int i = 0; i < N; i++) {
        elementCount[B[i]]++;
    }
    for (int i = 0; i <= N; i++) {
        if (elementCount[A[i]] == 0) {
            cout << "The extra element in Array A is: " << A[i] << endl;
            return;
        } else {
            elementCount[A[i]]--; 
        }
    }
}
int main() {
    int A[] = {14, 21, 5, 19, 8, 4, 23, 11};
    int B[] = {23, 8, 19, 4, 14, 11, 5};    
    int N = sizeof(B) / sizeof(B[0]);
    EXTRA_ELE(A, B, N);

    return 0;
}