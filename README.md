# Game of Life CUDA

OpenGL/CUDA implementation of Conway's Game of Life.
Uses Qt 6.7 for the GUI.

Tested on NVIDIA RTX 5000 GPU:
- Windows 10 MSVC 2019 CUDA 12.4
- Ubuntu 22.04 gcc 11.4.0 CUDA 12.4

# Build

1. Install CUDA and Qt 6.
2. Open the .pro project file (there is one for Windows and one for Linux) in QtCreator.
3. Edit the .pro file with the correct paths to your CUDA installation.
4. Save the .pro file.
5. Select Release configuration.
6. Build.

On Ubuntu, if your computer has an integrated GPU, you may need to run the application using:
```
__GLX_VENDOR_LIBRARY_NAME=nvidia __NV_PRIME_RENDER_OFFLOAD=1 ./game_of_life_cuda
```
