class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x=0,y=0;
        for(char c: instructions){
            if(c=='U')y++;
            if(c=='D')y--;
            if(c=='R')x++;
            if(c=='L')x--;
        }
        if(x==0 && y==0)return true;
        else return false;
    }
};
