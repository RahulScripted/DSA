// The school cafeteria offers circular and square sandwiches at lunch break, referred to by numbers 0 and 1 respectively. All students stand in a queue. Each student either prefers square or circular sandwiches.

// The number of sandwiches in the cafeteria is equal to the number of students. The sandwiches are placed in a stack. At each step:

// If the student at the front of the queue prefers the sandwich on the top of the stack, they will take it and leave the queue.
// Otherwise, they will leave it and go to the queue's end.
// This continues until none of the queue students want to take the top sandwich and are thus unable to eat.

// You are given two integer arrays students and sandwiches where sandwiches[i] is the type of the i​​​​​​th sandwich in the stack (i = 0 is the top of the stack) and students[j] is the preference of the j​​​​​​th student in the initial queue (j = 0 is the front of the queue). Return the number of students that are unable to eat.



#include<iostream>
#include<vector>
#include<queue>
using namespace std;


class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        // 1st approach
        queue<int>q;
        int n = students.size();
        for(int i = 0;i < n;i++) q.push(students[i]);
        int i = 0,count = 0;
        while(!q.empty() && count != q.size()){
            if(q.front() == sandwiches[i]){
                count = 0;
                i++;
                q.pop();
            }
            else{
                count++;
                q.push(q.front());
                q.pop();
            }
        }
        return q.size();
    }
};

int main(){
    Solution solve;

    // 1st example
    vector<int> students = {1,1,0,0};
    vector<int> sandwiches = {0,1,0,1};
    cout<<"No of student unable to eat lunch : "<<solve.countStudents(students,sandwiches)<<endl;

    // 2nd example
    students = {1,1,1,0,0,1};
    sandwiches = {1,0,0,0,1,1};
    cout<<"No of student unable to eat lunch : "<<solve.countStudents(students,sandwiches)<<endl;

}