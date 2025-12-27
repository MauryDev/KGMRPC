@echo off
REM --- RECEBENDO ARGUMENTOS ---
REM %1 = SolutionDir
REM %2 = ProjectDir
REM %3 = ProjectName
REM %4 = OutputPath (Diretorio de saida do build)

REM %~1 remove as aspas externas passadas pelo argumento para evitar duplicacao
SET "SolutionDir=%~1"
SET "ProjectDir=%~2"
SET "ProjectName=%~3"
SET "OutputPath=%~4"

echo [DEPLOY] Iniciando deploy para: %ProjectName%

REM Verifica se os argumentos foram passados
if "%SolutionDir%"=="" (
    echo [ERRO] Argumentos nao fornecidos. Execute via Visual Studio.
    pause
    exit /b 1
)

REM Cria a pasta publish
if not exist "%SolutionDir%publish" mkdir "%SolutionDir%publish"
cd /d "%SolutionDir%publish"

REM Copia TODOS os arquivos do OutputPath para a pasta atual (.)
echo [DEPLOY] Copiando binarios de: %OutputPath%
copy /Y "%OutputPath%*.*" .

REM Cria pastas
if not exist BR mkdir BR
if not exist Friends mkdir Friends
if not exist WWW mkdir WWW

REM Copia metadados
copy /Y "%ProjectDir%metadata\Tools.Il2Cpp.ICalls.dat" "BR\Tools.Il2Cpp.ICalls.dat"
copy /Y "%ProjectDir%KoGaMa\KGMRPC.KoGaMa.dat" "BR\KGMRPC.KoGaMa.dat"

copy /Y "%ProjectDir%metadata\Tools.Il2Cpp.ICalls.dat" "WWW\Tools.Il2Cpp.ICalls.dat"
copy /Y "%ProjectDir%KoGaMa\KGMRPC.KoGaMa.dat" "WWW\KGMRPC.KoGaMa.dat"

copy /Y "%ProjectDir%metadata\Tools.Il2Cpp.ICalls.dat" "Friends\Tools.Il2Cpp.ICalls.dat"
copy /Y "%ProjectDir%KoGaMa\KGMRPC.KoGaMa.dat" "Friends\KGMRPC.KoGaMa.dat"

REM Configura PATH do GeneratorCode
SET PATH=%PATH%;C:\dev\Visual Studio\Il2CppInteropCpp\GeneratorCode\bin\Release\net9.0\publish

echo [DEPLOY] Executando GeneratorCode...
GeneratorCode BR update "BR\KGMRPC.KoGaMa.dat"
GeneratorCode BR update "BR\Tools.Il2Cpp.ICalls.dat"
GeneratorCode WWW update "WWW\KGMRPC.KoGaMa.dat"
GeneratorCode WWW update "WWW\Tools.Il2Cpp.ICalls.dat"
GeneratorCode Friends update "Friends\KGMRPC.KoGaMa.dat"
GeneratorCode Friends update "Friends\Tools.Il2Cpp.ICalls.dat"

echo [DEPLOY] Concluido com sucesso.