vector<int> Solution::rotateArray(vector<int> &A, int B) {
	vector<int> ret;        //final array to be returned
	int j = 0;
	B = B%(A.size());       //incase B>A.size() thn only remainder number of rotations are to be made
	for (int i = 0; i < A.size(); i++) {        //loop for rotation
		if((i+B) < A.size()){
		    ret.push_back(A[i + B]);    
		}
		else{
		    ret.push_back(A[j]);        //setting last element and preventing the access of undefined element i+B>A.size()
		    j++;
		}
		
	}
	return ret; 
}
