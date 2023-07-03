#include <iostream>
#include <string>

using namespace std;

bool rotateString(string s, string goal)
{
  if (s.size() != goal.size())
    return false;

  for (int i = 0; i < s.size(); ++i)
  {
    if (s == goal)
      return true;
    s = s.substr(1) + s[0];
  }

  return false;
}

int main()
{
  string s = "abcde";
  string goal = "cdeab";

  if (rotateString(s, goal))
    cout << "The strings can be rotated to match." << endl;
  else
    cout << "The strings cannot be rotated to match." << endl;

  return 0;
}
