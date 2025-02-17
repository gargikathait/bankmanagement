#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    vector<int>arr(5);
    cout<<"Enter the Input: ";
    for (int i=0; i<5; i++)
    cin>>arr[i];


    ofstream fout;
    fout.open ("array.txt");
    fout<< "Original Data\n";
    for (int i=0; i<5; i++)
    {
        fout<<arr[i]<< " ";
    };

    fout<<"\n Sorted Data\n";
    sort(arr.begin(), arr.end());
      for (int i=0; i<5; i++)
      {
        fout<<arr[i]<<" ";
      };

}