;NSIS Modern User Interface
;install script from Basic Example Script Written by Joost Verburg
;Geoffroy Culot

;--------------------------------
;Include Modern UI

  !include "MUI2.nsh"
;--------------------------------
;General

  ;Name and file
  Name "MyPrestation"
  OutFile "MyPrestationsSetup.exe"

  ;Default installation folder
  InstallDir "$LOCALAPPDATA\MyPrestations"
  
  ;Get installation folder from registry if available
  InstallDirRegKey HKCU "Software\MyPrestations" ""

  ;Request application privileges for Windows Vista
  RequestExecutionLevel user

;--------------------------------
;Interface Settings

  !define MUI_ABORTWARNING

;--------------------------------
;Pages

  !insertmacro MUI_PAGE_LICENSE "GPLLIC.txt"
  !insertmacro MUI_PAGE_COMPONENTS
  !insertmacro MUI_PAGE_DIRECTORY
  !insertmacro MUI_PAGE_INSTFILES
  
  !insertmacro MUI_UNPAGE_CONFIRM
  !insertmacro MUI_UNPAGE_INSTFILES
  
;--------------------------------
;Languages
  !insertmacro MUI_LANGUAGE "French"
  !insertmacro MUI_LANGUAGE "English"
  

;--------------------------------
;Installer Sections

Section "!Application Principale" SecPrinc
  ;AddSize 3684
  ;AddSize 1
  ;AddSize 1
  SetOutPath "$INSTDIR"
  
  ;ADD YOUR OWN FILES HERE...
  File "MyPrestations.exe"
  File "mingwm10.dll"
  File "QtCore4.dll"
  File "QtGuiD4.dll"
  SetOutPath "$INSTDIR\data"
  File "prst.txt"
  Delete "prst.txt"
  
  ;Store installation folder
  WriteRegStr HKCU "Software\Modern UI Test" "" $INSTDIR
  
  ;Create uninstaller
  WriteUninstaller "$INSTDIR\Uninstall.exe"

SectionEnd

;--------------------------------
;Descriptions

  ;Language strings
  LangString DESC_SecPrinc ${LANG_ENGLISH} "Core Application"
  LangString DESC_SecPrinc ${LANG_FRENCH} "L'Application MyPrestations elle-même"

  ;Assign language strings to sections
  !insertmacro MUI_FUNCTION_DESCRIPTION_BEGIN
    !insertmacro MUI_DESCRIPTION_TEXT ${SecPrinc} $(DESC_SecPrinc)
  !insertmacro MUI_FUNCTION_DESCRIPTION_END

;--------------------------------
;Uninstaller Section
Section "Raccourcis Bureau"

SetOutPath "$INSTDIR"
; CreateShortCut créé un raccourci (ici dans le menu Démarrer > programmes > MyPrestations) vers le fichier donné en paramètres.
CreateShortCut "$SMPROGRAMS\MyPrestations\MyPrestations.lnk" "$INSTDIR\MyPrestations.exe"
CreateShortCut "$SMPROGRAMS\MyPrestations\Uninstall.lnk" "$INSTDIR\Uninstall.exe"
SectionEnd

Section "Menu Démarrer"
SetOutPath "$INSTDIR"
; Ici, la variable $DESKTOP point sur le répertoire Bureau de l'utilisateur courant.
CreateShortCut "$DESKTOP\MyPrestations.lnk""$INSTDIR\MyPrestations.exe"
SectionEnd


Section "Uninstall"

  ;ADD YOUR OWN FILES HERE...

  Delete "$INSTDIR\Uninstall.exe"
  Delete "$INSTDIR\MyPrestations.exe"
 
  Delete "$INSTDIR\mingwm10.dll"
  Delete "$INSTDIR\QtCore4.dll"
  Delete "$INSTDIR\QtGuiD4.dll"
  ;Delete "$INSTDIR\data\*.*"
  RMDir "$INSTDIR\data" 	
  RMDir "$INSTDIR"
  Delete "$DESKTOP\MyPrestations.lnk"
  Delete "$SMPROGRAMS\MyPrestations\*.*"
  RMDir "$SMPROGRAMS\MyPrestations" 

  DeleteRegKey /ifempty HKCU "Software\Modern UI Test"

SectionEnd