# RC4Encryption_SystemFunction033

## Description

This is a simple example of how to RC4 encrypt shellcode utilizing the `SystemFunction032` or `SystemFunction033`.
Both of these functions do the same thing with the same parameters. The functions are found within the `Advapi32.dll` dynamic-link library (DLL).

## Methodology

Malware authors routinely use run-time decryption to bypass static detection mechanisms. RC4 is a fast and efficient stream cipher that allows for variable-length key encryption/decryption utilizing the same function for procedures.

## SystemFunction032/033

As mentioned above, the `SystemFunction032` and `SystemFunction033` functions can be found in the `Advapi.dll` DLL. A breakdown of the function with its parameters can be found on [ReactOS](https://doxygen.reactos.org/df/d13/sysfunc_8c.html#a66d55017b8625d505bd6c5707bdb9725) documentation page.

![ReactOS_SystemFunction032](https://github.com/ChrisMartin-CyberSec/RC4Encryption_SystemFunction033/assets/111389653/cc562d83-eb1c-490b-a630-2b1a5d9b85b9)

