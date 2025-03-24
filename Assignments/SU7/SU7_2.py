# Karlien Heleen Brink 52444015


def main():
    
    print("Palindromes\n")
    # get user input
    word = input("Enter a word: ")

    # if function returns true we have a palindrome
    if palindrome(word):
        print(word, "is a palindrome")
    else:
        print(word, "is not a palindrome")


def palindrome(word):

    # normalise word
    word = word.lower()

    # if the word is equal to the reverse of the word
    if word == word[len(word)-1: : -1]:
        # if word = reverse it is a palindrome
        pal = True
    else:
        # if word not = reverse it is not a palindrome
        pal = False

    return pal


# call main function if file not included as module
if __name__ == "__main__":
    main()
