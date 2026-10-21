class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string>ans;
        unordered_map<string,int>m;
        for(int i=0;i<list2.size();i++){
            m[list2[i]]=i;
        }
        int min=INT_MAX;
        
        for(int i=0;i<list1.size();i++){
            if(m.find(list1[i])!=m.end()){
                if(i+m[list1[i]]<min){
                    min=i+m[list1[i]];
                    ans.clear();
                    ans.push_back(list1[i]);


                }else if(i+m[list1[i]]==min){
                        ans.push_back(list1[i]);
                }
            }
        }
        return ans;

    }
};