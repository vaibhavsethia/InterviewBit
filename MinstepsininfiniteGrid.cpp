int coverPoints(vector<int> &X, vector<int> &Y) {

    int size1=X.size(),size2=Y.size(),ans=0;

    for(int i=1;i<size1;i++)

    {
     ans = ans + (abs(X[i]-X[i-1])<abs(Y[i]-Y[i-1])?abs(Y[i]-Y[i-1]):abs(X[i]-X[i-1]));
    }

    return ans;
} 
//instead of line 8 , ans=ans+max(abs(X[i]-X[i-1]),abs(Y[i]-Y[i-1])); could be used
// as diagnol traversal is also valid so magnitude diffrence can be used to calculate number of steps 
// if no diagnal traversal then either use recursion or dynamic programming
