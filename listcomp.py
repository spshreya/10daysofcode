lowercase = 'abcdefghijklmnopqrstuvwxyz'
digits = '0123456789'

answer = [i+k+j+n for i in lowercase[0:26] for k in lowercase[0:26] for j in digits[0:10] for n in digits[0:10]]
print(answer)
