import sys
import os
from PIL import Image

img_folder = sys.argv[1] #Enter folder which contains the JPEG image
output_folder = sys.argv[2] #Enter folder where you want to save the converted image

if not os.path.exists(output_folder):
    os.makedirs(output_folder)

for file_name in os.listdir(img_folder):
    img = Image.open(f'{img_folder}{file_name}')     
    clean_name = os.path.splitext(file_name)[0]
    img.save(f'{output_folder}{clean_name}.png', 'png')
