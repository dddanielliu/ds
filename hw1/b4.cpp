// a. Dynamic Array
#include "data_structures/Linked_List_plus_plus.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    ofstream outfile;
    srand( time(0) );
    int random_number = rand() % 10000;
    // outfile.open("a1.csv", std::ios_base::app);
    outfile.open("b4.csv", std::ios::trunc);
    outfile << "data_structure,k,";
    for (int i=1; i<=10; i++){
        outfile << "test" << i;
        if (i==10)
            outfile << endl;
        else
            outfile << ',';
    }
    for (int k=11; k<=25; k++){
        int n = 1<<k;
        outfile << "Linked_List++," << k << ',';
        cerr << "k=" << k << endl;
        Linked_List_plus_plus linkedlist_plus_plus;
        for (int i=1; i<=n; i++){
            random_number = rand() % 10000;
            linkedlist_plus_plus.insert(random_number);
        }
        for (int test_id=1; test_id<=10; test_id++){
            cerr << "test_id=" << test_id << endl;
            long long sum = 0;
            clock_t begin_time = clock();
            sum = linkedlist_plus_plus.getSum();
            clock_t used_time = clock() - begin_time;
            outfile << static_cast<double>(used_time) / CLOCKS_PER_SEC;
            if (test_id == 10) outfile << endl;
            else outfile << ',';
        }
    }
    outfile.close();
    return 0;
}