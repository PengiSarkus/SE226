users = {}

userCount = int(input("Enter number of users: "))

for i in range(userCount):
    userName = input("Enter username: ")
    itemCount = int(input("How many items? "))

    userItemList = []

    for j in range(itemCount):
        item = input(f"Item {j + 1}: ")
        userItemList.append(item)

    users[userName] = userItemList


print("User DATA : ")
for user, items in users.items():
    print(f"{user}: {items}")

for user, items in users.items():
    dupRemoveSet = set(items)
    users[user] = sorted(dupRemoveSet)
    print(users)


itemCountDict = {}
for items in users.values():
    for item in items:
        if item in itemCountDict:
            itemCountDict[item] += 1
        else:
            itemCountDict[item] = 1


commonItems = []
for item, count in itemCountDict.items():
    if count > 1:
        commonItems.append(item)


uniqueItems = set()
for items in users.values():
    for item in items:
        uniqueItems.add(item)
        for commonItem in commonItems:
            if commonItem in uniqueItems:
                uniqueItems.remove(commonItem)


maxCount = max(itemCountDict.values())
mostPopular = []

for item, count in itemCountDict.items():
    if count == maxCount:
        mostPopular.append(item)

print("COMMON ITEMS:", commonItems)
print("UNIQUE ITEMS:", uniqueItems)
print("MOST POPULAR ITEM:", mostPopular)
