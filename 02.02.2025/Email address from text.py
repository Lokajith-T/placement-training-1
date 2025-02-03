import re

def extract_emails(text):
    pattern = r'[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}'
    return re.findall(pattern, text)

sample_text = input("Enter text with emails: ")
emails = extract_emails(sample_text)
print("Extracted Emails:", emails if emails else "No emails found.")
