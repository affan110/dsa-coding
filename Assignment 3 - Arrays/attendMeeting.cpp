#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Interval {
    int start;
    int end;
};

bool canAttendMeetings(vector<Interval>& intervals) {
    sort(intervals.begin(), intervals.end(), [](const Interval& i1, const Interval& i2) -> bool {
        return i1.start < i2.start;
    });

    for (size_t i = 1; i < intervals.size(); i++) {
        if (intervals[i - 1].end > intervals[i].start) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<Interval> intervals = {
        {0, 30},
        {5, 10},
        {15, 20}
    };

    bool canAttend = canAttendMeetings(intervals);
    cout << "Can attend meetings: " <<boolalpha << canAttend << endl;

    return 0;
}
