from time import sleep

import pyautogui

sleep(5)

for i in range(3):
    pyautogui.write("I Love you, Python", interval = 0.25)
    pyautogui.press("Enter")
