class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        unordered_map<int,int> map;
        for(vector<int> rectangle: rectangles){
            map[min(rectangle[0],rectangle[1])]++;
        }
        int cnt=INT_MIN,maxlen=INT_MIN;
        for(auto m: map){
            if(m.first>maxlen) cnt=m.second,maxlen=m.first; 
        }
        return cnt;
    }
};