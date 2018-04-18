#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

float arraySum(vector<int> &v)
{
  int initial_sum = 0;
  return accumulate(v.begin(), v.end(), initial_sum);
}

// Complete the averageOfTopEmployees function below.
void averageOfTopEmployees(vector<int> rating)
{
  vector<int> result;
  for (int i = 0; i < rating.size(); i++)
  {
    if (rating[i] >= 90)
    {
      result.push_back(rating[i]);
    }
  }

  std::cout << std::setprecision(2) << std::fixed;
  float ans = arraySum(result) / result.size();
  ans = roundf(ans * 100) / 100;
  cout << ans << endl;

  // print("%.2f\n",ans);
  // cout << fixed;
  // cout << setprecision(2);
  // cout << ans << endl;
}

int main()
{
  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  vector<int> rating(n);

  for (int rating_itr = 0; rating_itr < n; rating_itr++)
  {
    int rating_item;
    cin >> rating_item;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    rating[rating_itr] = rating_item;
  }

  averageOfTopEmployees(rating);

  return 0;
}
