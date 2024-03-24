# pip install pypdf

from pypdf import PdfReader
import sys


def process_text(text, page_number):
  """
  Processes text by inserting page and line numbers for each line.

  Args:
	  text: String containing the text content.

  Returns:
	  A list of strings with page and line numbers inserted.
  """
  processed_lines = []
  line_num = 1
  for line in text.splitlines():
    processed_lines.append(f"Page {page_number}, Line {line_num}: {line}")
    line_num += 1
  return processed_lines


def read_pdf_to_text(pdf_path):
  """
  Reads a PDF and returns the processed text with page and line numbers.

  Args:
	  pdf_path: Path to the PDF file.

  Returns:
	  A list of strings containing processed text with page and line numbers.
  """
  reader = PdfReader(pdf_path)
  page_number = 1
  updated_text = []
  for page in reader.pages:
    text = page.extract_text()
    updated_text += process_text(text, page_number)
    page_number += 1
  return updated_text


if __name__ == "__main__":
  # Example usage
  pdf_path = str(sys.argv[1])
  processed_text = read_pdf_to_text(pdf_path)
  text = ""
  for line in processed_text:
    text += line + "\n"
  with open('content.txt', 'w') as f:
    f.write(text)
