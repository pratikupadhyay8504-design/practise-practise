class Solution {
public:
    vector<double> convertTemperature(double cel) {
        vector<double>ans;
        double kel=cel+273.15;
        ans.push_back(kel);
        double fah=cel*1.80+32.00;
        ans.push_back(fah);
        return ans;
        
    }
};