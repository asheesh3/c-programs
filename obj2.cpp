#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void opp(void);
    void dis_opp(void);
};

void binary ::read(void)
{

    cout << "enter a binary number\n";
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) !='1')
        {
           exit(0);
        }

    
    }
}

void binary :: opp(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) ='1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary :: dis_opp(void)
{
  chk_bin();
    cout << "display ";
 
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
    
}

int main()
{

    binary b;
    b.read();
    // b.chk_bin();
    b.dis_opp();
    b.opp();
    b.dis_opp();

    return 0;
}




// == is for the comparison 

// = is for the assignment
