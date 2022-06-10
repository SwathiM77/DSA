#include <bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    vector<int> marks;
    int id;
};

bool mycomp(Student s1, Student s2){
    int sum1 = 0,sum2 = 0;
    for(int i=0;i<s1.marks.size();i++){
        sum1+=s1.marks[i];
        sum2+=s2.marks[i];
    }
    if(sum1 != sum2)
        return sum1>sum2;
    if(sum1 == sum2){
        if(s1.name != s2.name)
            return s1.name<s2.name;
        else
            return s1.id<s2.id;
    }
}

vector<int> marksSort(int n, vector<Student> students){
    sort(students.begin(),students.end(),mycomp);
    vector<int>ids;
    for(auto i:students){
        ids.push_back(i.id);
    }
    return ids;
}


int main(){
    int n;
    cin>>n;
    vector<Student> students(n);
    for(auto &std: students){
        cin>>std.id >> std.name;
        std.marks.resize(5);
        for(auto &mark: std.marks){
            cin >> mark;
        }
    }
    vector<int> ids = marksSort(n, students);
    for(auto &id:ids){
        cout<< id << " ";
    }
    return 0;
}
