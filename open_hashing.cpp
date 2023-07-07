#include<bits/stdc++.h> 

using namespace std;

class hash_table
{
  private:
  int size;
  list<int> *hash_lists;

  public:
  hash_table(int hash_table_size)
  {
    size = hash_table_size;
    hash_lists = new list<int> [size];
  }
  
  ~hash_table()
  {
    delete[] hash_lists;
  }

  int hash_function(int key)
  {
    int index = key % size;
    return index;
  }

  void insert(int key, int value)
  {
    int index = hash_function(key);
    hash_lists[index].push_back(value);
  }

  void remove(int key)
  {
    int index = hash_function(key);
    hash_lists[index].pop_back();
  }

  void print_value(int key)
  {
    int index = hash_function(key);
    list <int> list_req = hash_lists[index];
    list<int>::iterator it;
    for(it = list_req.begin(); it != list_req.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
  }
};

int main()
{
 hash_table varad_table(10);
 varad_table.insert(10,100);
 varad_table.insert(1,1);
 varad_table.insert(2,4);
 varad_table.insert(3,9);
 varad_table.insert(4,16);
 varad_table.insert(5,25);
 varad_table.insert(6,36);
 varad_table.insert(7,49);
 varad_table.insert(8,64);
 varad_table.insert(9,81);
 varad_table.insert(19, 361);
 varad_table.print_value(6);
 varad_table.print_value(9);
 varad_table.remove(9);
 varad_table.print_value(9);

 return 0;
}
