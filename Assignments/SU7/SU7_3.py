# Karlien Heleen Brink 52444015


def main():
    # heading
    print("Convert a sentence to mxit!\n")

    # get input
    given = input("Enter a sentence to convert: ")
    print('Converted sentence:\n', mxit(given))


def mxit(sentence):
    # one iteration for weach vowel(upper and lower)
    for l in ['a', 'e', 'i', 'u', 'o','A', 'E', 'I', 'U', 'O']:
        #if vowel, replace with nothing in copy
        sentence = sentence.replace(l, '')

    return sentence


if __name__ == '__main__':
    main()
