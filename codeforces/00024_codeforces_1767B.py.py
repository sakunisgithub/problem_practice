testcases = int(input())

for i in range(testcases) :
    number_of_towers = int(input())

    blocks_in_towers = [int(i) for i in input().split()]

    block_in_tower_1 = blocks_in_towers[0]

    blocks_in_towers = sorted(blocks_in_towers[1:])

    for x in blocks_in_towers :
        if x > block_in_tower_1 :
            block_in_tower_1 = block_in_tower_1 + ((x - block_in_tower_1 + 1) // 2 )
    
    print(block_in_tower_1)

# https://codeforces.com/problemset/problem/1767/B