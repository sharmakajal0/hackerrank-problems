#!/usr/bin/env python

n = int(input())

class PhoneBook(object):
    def __init__(self):
        super().__init__()
        self.phonebook = {}

    def add_entry(self, name: str, phone_number: str) -> None:
        """Adds entry to phone book for name and phone number.
        Parameters
        ----------
        name : str
            Name in phone book
        phone_number : str
            Phone Number in phone book
        """
        phonebook[name] = phone_number

    def exists(self, name: str) -> bool:
        """Check if entry with name exits in phonebook.
        
        Parameters
        ----------
        name : str
            Name for which to check
        
        Returns
        -------
        bool
            True if name exists in phone book otherwise False
        """
        return name in self.phonebook

    def find(self, name: str) -> str:
        """Searches for name in phone book and returns phone number against it.
        Parameters
        ----------
        name : str
            Name for which to find the phone number
        """
        return self.phonebook.get(name, None)


phone_book = PhoneBook()

for _ in range(n):
    name, number = input().split()
    phone_book.add_entry(name, number)

while(True):
    try:
        name = input()
        phone_book.ex
        if phone_book.exists(name):
            phone_number = phone_book.find(name)
            print("%s=%s" % (name, phone_number))
        else:
            print("Not Found")
    except EOFError:
        break
