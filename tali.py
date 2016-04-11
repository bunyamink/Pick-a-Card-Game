def large_straight(dice):
    sorted_dice = sorted(dice)
    if(sorted_dice[0] == sorted_dice[4]):
        points = 40
    else:
        points = 0
    return points

dice = [2,2,2,4,4]
score = large_straight(dice)
print("dice:", dice)
print("your score(large_straight):", score)

def small_straight(dice):
	sorted_dice = sorted(dice)
	if(sorted_dice[1] == sorted_dice[4] or sorted_dice[0] == sorted_dice[4]):
		points = 30
	else:
		points = 0
	return points
	
score2 = small_straight(dice)
print("your score(small_straight):", score2) 

def full_house(dice):
	sorted_dice = sorted(dice)
	set_dice = set(dice)
	if(len(set_dice) == 2):
		if(sorted_dice[1] != sorted_dice[3]):
			points = 25
		else:
			points = 0
	else:
		points = 0
	return points
	
score3 = full_house(dice)
print("your score(full_house):", score3)
