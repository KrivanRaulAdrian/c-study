from PIL import Image, ImageFilter

before = Image.open("cat.png")
after = before.filter(ImageFilter.BoxBlur(10))
after.save("out.png")