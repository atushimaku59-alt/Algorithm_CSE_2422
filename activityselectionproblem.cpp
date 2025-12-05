```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Activity {
    int start, finish;
};

bool compare(Activity a, Activity b) {
    return a.finish < b.finish;
}

void activitySelection(vector<Activity>& activities) {
    sort(activities.begin(), activities.end(), compare);

    int n = activities.size();
    int lastFinish = activities[0].finish;

    cout << "(" << activities[0].start << ", " << activities[0].finish << ") ";

    for (int i = 1; i < n; i++) {
        if (activities[i].start >= lastFinish) {
            cout << "(" << activities[i].start << ", " << activities[i].finish << ") ";
            lastFinish = activities[i].finish;
        }
    }
    cout << endl;
}

int main() {
    vector<Activity> activities = {
        {1, 3}, {2, 5}, {0, 6}, {5, 7},
        {8, 9}, {5, 9}
    };

    activitySelection(activities);

    return 0;
}
```
