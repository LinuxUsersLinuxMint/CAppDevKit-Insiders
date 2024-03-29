#ifndef _C_APP_DEV_KIT_INFO_H_
#define _C_APP_DEV_KIT_INFO_H_

#include "../CAppDevKitLib/appcustomvar.h"
#include "../Lib/forc/cdefined.h"
#include "../Lib/customdefine.h"

#define CLIB_NAME      "CAppDevKit - Insiders"
#define CADK   "CAppDevKit - Insiders (C App Developer Kit)"
#define CADK_Ver   "2.3"
#define CADK_RS_Date  "11/24/2023"
#define CADK_LAST_UPDATED_DATE    "01/23/2024"
#define CADK_Developer_Name   "@LinuxUsersLinuxMint"
#define CADK_Developer_website    "https://linuxuserslinuxmint.github.io"

st CAppDevKitInfo
{
    app_name clibname, cappdevkit, cappdevkitver;
    app_rs_date cappreleasedate;
    app_lsup_date capplsupdate;
    app_developer_name appdevsname;
    app_developer_website appdevswebsite;
} CAppDevKitI;

#endif