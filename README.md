# WWE 2K Battlegrounds Modding Kit
**NOTE:** This SDK is NOT required to mod Battlegrounds, but allows access to their custom blueprint classes amongst other benefits.
### Requires Visual Studio 2019 
[Guide For Installing](https://modding.wiki/en/hogwartslegacy/developers/PhoenixUProjGuide "Guide For Installing")
**(Click Tab: `Install Visual Studio 2019` and follow it up until `.NET 4.5 is Installed`)**
### Requires Unreal Engine 4.24
Available on Epic Games Launcher


## Modding SDK for WWE 2K Battlegrounds
Created using UE4SS Header Dumpers.

C++ Header Based Modding Kit For WWE 2K Battlegrounds, Dumped using [UE4SS](https://github.com/UE4SS-RE/RE-UE4SS "UE4SS") and generated using [GameProjectGenerator.](https://github.com/Buckminsterfullerene02/UE4GameProjectGenerator "GameProjectGenerator.") 

#### Included is a sample texture mod for The Rock to package and test. 

## How To Launch/Compile
- Clone the repo or[ Download As Zip](https://github.com/lynchreborn/WWEBattlegroundsSDK/archive/refs/heads/main.zip " Download As Zip").

- Extract The Zip.

- Right click on `WWEPlaygrounds.uproject` and select `Switch Unreal Engine Version` and select 4.24

- [![](https://i.imgur.com/HRIhBBg.png)](https://i.imgur.com/HRIhBBg.png)

- This should create a `WWEPlaygrounds.sln` file. 

- Double click the .uproject to open the project.

- Select Yes to rebuild the modules. 

- [![](https://i.imgur.com/Gu1jGvV.png)](https://i.imgur.com/Gu1jGvV.png)

- If you installed VS2019 and 4.24 correctly, you should be seeing something like this in the Log. 

- [![](https://i.imgur.com/ZEitWEr.png)](https://i.imgur.com/ZEitWEr.png)

- After it compiles the plugins, the project should launch into Unreal Editor.

- [![](https://i.imgur.com/X61nlsK.png)](https://i.imgur.com/X61nlsK.png)

## Creating A Simple Texture Mod
- Included is a sample **"The Final Boss" The Rock** texture mod. We will be packaging this mod. Look at how it re-creates the folder structure from the original game files.

- Go to `Edit > Project Settings > Packaging` and make sure `Use Pak File` is **UNCHECKED.**

- Go to `File > Package Project > Windows > Win 64`

- In the folder you chose as the output for Packaging, you will find a `WindowsNoEditor` folder. Inside that, will be `WWEPlaygrounds` folder.

- [![](https://i.imgur.com/0AA3GfL.png)](https://i.imgur.com/0AA3GfL.png)

- Delete everything in that folder except for the `CONTENT` folder. This is where your mod assets are kept.

- [![](https://i.imgur.com/HRDWcNf.png)](https://i.imgur.com/HRDWcNf.png)

- Anywhere on your computer, make a folder with the name of your mod as well as adding `_P` to the end of the folder name. Example being `TheFinalBoss_P`

- Cut and paste the cooked `WWEPlaygrounds` folder into this mod folder.

- [![](https://i.imgur.com/NecUlv5.png)](https://i.imgur.com/NecUlv5.png)

- Included in this repo is an `UnrealPak` folder. Open it now.

- [![](https://i.imgur.com/1MOLXGl.png)](https://i.imgur.com/1MOLXGl.png)

- Drag your mod folder (e.g `TheFinalBoss_P`) onto `UnrealPak-With-Compression.bat`

- If all goes well, it should create a .pak folder right beside your mod folder. In my case, it created `TheFinalBoss_P.pak`

- [![](https://i.imgur.com/71Unp8a.png)](https://i.imgur.com/71Unp8a.png)

- Place it in your WWE 2K Battlegrounds mods folder, located at `WWE 2K Battlegrounds\WWEPlaygrounds\Content\Paks\~mods`

- Have fun with your mod!

![](https://i.imgur.com/QZELEdq.png)

## Alternative Pak-ing Method
If you are working on multiple mods in the same project, or have files you don't want to be included in your pak (such as the character skeleton), you can use Pak Chunks and Collections to sort and create your files.

- Go to `Edit > Project Settings > Packaging` again.

- This time, turn ON `Use Pak File` and `Generate Chunks`

- [![](https://i.imgur.com/7uwY7SD.png)](https://i.imgur.com/7uwY7SD.png)

- Next, in the Content Browser, right click to create a new asset. Go to `Miscellenaous > Data Asset` and then select `PrimaryAssetLabel`

- [![](https://i.imgur.com/4N6sbfD.png)](https://i.imgur.com/4N6sbfD.png)
- [![](https://i.imgur.com/ZyWm7p7.png)](https://i.imgur.com/ZyWm7p7.png)

- Name it anything you like, Im going with `PAL_TheFinalBoss`.

- Next, switch to Collection View and create a new collection. Call it anything you want. like 	`TheFinalBoss`

- [![](https://i.imgur.com/0zhD7TW.png)](https://i.imgur.com/0zhD7TW.png)
- [![](https://i.imgur.com/jjSWqhG.png)](https://i.imgur.com/jjSWqhG.png)

- Select all the files that will be included in your mod (including the `PAL` we made), right click them, select `Manage Collections` and add them to your collection.

- [![](https://i.imgur.com/WjTBDS3.png)](https://i.imgur.com/WjTBDS3.png)

- Double click on the `PrimaryAssetLabel` to open it. Set the `Priority` to 1, and `Chunk ID` to anything you like. We will use `5` for this example. Set `Cook Rule` to `Always Cook`, make sure `Is Runtime Label?` is checked and then down below under `Asset Collections`, add your custom collection.

- [![](https://i.imgur.com/r9BUroN.png)](https://i.imgur.com/r9BUroN.png)

- Package the mod again.

- Inside your Packaging export folder, you will now find a `Paks` folder inside of the `WWEPlaygrounds/Content` folder instead. Inside, will be `pakchunk0` and `pakchunk#YourNumber#`

- [![](https://i.imgur.com/4H2yt2W.png)](https://i.imgur.com/4H2yt2W.png)

- Simply rename the pakchunk your mod is in, and make sure to add the pakchunk number to the file name. Mine will be renamed to `TheFinalBoss_5_P.pak`

- [![](https://i.imgur.com/EfN2Ksj.png)](https://i.imgur.com/EfN2Ksj.png)

- Place this new pak file in your `~mods` folder once again, launch the game and test it. 

![](https://i.imgur.com/kPljufs.png)

#### **NEGATIVES OF USING PAK CHUNKS:**
No two mods can share the same `pakchunk` internal ID or else the user's game will crash. It is **ALWAYS** better to use the first method with UnrealPak unless you have a complex project with lots of dependancies you don't want to chunk. However, you can also just delete those dependancies (such as the character skeleton) before using UnrealPak. If you use a pakchunk, remember to make the pak chunk ID clear in the mod file name. 