#include <iostream>
using namespace std;
static int NUM_OF_RODS = 3;
void towerOfHanoi(int n, int fromRod, int toRod) {
    if (n <= 0 || fromRod < 0 || toRod < 0) return;
    if(n == 1) {
        cout << "Move disk from rod " << fromRod << " to rod " << toRod << endl;
    } else {
        int otherRod = NUM_OF_RODS - fromRod - toRod;
        towerOfHanoi(n-1, fromRod,  otherRod);
        cout << "Move disk from rod " << fromRod << " to rod " << toRod << endl;
        towerOfHanoi(n-1, otherRod, toRod);
    }
}
int main() {
    towerOfHanoi(4, 0, 2);
    return 0;
}