# https://www.reddit.com/r/dailyprogrammer/comments/pii6j/difficult_challenge_1/
import random

def main():
	print('STARTING!')
	print("Higher = h\nLower = l\nCorrect = c")
	top = 101
	bottom = 0
	attempts = 1
	reply = ''
	while reply != 'y':
		guess = int((top+bottom)/2)
		print(guess)
		reply = input('Higher, Lower or Correct?: ')
		if reply == 'c':
			print(f"Computer took {attempts}")
			break
		elif reply == 'h':
			bottom = guess
			attempts += 1
		elif reply == 'l':
			top = guess
			attempts += 1

if __name__ == '__main__':
	main()