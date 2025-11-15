VectorDefense

VectorDefense is a "student version" tower defense game being built in C++ and SFML over a 6-month period.
This project is a learning exercise in C++ game development and professional GitHub workflows.

Tech Stack

Language: C++17

Library: SFML (for graphics, windowing, and input)

Build System: CMake

IDE: VS Code (recommended)

How to Build (Windows)

Install a C++ Compiler:

Install Visual Studio 2022. During installation, select the "Desktop development with C++" workload. This will provide the MSVC compiler.

Install SFML:

Download the latest SFML binaries for "Visual C++" (e.g., 64-bit).

Extract the ZIP to a permanent location, for example: C:\dev\SFML.

Add the C:\dev\SFML\bin directory to your system's PATH environment variable so it can find the .dll files.

Install CMake:

Download and install the latest CMake for Windows.

Install VS Code:

Install Visual Studio Code.

Install the "C/C++ Extension Pack" and "CMake Tools" extensions from the VS Code marketplace.

Configure and Build:

Clone this repository: git clone ...

Open the cloned folder in VS Code (code .).

VS Code should detect it's a CMake project. It will ask you to "Select a Kit". Choose the "Visual Studio Community 2022 - amd64" (or similar) kit.

A new pop-up will ask for the SFML_DIR. Set it to the location of your SFML download (e.g., C:/dev/SFML).

If it doesn't ask, open the Command Palette (Ctrl+Shift+P), type "CMake: Configure", and press Enter.

Once configured, the "Build" button (or F7) will build the project.

The "Run" button (or Ctrl+F5) will execute the game.