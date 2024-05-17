# WWE 2K Battlegrounds SDK
### Requires Visual Studio 2019 
[Guide For Installing](https://modding.wiki/en/hogwartslegacy/developers/PhoenixUProjGuide "Guide For Installing")
**(Click Tab: Install Visual Studio 2019 and follow it up until .NET 4.5 is Installed)**
### Requires Unreal Engine 4.24
Available on Epic Games Launcher


## Modding SDK for WWE 2K Battlegrounds
Created using UE4SS Header Dumpers.

C++ Header Based Modding Kit For WWE 2K Battlegrounds, Dumped using [UE4SS](https://github.com/UE4SS-RE/RE-UE4SS "UE4SS") and generated using [GameProjectGenerator.](https://github.com/Buckminsterfullerene02/UE4GameProjectGenerator "GameProjectGenerator.") 

#### Included is a sample texture mode for The Rock to package and test. 

## How To Launch/Compile
- Clone the repo or[ Download As Zip](https://github.com/lynchreborn/WWEBattlegroundsSDK/archive/refs/heads/main.zip " Download As Zip").

- Extract The Zip.

- Right click on "WWEPlaygrounds.uproject" and select "Switch Unreal Engine Version" and select 4.24

- [![](https://i.imgur.com/HRIhBBg.png)](https://i.imgur.com/HRIhBBg.png)

- This should create a WWEPlaygrounds.sln file. 

- Double click the .uproject to open the project.

- Select Yes to rebuild the modules. 

- [![](https://i.imgur.com/Gu1jGvV.png)](https://i.imgur.com/Gu1jGvV.png)

- If you installed VS2019 and 4.24 correctly, you should be seeing something like this in the Log. 

- [![](https://i.imgur.com/ZEitWEr.png)](https://i.imgur.com/ZEitWEr.png)

- After it compiles the plugins, the project should launch into Unreal Editor.

- [![](https://i.imgur.com/X61nlsK.png)](https://i.imgur.com/X61nlsK.png)

## Creating A Mod
- Included is a sample "The Final Boss" The Rock texture mod. 

- Go to Edit > Project Settings > Packaging and make sure "Use Pak File" is** UNCHECKED.**

- Go to File > Package Project > Windows > Win 64

- In the folder you chose as the output for Packaging, you will find a "WindowsNoEditor" folder. Inside that, will be "WWEPlaygrounds" folder.

- [![](https://i.imgur.com/0AA3GfL.png)](https://i.imgur.com/0AA3GfL.png)

- Delete everything in that folder except for the CONTENT folder. This is where your mod assets are kept.

- [![](https://i.imgur.com/HRDWcNf.png)](https://i.imgur.com/HRDWcNf.png)

- Anywhere on your computer, make a folder with the name of your mod as well as adding *"_P"* to the end of the folder name. Example being "z_TheFinalBoss_P"

- Cut and paste the cooked WWEPlaygrounds folder into this mod folder.

- [![](https://i.imgur.com/NecUlv5.png)](https://i.imgur.com/NecUlv5.png)

- Included in this repo is an `UnrealPak` folder. Open it now.

- [![](https://i.imgur.com/1MOLXGl.png)](https://i.imgur.com/1MOLXGl.png)

- Drag your mod folder (e.g `TheFinalBoss_P`) onto `UnrealPak-With-Compression.bat`

- If all goes well, it should create a .pak folder right beside your mod folder. In my case, it created `TheFinalBoss_P.pak`

- [![](https://i.imgur.com/71Unp8a.png)](https://i.imgur.com/71Unp8a.png)

- 