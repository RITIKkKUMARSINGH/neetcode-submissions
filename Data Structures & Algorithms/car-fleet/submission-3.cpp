class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double>st;
        vector<pair<int,double>>cars;
        for(int i=0;i<position.size();i++){
            double times=(double)(target-position[i])/speed[i];
            cars.push_back({position[i],times});
        }
        sort(cars.rbegin(),cars.rend());
        for(auto car:cars){
            double time=car.second;
            if(st.empty()||st.top()<time){
                st.push(time);
            }
        }
        return st.size();
    }
};
