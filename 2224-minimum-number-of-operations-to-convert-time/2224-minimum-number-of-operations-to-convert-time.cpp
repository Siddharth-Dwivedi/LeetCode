class Solution {
public:
    int toMinute(string curr){
      int mi=0;  
    mi=mi+curr[0]-'0'; mi*=10;
    mi=mi+curr[1]-'0';
    mi*=60;
    int a=0;
    a=a+curr[3]-'0'; a*=10;
    a=a+curr[4]-'0';
    mi+=a;
    return mi;
}
int convertTime(string curr, string correct) {
  int a=toMinute(curr);
 int b=toMinute(correct);
    int count=0;
    while(a<b){
        if(b-a>=60){
            a+=60;
        }
        else  if(b-a>=15){
            a+=15;
        }
        else  if(b-a>=5){
            a+=5;
        }
        else {
            a+=1;
        }
       count++; 
    }
    return count;
}
};