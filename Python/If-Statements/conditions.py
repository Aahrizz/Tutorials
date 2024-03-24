has_high_income = False
has_good_credit = False

#AND : noth operators should be true
#OR: at leat one operator should be true
#NOT: reverses the boolean

if has_high_income and has_good_credit:
    print("Client is eligible for a loan!")
elif has_high_income or has_good_credit:
    print("Give the client half of requested loan!")
elif has_good_credit and not has_high_income:
    print("Give the client a loan!")
else:
    print("Not eligible for a loan!")