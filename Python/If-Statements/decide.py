price = 1000000

has_good_credit = False

if has_good_credit:
    down_paymemnt = 0.1 * price
else: 
    down_paymemnt = 0.3 * price
print(f"Down payment: {down_paymemnt}")