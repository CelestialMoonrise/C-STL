#include <iostream>

using namespace std;

int main()
{
    //1. String initiationg: string name(times its repeated, char)
    string s1(50, 'a');
    cout << "1. " << s1 << endl;
    
    //2. String initiating & Duplicate: string s1(s2)
    string s2(s1);
    cout << "2. " << s2 << endl;
    
    //3. String initiate & partial duplication: string s1(s2, start_pos, amount)
    string s3 = "Good morning, Aurora.";
    string s4(s3, 0, 4);
    cout << "3. " << s4 << endl;
    
    //4. Extract character from string
    //1) string[index] 2) string.at()
    for (int i=0; i<s3.size(); i++) cout << s3[i] << " ";
    cout << endl;
    for (int i=0; i<s3.length(); i++) cout << s3.at(i) << " ";
    cout << endl;
    for(auto v:s3) cout << v << " ";
    cout << endl;
    
    //5. String Assign
    //5.0 String Duplicate s1.assign(s2)
    string s5 = "Magical";
    string s6 = "Night";
    s5.assign(s6);
    cout << "5.0 " << s6 << endl;
    
    //5.1 char duplicate s.assign(amount, char)
    s5.assign(3, '!'); 
    cout << "5.1 " << s5 << endl;
    
    //5.2 Partial duplicate 
    s6.assign(s5, 0, 1);
    cout << "5.2" << s6 << endl;
    
    //6. string.compare(): compare ASCII code from the first char
    //6.1 the exact same: return 0
    string a = "aaa", b = "bbb", all = "abc";
    cout << "6.1 Exact Same: " << a.compare(a) << endl;
    //6.2 smaller first: return <0
    cout << "6.2 Smaller First: " << a.compare(b) << endl;
    //6.3 smaller second: return >0
    cout << "6.3 Larger First: " << all.compare(a) << endl;

    return 0;
}
