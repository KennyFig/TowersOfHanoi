#include <iostream>
using namespace std;
static int NUM = 6; //Static number for calculating the other rod's number
void towerOfHanoi(int n, int fromRod, int toRod) {
    if (n <= 0 || fromRod < 0 || toRod < 0) return; //Exit the function if there are no more disks or if the number assigned to the rod is invalid
    if(n == 1) {
        cout << "Move disk " << n << " from rod " << fromRod << " to rod " << toRod << endl; // Moves top disk
    } else {
        int otherRod = NUM - fromRod - toRod; //Calculate the other rod's number
        towerOfHanoi(n-1, fromRod,  otherRod); //Move top disk from fromRod to otherRod
        cout << "Move disk " << n << " from rod " << fromRod << " to rod " << toRod << endl; //print out moving the disk
        towerOfHanoi(n-1, otherRod, toRod); //Move top disk from otherRod to toRod
    }
}
int main() {
    towerOfHanoi(3, 1, 3);
    return 0; 
}