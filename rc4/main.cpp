//
//  main.cpp
//  rc4
//
//  Created by Jing Chen on 4/8/15.
//  Copyright (c) 2015 Single9. All rights reserved.
//

#include <iostream>
#include "rc4.h"

using namespace::std;

RC4 rc4;

int main(int argc, const char * argv[])
{
    string key, str, out;
    
    cout << "Input key:";
    cin >> key;
    
    cout << "Input Plaintext:";
    cin >> str;
    
    out = rc4.doRC4(str, key);
    
    cout << "Ciphertext:\t" << out << endl;
    
    cout << "Plaintext:\t" << rc4.doRC4(out, key) << endl;
    
    
    // Key2
    cout << "Input second key:";
    cin >> key;
    
    out = rc4.doRC4(str, key);
    
    cout << "Ciphertext:\t" << out << endl;
    
    cout << "Plaintext:\t" << rc4.doRC4(out, key) << endl;
    
    //system("pause");
    return 0;
}
