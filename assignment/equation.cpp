#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  double x, v, t, g, answer;

  g = 9.8665;

  cout << "x: ";
  cin >> x;

  cout << "v: ";
  cin >> v;

  cout << "t: ";
  cin >> t;

  answer = x + v * t - pow(g * t, 2) / 2;
  cout << answer << endl;








}