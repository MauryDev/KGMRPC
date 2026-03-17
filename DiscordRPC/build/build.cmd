@echo off
cd ..\KoGaMa
SET PATH=%PATH%;C:\dev\Visual Studio\Il2CppInteropCpp\GeneratorCode\bin\Release\net9.0\publish
GeneratorCode build WWW "discordRPC.yml"
echo "Build success"
cd ../build