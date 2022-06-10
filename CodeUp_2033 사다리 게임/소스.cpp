#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct _Pos
{
	int a;
	int b;
}Pos;
int main()
{
	int k, n, p;
	cin >> k >> n;
	
	vector<Pos> change(n);
	for (int i = 0; i < n; i++)
		cin >> change[i].a >> change[i].b;
	cin >> p;

	for (int i = 0; i < n; i++)
	{
		if (p == change[i].a)
			p = change[i].b;
		else if (p == change[i].b)
			p = change[i].a;
	}

	cout << p;
	return 0;
}