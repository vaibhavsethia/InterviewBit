vector<int> Solution::wave(vector<int> &A) {
    void swap(int &A,int &B);
    int size=A.size();
    sort(A.begin(),A.end());
    if(A.size()%2 != 0)
        size = A.size()-1;
    for(int i=0;i<size;i+=2)
        swap(A[i],A[i+1]);
    return A;
}

void swap(int &A,int &B)
{
    int T=A;A=B;B=T;
}
