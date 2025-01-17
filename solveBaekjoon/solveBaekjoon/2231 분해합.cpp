﻿#include <bits/stdc++.h>
/*
#include <iostream>
#include <deque>
#include <vector>
#include <queue>
#include <algorithm>
*/
using namespace std;

#define ONLINE_JUDGE		// if you use online judge you must write this code

#define hIn(x) cin >> (x)
#define hCin(x) int (x); cin >> (x)
#define hOut(x) cout << x << '\n'
#define hOutBlank(x) cout << x << ' '
#define hforOut(arr,size) for(int i = 0; i < size; i++) { cout << arr[i] << '\n';}
#define hforIn(arr, size) for(int i = 0 ; i < size; i++) cin >> arr[i];

#define delarr(x) delete [] x
#define pairInt pair<int, int>
#define tlong long long

// 각 자리수 합
int sumOfDigits(int num) {
	int sum = 0;
	while (num > 0) {
		sum += (num % 10);
		num /= 10;
	}
	return sum;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
#ifndef  ONLINE_JUDGE	// ONLINE_JUDGE 라는 값이 없으면 endif까지 아래 코드를 사용.
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);	// 출력이 너무 길때 사용
#endif // ! ONLINE_JUDGE
	hCin(N); // 1 <= N <= 1,000,000
	
	int result = 0;
	for (int i = 0; i < N; i++) {
		int numCreator = i + sumOfDigits(i);
		// N과 분해합이 같다면.....
		if (numCreator == N) {
			result = i;
			break;
		}
	}
	cout << result << endl;
	return 0;
}

/*
어떤 수 N에 대해
N의 생성자는

N = 원본 + 각 자리수
이다.

*/