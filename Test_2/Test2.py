# Karlien Heleen Brink 52444015 Test 2

def main():
    # Initialise given langages
    languages = ["Python", "Java", "Ruby", "Pearl", "C#", "Delphi"]
    option = -1
    # While the user has not chosen to exit
    while option != 5:
        # menu setup
        print("\nMenu:\n",
              "1. Show all programming languages\n",
              "2. Add a new programming language\n",
              "3. Change a programming language\n",
              "4. Sort the programming language\n",
              "5. Exit")
        # initial option
        option = int(input("\nPlease choose your option: "))
        # user validation of option
        while option not in [1, 2, 3, 4, 5]:
            print('\nInvalid option')
            option = int(input("\nPlease choose your option: "))

        if option == 1:
            show_all(languages)
        elif option == 2:
            print(add_name(languages) + " has been added!")
        elif option == 3:
            change = input("Enter the language to change: ")
            change_name(change, languages)
        elif option == 4:
            sort_name(languages)
        elif option == 5:
            print("\nExiting...")


def change_name(change, languages):
    try:
        found = languages.index(change)
        new = input("Enter the new language name: ")
        languages[found] = new
        print(change + " has been changed")
    except ValueError:
        print("\nName to change was not found.\n")


def show_all(languages):
    # Displays all the programming languages, each on a new line.
    for language in languages:
        print(language)


def add_name(languages):
    # Prompts the user to enter a new language and adds it to the list.
    new_language = input("\nEnter the language to add: ")
    languages.append(new_language)
    return new_language


def sort_name(languages):
    # Sort the list of programming languages alphabetically.
    languages.sort()
    print("\nProgramming languages has now been sorted")


if __name__ == "__main__":
    main()
