@echo off
@title=CAppDevKit Setup Environment
@color 1
:m
cls
echo Press enter to start the installation...
pause
echo CAppDevKit will be downloaded.
copy CAppDevKitInfoLib\cappdevkitinfo.h C:\CAppDevKit\cappdevkitinfo.h
copy CAppDevKitLib\appcustomvar.h C:\CAppDevKit\appcustomvar.h
copy CAppDevKitLib\appvoid.h C:\CAppDevKit\appvoid.h
copy CAppDevKitLib\cppappcustomvar.hpp C:\CAppDevKit\cppappcustomvar.hpp
copy CAppDevKitFunc\cppfunc.hpp C:\CAppDevKit\cppfunc.hpp
copy FastVar\cppfastvar.hpp C:\CAppDevKit\cppfastvar.hpp
copy ForCpp\cppdefined.hpp C:\CAppDevKit\cppdefined.hpp
copy Lib\forc\cdefined.h C:\CAppDevKit\Lib\cdefined.h
copy Lib\customdefine.h C:\CAppDevKit\customdefine.h
pause
exit