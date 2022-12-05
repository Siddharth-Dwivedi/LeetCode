class Solution {
public:
int hardestWorker(int n, vector<vector<int>>& logs) {
    int id = 0, mxTime = 0, prevEnd = 0;
    for (vector<int>& log : logs) {
        int time = log[1] - prevEnd;
        prevEnd = log[1];
        if (time > mxTime || (time == mxTime && log[0] < id))
            mxTime = time, id = log[0];
    }
    return id;
}
};