#!usr/bin/python3

def trans(entry):

    translation=""

    for letter in entry:

        if letter in "aeiouAEIOU":
            translation = translation + "s"
        else:
            translation = translation + letter

    print(translation)

trans(input("Enter a phrase: "))
