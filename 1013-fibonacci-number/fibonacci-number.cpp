class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int secondLast = 0;//for (i-2)th term
		int last = 1;//for (i-1)th term
		int cur; //for ith term
		for (int i = 2; i <= n; i++) {
			cur = last + secondLast;
			secondLast = last;
			last = cur;
		}return cur;
        
    }
};