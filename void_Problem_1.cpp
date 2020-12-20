#include<iostream>
using namespace std;


bool longestSubarray(int arr[], int l)
{
    int count = 0;
    bool xflag = false;
    int sum = 0;
    int x, y, z;
    int* ptr;
    bool flag = false;
    for (int i = 0; i < 4; i++)
    {
        cout << "hello1" << endl;
        sum += arr[i];
        count++;
    }
    cout << "sum" << sum << endl;//10
    for (int i = 4; i < l; i++)
    {
        if (sum + arr[i] == 15)//14//15
        {
            cout << "hello2" << endl;
            flag = true;
            x = arr[i];
            sum += arr[i];
            break;
        }
        else
        {
            cout << "hello3" << endl;
            flag = false;
        }



    }

    if (flag == true)
    {
        cout << "hello4" << endl;
        ptr = new int[count + 1];
        for (int i = 0; i < count; i++)
        {

            ptr[i] = arr[i];


        }
        ptr[count + 1] = x;
        for (int i = 0; i < count; i++)
        {
            cout << ptr[i] << endl;
        }
        cout << ptr[count + 1] << endl;


    }

    for (int i = 0; i < l; i++)
    {
        if ((arr[i] + arr[i + 1] + arr[i + 3]) == 15)
        {
            cout << arr[i] << " " << arr[i + 1] << " " << arr[i + 3] << endl;
            xflag = true;
        }

        //cout<<arr[i]<<endl;

    }
    if (xflag && flag == true)
    {
        return true;
    }
    else
    {
        return false;
    }





}
int main()
{
    int arr[] = { 1,2,3,4,4,5,5,6 };
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << longestSubarray(arr, N);
    return 0;
}