class Solution {
public:
    int elevatorRequests(int n, vector<int>& req) {
        int time=0;
        int cufloor=0;
     for(int i=0;i<req.size();i++){
        time+=abs(req[i]-cufloor);
        cufloor=req[i];

     }
     return time;
        
    }
};