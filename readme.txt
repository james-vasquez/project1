This is a simple readme file

-inscription summer fh
-ask for tree - mushrooms


-compile png, libz lib vs. use precompiled lib

vs2013.4_dskexp_DEU.iso
wdexpress_full.exe(do not register)
(containes c++?: answer is yes - including complete dev stack sql server, c#, python)

<###
python-3.6.2.exe

check "Add Python 3.6 to PATH"

Customize:
disable: documentation, tcl + idle, python test suite, py launcher + for all users
Advanced options: install for all users

C:\Program Files\Python36-32

------
from PIL import ImageGrab
import numpy as np
import cv2
import pynput
import time
from pynput.keyboard import Key, Controller

-
opencv -> numpy 1.11.3 
Pillow -> olefile
-
history:
pip install numpy-1.13.3-2-cp36-none-win32.whl
pip install opencv_python-3.3.0.10-cp36-cp36m-win32.whl

unzip olefile-master, cd into dir, install.bat

pip install Pillow-4.3.0-cp36-cp36m-win32.whl
pip install six-1.11.0-py2.py3-none-any.whl
pip install pynput-1.3.7-py2.py3-none-any.whl
-
from PIL import ImageGrab
import numpy as np
import cv2
import pynput
import time
from pynput.keyboard import Key, Controller

def match():

	img = ImageGrab.grab()
	img_np = np.array(img)

	img_gray = cv2.cvtColor(img_np, cv2.COLOR_BGR2GRAY)


	template_gray = cv2.imread('template.png', 0)
	w, h = template_gray.shape[::-1]


	res = cv2.matchTemplate(img_gray, template_gray, cv2.TM_CCOEFF_NORMED)
	min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(res)

	top_left = max_loc
	bottom_right = (top_left[0] + w, top_left[1] + h)

	cv2.rectangle(img_gray, top_left, bottom_right, 255, 1)

	if (max_val >= 0.98):
		print("max_val2: "+str(max_val))
		timestr = time.strftime("%Y%m%d_%H%M%S")
		cv2.imwrite('match_'+timestr+'.png', img_gray)

		keyboard = Controller()

		keyboard.press(Key.enter)
		time.sleep(0.2)
		keyboard.release(Key.enter)

while (True):
	match()
	time.sleep(7)

###>
