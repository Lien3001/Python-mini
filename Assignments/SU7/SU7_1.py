# Karlien Heleen Brink 52444015


def main():

    # Get user email as input
    email_in = input('Please enter your email: ')

    # Check if @ is present in email provided
    found =  email_in.find('@')

    while found == -1:  # Email invalid if no @ present
        # error message
        print("Please enter a valid email address.")
        # get new email
        email_in = input('Please enter your email: ')
        # change found value
        found =  email_in.find('@')

    split_email(email_in)


def split_email(email_in):
    # get found again
    # I don't know whether the brief allows me to use it as an argument
    found =  email_in.find('@')

    # slice input for username and domain
    username = email_in[ : found]
    domain = email_in[found + 1 : ]

    # output
    print("Username: ", username)
    print("Domain: ", domain)


if __name__ == "__main__":
    main()
