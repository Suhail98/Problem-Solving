vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> v;
    for(int i = 0;i < n;i++) v.push_back(*(new vector<int>()));
    vector<int> ans;
    int last = 0;
    for(vector<int>vv: queries)
    {
        int idx = (vv[1] ^ last) % n;
        if(vv[0] == 1)
        {
            v[idx].push_back(vv[2]);
        }
        else
          {
              last = v[idx][vv[2] % v[idx].size()];
              ans.push_back(last);
        }
    }
    return ans;
}