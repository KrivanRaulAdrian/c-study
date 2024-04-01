from PIL import Image, ImageFilter

before = Image.open("cat.png")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("out_two.png")