vector<int> reverseArray(vector<int> a) {

for(int i = 0;i < a.size()/2;i++)
    swap(a[i],a[a.size()-i-1]);

return a;

}