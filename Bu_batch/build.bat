@echo off
call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" x64 
set filepath="src\bflipped.cpp"
set objpath ="c++primer\Bu_obj"    
set compilerflags=/Od /Z7 /Fo"Bu_obj\\" /EHsc /I"D:\c++primer\include"
set linkerflags=/OUT:Bu_out/bflipped.exe
cl.exe %compilerflags% %filepath%  /link %linkerflags%