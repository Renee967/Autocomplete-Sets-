#include "Set.h"
#include <iostream>
using namespace std;
Set::Set()
{
name = " ";
count = 0;
items = new string[0];
numItems = 0;
}
void Set::bubbleSort()
{

int i, j;
for (i = 0; i < numItems - 1; i++)

// Last i elements are already in place
for (j = 0; j < numItems - i - 1; j++)
{
if (items[j] >items[j + 1])
{
string temp = items[j];
items[j] = items[j + 1];
items[j + 1] = temp;
}
}


}
Set::Set(string n, int c,int num, string* in)
{
name = n;
count = c;
items = in;
numItems = num;
}
int Set::getCount() const
{
return count;
}
void Set::append(string n)
{

bool flag=false;
for (int i = 0; i < numItems; i++)
{
string substring = items[i].substr(0, n.size());
if (substring == n)
{
cout << items[i] << endl;
flag = true;
}
}


if (numItems < count&&!flag)
{
items[numItems] = n;
numItems++;

}
}
void Set::displayAll()
{
for (int i = 0; i < numItems; i++)
{
cout << items[i] << endl;
}
}
bool Set::search(string in) //needs to be O(log(n))
{
bool flag = false;
if (in.size() < 3)
{
displayAll();
return true;
}
else
{

for (int i = 0; i < numItems; i++)
{
string substring = items[i].substr(0, in.size());
if (substring == in)
{
cout << items[i] << endl;
flag = true;
}


}
}
return flag;
}









