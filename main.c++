Ques1.
  vector<int> ans;
  int n = nums.size();
  unordered_map<int,int> mpp;
  for(int i=0;i<n;i++) mpp[nums[i]]=i;
  for(int i=0;i<n;i++){
      if(mpp[target-nums[i]]){
          if(mpp[target-nums[i]]==i) continue;
          ans.push_back(i);
          ans.push_back(mpp[target-nums[i]]);
          break;
    }
  }
return ans;

Quesn 2.
int end=nums.size(),i=0;
while(i<end){
    if(nums[i]==val){
      nums[i]=nums[end-1];
      end--;
    }
    else i++;
}
return end;

Quesn 3.
int start = 0;
int end = nums.size();
int ans = 0;
if(nums[end-1]<target) return end;
while(start<=end){
  int mid = start+ (end - start)/2;
  if(nums[mid]==target) return mid;
  else if(nums[mid]>target) end = mid - 1;
  else{
      start = mid+1;
      ans = mid+1;
  }
}
return ans;

Quesn 4. 
bool yes=false;
for(int i=nums.size()-1;i>=0;i--){
    if(nums[i]<9){
        nums[i]=nums[i]+1;
        return;
      }
    else nums[i]=0;
}
reverse(nums.begin(),nums.end());
nums.push_back(1);
reverse(nums.begin(),nums.end());

Quesn 5.
int left = n - 1;
    int right = 0;
    while (left >= 0 && right < m) {
        if (arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--, right++;
        }
        else {
            break;
        }
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

Quesn 6.
unorderd_map<int,int> mpp;
for(int x:nums){
  if(mpp.find(x)!=mpp.end()) return true;
  mpp[x]++;
}
return false;

Quesn 7.
nt n=nums.size();
        int k=n-1,i=0;
        while(i<k){
            if(nums[i]==0){
                swap(nums[i],nums[k]);
                k--;
            }
            else i++;
        }

Quesn 8.
long long n = a.size();
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;
    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++) {
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }
    long long val1 = S - SN;
    long long val2 = S2 - S2N;
    val2 = val2 / val1;
    long long x = (val1 + val2) / 2;
    long long y = x - val1;
    return {(int)x, (int)y};
