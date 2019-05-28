vector<int> Solution::maxset(vector<int> &a) {
  vector<long int> v;
  long int sum = 0;
  for (long int i = 0; i < a.size(); i++) {
    if (a[i] < 0) {
      v.push_back(0);
      sum = 0;
    } else {
      sum += a[i];
      v.push_back(sum);
      //cout << sum << " ";
    }
  }

  long int max = 0;
  for (long int i = 0; i < v.size(); i++) {
    if (max < v[i])
      max = v[i];
  }
  long int x = 0, b;
  vector<long int> index;
  for (long int i = 0; i < v.size(); i++) {
    if (max == v[i]) {
      index.push_back(i);
    }
  }
  vector<vector<long int>> temp;
  for (long int i = 0; i < index.size(); i++) {
    vector<long int> t;
    for (long int j = index[i]; j >= 0 && a[j] >= 0; j--) {
      t.push_back(a[j]);
    }
    temp.push_back(t);
  }
  long int c = 0;
  for (long int i = 0; i < temp.size(); i++) {
    if (c < temp[i].size())
      c = temp[i].size();
  }
  vector<int> z;
  for (long int i = 0; i < temp.size(); i++) {
    if (temp[i].size() == c) {
      for (long int j = temp[i].size() - 1; j >= 0; j--) {
        z.push_back(temp[i][j]);
      }
    }
  }
  return z;
}
