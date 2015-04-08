//
//  rc4.h
//  rc4
//
//  Created by Duye Chen on 4/8/15.
//

#include <iostream>
using namespace::std;

#ifndef rc4_rc4_h
#define rc4_rc4_h

class RC4
{
public:
    void ksa(string key, int keylength);
    string prga(string in, int len);
    string doRC4(string in, string key);
    
private:
    int S[256];
    char k[256];
    
};

#endif
