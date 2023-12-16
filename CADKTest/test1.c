#include "../CAppDevKitInfoLib/cappdevkitinfo.h"
#include "../CAppDevKitLib/appcustomvar.h"
#include "../CAppDevKitLib/appvoid.h"
#include "../Lib/forc/cdefined.h"

// CADK C

_i main()
{
    _i process;

    p("CAppDevKit Process (appinfo (1) / cappdevkitinfo (2) / appexit (3)): ");
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
            "2.2",
            "11/24/2023",
            "12/16/2023",
            "@LinuxUsersLinuxMint",
            "https://linuxuserslinuxmint.github.io"
        );
    }
    else if (process == 2)
    {
        cadk_i();
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

/*
    Normal C:

    int main()
    {
        int process;
        printf("CAppDevKit Process (Appinfo (1) / CAppDevKitInfo (2) / appexit (3))");
        scanf("%d", &process);

        if (process == 1)
        {
            printf("App Name: CADKProject");
            printf("App Version: 2.2");
            printf("App Release Date: 11/24/2023");
            printf("App Last Update: 12/16/2023");
            printf("App Developer Name: @LinuxUsersLinuxMint");
            printf("App Developer Web Site: https://linuxuserslinuxmint.github.io");
        }
        else if (process == 2)
        {
            None
        }
        else if (process == 3)
        {
            exit(0);
        }
        else
        {
            printf("Invalid Process...");
        }
        return 0;
    }
*/