#include "Lib/forc/cdefined.h"
#include "Lib/customdefine.h"
#include "CAppDevKitLib/appvoid.h"

_i main()
{
    _i process;

    printf("CAppDevKit Process (appinfo (1) / cappdevkitinfo (2) / appexit (3)): ");
    scanf("%d", &process);

    if (process == 1)
    {
        appinfo(
            "App Name:",
            "App Version:",
            "App Release Date:",
            "App Last Update:",
            "App Developer Name:",
            "App Developer Web Site:",
            "CADKProject",
            2.1,
            "11/24/2023",
            "12/09/2023",
            "@LinuxUsersLinuxMint",
            "https://linuxuserslinuxmint.github.io"
        );
    }
    else if (process == 2)
    {
        cappdevkit_info();
    }
    else if (process == 3)
    {
        app_exit_msg(
            "App exit...",
            10000 // 10 second
        );
    }
    else
    {
        printf("Invalid process...");
    }
    r 0;
}