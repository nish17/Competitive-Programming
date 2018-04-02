/*
PROBLEM STATEMENT: https://www.hackerrank.com/contests/hourrank-27/challenges/impressing-the-boss/problem
*/

#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string);

/*
 * Complete the canModify function below.
 */

bool overallSort(vector<int> a)
{
  bool ans;
  for (int i = 0; i < a.size() - 1; i++)
  {
    if (a[i] > a[i + 1])
    {
      ans = true;
    }
    else
    {
      ans = false;
      break;
    }
  }
  return ans;
}

bool checkSorting(vector<int> a, int i, int j)
{
  bool ans;
  // for (int i = 0; i < a.size() - 1; i++)
  // {
  if (a[i] > a[j])
  {
    ans = true;
  }
  else
  {
    ans = false;
    // break;
  }
  // }
  return ans;
}

string canModify(vector<int> a)
{

  string ans;
  int up, lo;
  for (int i = 0; i < a.size() - 1; i++)
  {
    if (!checkSorting(a, i, i + 1))
    {
      up = a[i + 1];
      lo = a[i];
      a[i] = rand() % (up - lo + 1) + lo;
    }
  }

  if (overallSort(a))
    ans = "YES\n";
  else
    ans = "NO\n";
  return ans;
}
int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  int t;
  cin >> t;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  for (int t_itr = 0; t_itr < t; t_itr++)
  {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int a_itr = 0; a_itr < n; a_itr++)
    {
      int a_item = stoi(a_temp[a_itr]);

      a[a_itr] = a_item;
    }

    string result = canModify(a);

    fout << result << "\n";
  }

  fout.close();

  return 0;
}

vector<string> split_string(string input_string)
{
  string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
    return x == y and x == ' ';
  });

  input_string.erase(new_end, input_string.end());

  while (input_string[input_string.length() - 1] == ' ')
  {
    input_string.pop_back();
  }

  vector<string> splits;
  char delimiter = ' ';

  size_t i = 0;
  size_t pos = input_string.find(delimiter);

  while (pos != string::npos)
  {
    splits.push_back(input_string.substr(i, pos - i));

    i = pos + 1;
    pos = input_string.find(delimiter, i);
  }

  splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

  return splits;
}
