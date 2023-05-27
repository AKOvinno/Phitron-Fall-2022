import pyautogui

start_x, start_y = pyautogui.position()
num = int(input())
for i in range(1, num + 1):
	line = '#' * i
	pyautogui.write(line, interval=0.25)
	pyautogui.press('enter')
