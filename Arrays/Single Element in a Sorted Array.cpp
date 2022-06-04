int uniqueElement(vector<int> arr, int n)
{
    int xorI=0;
	for(int i=0;i<n;i++){
        xorI ^=arr[i];
    }
    return xorI;
}
