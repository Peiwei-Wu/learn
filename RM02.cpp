#include<iostream>
using namespace std;
int main()
{
	int a[10], length;
	cout << "please input the size of the array:" << endl;
	cin >> length;
	for(int i = 0; i < length; i++)
		cin >> a[i];
        for(int i = 0; i < length; i++)
                if(a[i] == 0)
                        for(int j = i; j < 4; j++){
                                int tempt = a[j];
                                a[j] = a[j + 1];
                                a[j + 1] = tempt;
                        }
        for(int i = 0; i < length; i++)
                cout << a[i] << " ";
	cout << "\n";
}

