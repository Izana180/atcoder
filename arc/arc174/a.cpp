#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long N,C; cin >> N >> C;
  vector<long> A(N);
  for(long i=0; i<N; i++){
    cin >> A[i];
  }

  long cand_ans_1=0; long cand_ans_2=0;
  if(C>0){
    long sum=0; long l=0; long r=0;
    vector<long>cand_sum(N);
    cand_sum[0]=A[0];
    for(int i=1; i<N; i++){
        cand_sum[i]=cand_sum[i-1]+A[i];
        if(cand_sum[i]<A[i]){
            cand_sum[i]=A[i];
            l=i;
            r=i;
        }
        if(sum<cand_sum[i]){
            sum=cand_sum[i];
            r=i;
        }
        
    }
    long sum_C=0;
    long sum_other_1=0;
    long sum_other_2=0;
    for(long i=l; i<=r; i++){
        sum_C+=C*A[i];
    }
    for(long i=0; i<l; i++){
        sum_other_1+=A[i];
    }
    for(long i=r+1; i<N; i++){
        sum_other_2+=A[i];
    }
    cand_ans_1=sum_C+sum_other_1+sum_other_2;
  }
  else if(C==0){
    cand_ans_1=0;
  }
  else if(C<0){
    long sum=0; long l=0; long r=0;
    vector<long>cand_sum(N);
    cand_sum[0]=A[0];
    for(int i=1; i<N; i++){
        cand_sum[i]=cand_sum[i-1]+A[i];
        if(cand_sum[i]>A[i]){
            cand_sum[i]=A[i];
            l=i;
            r=i;
        }
        if(sum>cand_sum[i]){
            sum=cand_sum[i];
            r=i;
        }
        
    }
    long sum_C=0;
    long sum_other_1=0;
    long sum_other_2=0;
    for(long i=l; i<=r; i++){
        sum_C+=C*A[i];
    }
    for(long i=0; i<l; i++){
        sum_other_1+=A[i];
    }
    for(long i=r+1; i<N; i++){
        sum_other_2+=A[i];
    }
    cand_ans_1=sum_C+sum_other_1+sum_other_2;
  }
  
  for(int i=0; i<N; i++){
    cand_ans_2+=A[i];
  }
  if(cand_ans_1>=cand_ans_2){
    cout << cand_ans_1 << endl;
  }
  else{
    cout << cand_ans_2 << endl;
  }

  return 0;
}