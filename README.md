# 怠惰なくそ

> 怠惰なくそ is an anki card creation tool aimed towards people who can't be bothered by their card quality. It provides close to no customization options, but gets the job done.

# Getting Started

This repository uses [Premake 5](https://github.com/premake/premake-core/releases) to generate project files, but it has only been tested with [Visual Studio](https://visualstudio.microsoft.com/pt-br/downloads/).

## Prerequisites

You'll need to install `python`, `conan` and `premake5` in order to build this project.

* [Python 3](https://www.python.org/downloads/)
* [Conan 2.0](https://conan.io/downloads)
* [Premake 5](https://github.com/premake/premake-core/releases)

You may also need to add an environment variable to use `premake5`.

## Installation
1. **Clone the repository**
    ```bash
    git clone https://github.com/DatDarkAlpaca/taidanakuso
    ```

2. **Generate the project**
    If you're building on a Windows machine, you can use the `build.cmd` file to execute the Python script. 
    This automatically calls premake, so you must specify the project file of your choice.

    ```bash
    .\build <action: vs2022, vs2021, gmake, ...>
    ```

3. **Compile the project**
   Use the generated project files to build the project. 
   After that, you should have a working copy under `taidanakuso/build/bin/{configuration}/taidana-kuso`. 

# License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT) - see the [LICENSE](LICENSE) file for details
