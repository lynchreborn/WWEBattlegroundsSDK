# WWE 2K Battlegrounds SDK
### Requires Visual Studio 2019 
[Guide For Installing](https://modding.wiki/en/hogwartslegacy/developers/PhoenixUProjGuide "Guide For Installing")
**(Click Tab: Install Visual Studio 2019 and follow it up until .NET 4.5 is Installed)**
### Requires Unreal Engine 4.24
Available on Epic Games Launcher


## Modding SDK for WWE 2K Battlegrounds
Created using UE4SS Header Dumpers.

C++ Header Based Modding Kit For WWE 2K Battlegrounds, Dumped using [UE4SS](https://github.com/UE4SS-RE/RE-UE4SS "UE4SS") and generated using [GameProjectGenerator.](https://github.com/Buckminsterfullerene02/UE4GameProjectGenerator "GameProjectGenerator.") 

## How To Launch/Compile
- Clone the repo or[ Download As Zip](https://github.com/lynchreborn/WWEBattlegroundsSDK/archive/refs/heads/main.zip " Download As Zip").
- Extract The Zip.
- Right click on "WWEPlaygrounds.uproject" and select "Switch Unreal Engine Version" and select 4.24
- [![](https://i.imgur.com/HRIhBBg.png)](https://i.imgur.com/HRIhBBg.png)
- This should create a WWEPlaygrounds.sln file. 
- Double click the .uproject to open the project.
- Select Yes to rebuild the plugin dummies. 
- [![](https://i.imgur.com/Gu1jGvV.png)](https://i.imgur.com/Gu1jGvV.png)
- If you installed VS2019 and 4.24 correctly, you should be seeing something like this in the Log. 
- [![](https://i.imgur.com/ZEitWEr.png)](https://i.imgur.com/ZEitWEr.png)
- After it compiles the plugins, the project should launch into Unreal Editor.
- [![](https://i.imgur.com/X61nlsK.png)](https://i.imgur.com/X61nlsK.png)
- Test a packaging by going to File > Package Project > Windows > Win 64
