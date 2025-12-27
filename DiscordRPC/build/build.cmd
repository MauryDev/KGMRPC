
cd ..\KoGaMa
SET PATH=%PATH%;C:\dev\Visual Studio\Il2CppInteropCpp\GeneratorCode\bin\Release\net9.0\publish
GeneratorCode build WWW "discordRPC.yml"
cd ..\metadata
GeneratorCode update WWW "Tools.Il2Cpp.ICalls.dat"
echo "Build success"