#!/usr/bin/env python

from abc import ABCMeta, abstractmethod

class Book(object, metaclass=ABCMeta):
    def __init__(self, title, author):
        """
        Parameters
        ----------
        title : str
            Title for book
        author : str
            Name of author
        """
        self.title = title
        self.author = author

    @abstractmethod
    def display(): pass

#Write MyBook class
class MyBook(Book):
    """
    Represents book with title, author and price
    """
    def __init__(self, title: str, author: str, price: float):
        """
        Parameters
        ----------
        price : float
            Price of book
        """
        super().__init__(title, author)
        self.price = price

    def display(self):
        print(f'Title: {self.title}')
        print(f'Author: {self.author}')
        print(f'Price: {self.price}')

title = input()
author = input()
price = float(input())
new_book = MyBook(title, author, price)
# new_novel=MyBook(title,author,price)
# new_novel.display()

new_book.display()
