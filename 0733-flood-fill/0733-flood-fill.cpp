class Solution {
public:
    void changeColor(vector<vector<int>>& image, int sr, int sc,int val, int newColor)
    {
        if(sr<0 || sr>=image.size() || sc<0 || sc>= image[0].size() ||
			image[sr][sc] == newColor || image[sr][sc] != val)
        {
            return;
        }
        image[sr][sc] = newColor;
        changeColor(image,sr-1,sc,val,newColor);
        changeColor(image,sr+1,sc,val,newColor);
        changeColor(image,sr,sc-1,val,newColor);
        changeColor(image,sr,sc+1,val,newColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
        int val = image[sr][sc];
        changeColor(image,sr,sc,val,newColor);
        return image;
    }
};