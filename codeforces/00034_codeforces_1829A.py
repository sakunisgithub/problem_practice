testcases = int(input())
 
for i in range(testcases) :
	given_word = input()
	
	our_word = "codeforces"
	
	count = 0
	
	for j in range(10) :
		if(given_word[j] != our_word[j]) :
			count += 1
	
	print(count)