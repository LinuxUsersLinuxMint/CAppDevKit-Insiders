#ifndef _APP_VOID_H_
#define _APP_VOID_H_

#include "../Lib/customdefine.h"
#include "../CAppDevKitInfoLib/cappdevkitinfo.h"
#include "../Lib/forc/cdefined.h"

appfunc appinfo(app_info_dialog appdialog_appname,
app_info_dialog appdialog_appversion,
app_info_dialog appdialog_apprsdate,
app_info_dialog appdialog_appls,
app_info_dialog appdialog_appdv,
app_info_dialog appdialog_appdvwebsite,
app_name appname,
app_name appvers,
app_rs_date apprs,
app_lsup_date applsdate,
app_developer_name appdevname,
app_developer_website appdevwsite)
{
    printf("%s %s\n", appdialog_appname,appname);
    printf("%s %s\n", appdialog_appversion,appvers);
    printf("%s %s\n", appdialog_apprsdate,apprs);
    printf("%s %s\n", appdialog_appls,applsdate);
    printf("%s %s\n", appdialog_appdv,appdevname);
    printf("%s %s\n", appdialog_appdvwebsite,appdevwsite);
}

appfunc cadk_i()
{
    st CAppDevKitInfo CAppDevKitI;
    CAppDevKitI.clibname = CLIB_NAME;
    CAppDevKitI.cappdevkit = CADK;
    CAppDevKitI.cappdevkitver = CADK_Ver;
    CAppDevKitI.cappreleasedate = CADK_RS_Date;
    CAppDevKitI.capplsupdate = CADK_LAST_UPDATED_DATE;
    CAppDevKitI.appdevsname = CADK_Developer_Name;
    CAppDevKitI.appdevswebsite = CADK_Developer_website;

    printf("CAppDevKitName: %s\n", CAppDevKitI.clibname);
    printf("CAppDevKit: %s\n", CAppDevKitI.cappdevkit);
    printf("CAppDevKitVer: %s\n", CAppDevKitI.cappdevkitver);
    printf("CAppDevKitReleaseDate: %s\n", CAppDevKitI.cappreleasedate);
    printf("CAppDevKitLastUpdatedDate: %s\n", CAppDevKitI.capplsupdate);
    printf("CAppDevName: %s\n", CAppDevKitI.appdevsname);
    printf("CAppDevKitWebSite: %s\n", CAppDevKitI.appdevswebsite);
}

appfunc app_exit(_i x)
{
    exit(x);
}

/*afunc app_exit_msg(app_msg exit_msg, _i maxtime)
{
    _i time;

    printf("%s\n", exit_msg);

    for (_i i = 0; i < maxtime; i++)
    {
        time=i;
        if (time < maxtime)
        {
            app_exit(0);
        }
    }
}*/

#endif