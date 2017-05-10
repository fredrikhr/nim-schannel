#include <stdlib.h>
#include <stdio.h>

#include <Windows.h>
#define SECURITY_WIN32
#include <Security.h>


int main(int argc, char* argv[])
{
    const int x = sizeof(SEC_CHAR);

    const auto y = ERROR_SUCCESS;

    void* ptr = AcquireCredentialsHandle;

    return 0;
}