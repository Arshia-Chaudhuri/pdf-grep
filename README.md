# PDF-Grep

PDF-Grep is a command-line tool designed to search for a specific string pattern within PDF files and return the occurrences along with the line numbers and the actual lines containing the pattern.

## Features

- **Pattern Matching**: PDF-Grep uses a powerful pattern matching algorithm to find occurrences of a specified string pattern within PDF files.
- **PDF to Text Conversion**: PDF files are converted into text page by page using a Python script, enabling efficient searching within the content.
- **Detailed Output**: The tool provides detailed output, including the number of occurrences of the pattern in each PDF file, along with the line numbers and actual lines containing the pattern.
- **Easy Integration**: With the core logic written in C++, PDF-Grep is easy to integrate into various projects or workflows.
- **Header File**: The `grep.h` header file contains the core logic of PDF-Grep, making it modular and easy to maintain.

## Usage

To use PDF-Grep, follow these steps:

1. Compile the project using a C++ compiler.
2. Run the executable with the desired string pattern and PDF files as input.

Example usage:
```bash
./pdfgrep "search_pattern" file_name.pdf
```


## Dependencies
- **C++ Compiler**: PDF-Grep requires a C++ compiler to build the executable.
- **Python**: The tool utilizes a Python script for converting PDF files into text.

## Installation and Running the Project

1. Clone the repository to your local machine:

```bash
git clone https://github.com/yourusername/pdf-grep.git
```
2. Navigate to the project directory:
```bash
cd pdf-grep
```
3. Run the pdfgrep.cpp file with command line arguements
```bash
g++ pdfgrep.cpp -o main
./main <patthern> file_name.pdf
```
## Contributing
Contributions to PDF-Grep are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.
