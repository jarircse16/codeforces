#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2="WUB";
    cin>> s1;
    s1 = std::regex_replace(s1, std::regex("WUB"), " ");
    s1 = std::regex_replace(s1, std::regex("  "), " ");
//    int index=0;
//
//    while(1){
//    index = s1.find("WUB", index);
//    if (index == std::string::npos) break;
//        s1.replace(index,6, " ");
//        index+=3;
//}
    cout<<s1<<endl;
    return 0;
}
