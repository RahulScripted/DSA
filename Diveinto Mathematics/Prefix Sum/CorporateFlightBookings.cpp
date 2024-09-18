// There are n flights that are labeled from 1 to n.You are given an array of flight bookings bookings, where bookings[i] = [firsti, lasti, seatsi] represents a booking for flights firsti through lasti (inclusive) with seatsi seats reserved for each flight in the range. Return an array answer of length n, where answer[i] is the total number of seats reserved for flight i.



#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>result(n,0);

        // Calculating boarding 
        for(int i = 0;i < bookings.size();i++){
            result[bookings[i][0] - 1] += bookings[i][2];

            if(bookings[i][1] < n) result[bookings[i][1]] -= bookings[i][2]; 
        }

        // Prefix Sum
        for(int i = 1;i < n;i++){
            result[i] += result[i - 1];
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> bookings1 = {{1, 2, 10}, {2, 3, 20}, {2, 5, 25}};
    vector<vector<int>> bookings2 = {{1, 2, 10}, {2, 2, 15}};

    int n1 = 5;
    int n2 = 2;

    vector<int> result1 = sol.corpFlightBookings(bookings1, n1);
    vector<int> result2 = sol.corpFlightBookings(bookings2, n2);

    cout << "Flight bookings result: ";
    for (int seats : result1) {
        cout << seats << " ";
    }
    cout << endl;

    cout << "Flight bookings result: ";
    for (int seats : result2) {
        cout << seats << " ";
    }
    cout << endl;

    return 0;
}