# SDL Software Rendering from Scratch, Pixel-by-Pixel

**PixelPusher demonstrates a very fast way to display randomly colored pixels in a window with SDL**

**The key takeaway here is that one of the fastest ways to write pixels to the screen with SDL without tearing is to render them to a buffer in RAM, upload the buffer to a texture on the video card, and then present the texture to the main framebuffer.**

![PixelPusherScreenShot.gif](https://doomreboot.github.io/PixelPusherScreenShot.gif)

## Step 1 - Install SDL2 (Simple Direct Media Layer)

https://www.libsdl.org/download-2.0.php

**Download Development Libraries:**

  * SDL2-devel-2.0.10-VC.zip (Visual C++ 32/64-bit)
  
**Download Runtime Binaries:**

  * SDL2-2.0.10-win32-x86.zip (32-bit Windows)
  
  * SDL2-2.0.10-win32-x64.zip (64-bit Windows)
  
**Extract all files to Drive:\Libraries\SDL2**


## Step 2 - Create Visual Studio Project

**Create a new Visual Studio project**

![Create a new Visual Studio project](https://doomreboot.github.io/PixelPush_001.png)

**Choose Console App project template**

![Choose Console App project template](https://doomreboot.github.io/PixelPush_002.png)

**Configure your project**

![Configure your project](https://doomreboot.github.io/PixelPush_003.png)

**Edit project properties**

![Edit project properties](https://doomreboot.github.io/PixelPush_004.png)

**Add SDL include and library directories**

![Add SDL include and library directories](https://doomreboot.github.io/PixelPush_005.png)

**Add SDL library as a dependency**

![Add SDL library as a dependency](https://doomreboot.github.io/PixelPush_007.png)

**Set project to handle High DPI**

![Set project to handle High DPI](https://doomreboot.github.io/PixelPush_008.png)


## Step 3 - Build Debug Binaries and Run

**Build the project.  This will create a Debug directory such as Drive:\PixelPusher\Debug.**

**Copy the appropriate (x86 vs x64) SDL2.dll from under Drive:\Libraries\SDL2\.. into the newly created Debug directory.**


## Step 4 - Configure Release Build and Run

**Switch the project's build configuration to Release.** 

**Follow steps #2 and #3 again, but for this Release configuration.**

**Make sure that you input the correct library directory (x86 vs x64).**

**Build and Run!** 


## Next Steps...

**Refactor code into classes.  
  * A Window class which handles the window lifecycle and SDL  
  * A virtual Game/App class with Update(), Render(), etc. which can be given to the Window.  This allows for the potential of hot-swapping demos/prototypes
