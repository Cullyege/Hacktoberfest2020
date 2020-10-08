import PyPDF2
import sys

inputs = sys.argv[1:]

def pdf_combiner(pdflist):
	merger = PyPDF2.PdfFileMerger()
	
	for pdf in pdflist:
		merger.append(pdf)

	merger.write('Combined.pdf')	

pdf_combiner(inputs)
