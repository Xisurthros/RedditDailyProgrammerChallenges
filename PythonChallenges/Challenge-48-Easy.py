# https://www.reddit.com/r/dailyprogrammer/comments/t78m8/542012_challenge_48_easy/

# Version 1
def partition1(toSort: list):
	even = []
	odd = []
	for num in toSort:
		if num % 2 == 0:
			even.append(num)
		else:
			odd.append(num)
	for item in odd:
		even.append(item)
	print(even)

# Version 2
def partition2(toSort: list):
	even = []
	odd = []
	clean = [even.append(num) if num % 2 == 0 else odd.append(num) for num in toSort]
	even.extend(odd)
	print(even)

partition1([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15])
partition2([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15])