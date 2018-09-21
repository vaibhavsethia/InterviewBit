bool comp(int a, int b){
    if(to_string(a)+to_string(b)>to_string(b)+to_string(a))
        return true;
    return false;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<int> sol = A;
    sort(sol.begin(), sol.end(), comp);
    string ans = "";
    for(int i = 0; i < sol.size(); i++)
        ans = ans + to_string(sol[i]);
    if(ans[0] == '0')
        return "0";
    return ans;
}
