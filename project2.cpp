#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void printVector(vector<int>);
int main()
{
    vector<int> v;

    /* 1.*/
    cout << "1. generate random number" << endl;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand());
    }

    int cmd = 0;

    while(1)
    {
        cout << "Please enter the number 1 ~ 6" << endl;
        cin >> cmd;

        /* 2.*/
        if (cmd == 1)
        {
            cout << "=====2. print vector" << endl;
            printVector(v);
        }

        /* 3.*/
        else if (cmd == 2)
        {
            cout << "=====3. vector ascending order with function object" << endl;
            greater<int> g;
            sort(v.begin(), v.end(), g);
            printVector(v);
        }

        /* 4.*/
        else if (cmd == 3)
        {
            cout << "=====4. vector ascending order with lambda" << endl;
            sort(v.begin(),v.end(), [](int a, int b){ return a < b;});
            printVector(v);
        }

        /* 5.*/
        else if (cmd == 4)
        {
            cout << "=====5. enter the number & find it in vector & remove" << endl;
            cin >> cmd;

            auto iter = v.begin();
            while (iter != v.end())
            {
               if (*iter == cmd)
               {
                   iter = v.erase(std::remove(v.begin(),v.end(),cmd));
               }
               else
               {
                   iter++;
               }

            }
            printVector(v);
        }

        /* 6.*/
        else if (cmd == 5)
        {
            cout << "=====6. enter the number & find it in vector & replace to 0" << endl;
            cin >> cmd;

            auto index = find(v.begin(), v.end(), cmd) - v.begin();
            v[index] = 0;

            printVector(v);
        }

        /* 7.*/
        else if (cmd == 6)
        {
            cout << "=====7. resize to 20." << endl;
            v.resize(20);

            printVector(v);
        }

    }
}

void printVector(vector<int> v)
{
    cout << "===== print" << endl;
    for(auto&n : v)
    {
        cout << n << endl;
    }
}

