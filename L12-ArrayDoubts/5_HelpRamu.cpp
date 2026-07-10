#include <iostream>
using namespace std;
int n,m;
int rick[10005], cab[10005];
int c1,c2,c3,c4;

int main(){
	 
	int t;
	cin>>t;
	while(t--){
		cin>>c1>>c2>>c3>>c4;

		cin>>n>>m;

		for (int i = 0; i < n; ++i)
		{
			cin>>rick[i];
		}

		for (int i = 0; i < m; ++i)
		{
			cin>>cab[i];
		}


		// Find the cost for rickshaws
		int totalRickshawMinCost, individualRickTotalCost = 0;

		for (int i = 0; i < n; ++i)
		{
			// rick[i]*c1 -> Individual cost for rides on rick[i]
			// pass ki cost for rick[i] -> c2
			int currentRickMinCost = min(rick[i]*c1, c2);
			individualRickTotalCost += currentRickMinCost;
		}

		// c3 -> Pass for travelling on all rickshaws
		totalRickshawMinCost = min(individualRickTotalCost, c3);


		// Cabs ki cost
		int totalCabMinCost, individualCabTotalCost = 0;

		for (int i = 0; i < m; ++i)
		{
			// Cab[i]*c1 -> Individual cost for rides on Cab[i]
			// pass ki cost for Cab[i] -> c2
			int currentCabMinCost = min(cab[i]*c1, c2);
			individualCabTotalCost += currentCabMinCost;
		}

		// c3 -> Pass for travelling on all Cabs
		totalCabMinCost = min(individualCabTotalCost, c3);


		int ans = min(totalCabMinCost + totalRickshawMinCost, c4);

		cout << ans << endl;

	}

	return 0;
}
















