#include <iostream>

using namespace std;

bool IsKPeriodic(string, int);

auto main() -> int
{
	string s;
	int K;
	cout << "Enter your string:";
	cin >> s;
	cout << "Enter K:";
	cin >> K;
	IsKPeriodic(s, K);
	return 0;
}

bool IsKPeriodic(string str, int K)
{
	// ���� ������ �� ����� �� ������ � ��� ������� ������������ �������� �,
	// ��� ������ ������, ���������� false
	if (str.size() % K != 0 || K <= 0 || K == str.size() || str.size() == 0)
		return false;

	string pat = "";
	int i;
	// ���������� ������ ��������� ������ K
	for (i = 0; i < K; i++)
		pat += str[i];
	// ���������, ����������� �� ������ ��������� �� ���� ������
	while (str[i] == pat[i % K] && i < str.size())
		i++;
	// ���� �� ����� �� ����� ������, ������ ������ �� ������ �
	// ����� ������ ����� ��������� �
	if (i < str.size())
	{
		cout << "The string (" << str << ") doesn't have a multiplicity of " << K << endl;
		return false;
	}
	else
	{
		cout << "The string (" << str << ") has a multiplicity of " << K << endl;
		return true;
	}

}