# ________________________________Instructions_________________________________
"""
01.- Replace Model with ClassName
02.- Delete or replace Cursor with ParentClass
03.- Delete or replace const with a class_const
04.- Delete or replace var with a class_var
05.- Delete or replace method_class with a method_class
06.- Delete or replace value with value_principal
07.- Delete or replace int with the main data type
08.- Delete or replace string with string_secondary (Match case)
09.- Delete or replace str with secondary data type (Complete words)
10.- Delete or replace private_method with method_name
11.- Delete or replace public_method with method_name
12.- Replace 01/01/2020 with date
13.- Check all the class and delete this instructions

"""
# ________________________________Instructions_________________________________

#!/usr/bin/python3
# -*- coding: utf-8 -*-

from sqlite3 import Cursor

__email__ = "oscar07112009@hotmail.com"
__license__ = "GPL"
__maintainer__ = "Oscar Martínez"
__status__ = "Developing"

__version__ = "1.0"

__date__ = "01/01/2020"

__author__ = "Oscar Martínez"

__credits__ = "AvanZen"


class Model(Cursor):
    """Class description (DocString)"""

    # ____________________________Class attributes_____________________________

    _const = 1
    var = 2

    # ____________________________Class attributes_____________________________

    # ______________________________Class methods______________________________

    @classmethod
    def method_class(cls, var: int) -> int:
        """Method description  (DocString)"""
        return Model.var + var

    # ______________________________Class methods______________________________

    # ______________________________MAGIC METHODS______________________________

    # _____________________________Generic methods_____________________________

    def __init__(self, value: int, string='string'):
        """Method description  (DocString)"""
        super(Cursor, self).__init__()
        self.__value = value
        self.__string = string

    def __len__(self):
        """Method description  (DocString)
        return len(self.__string)"""
        return len(self.__string)

    def __str__(self):
        """Method description  (DocString)
        return str(self.__string)"""
        return str(self.__string)

    def __del__(self):
        """Method description  (DocString)
        del self.__string"""
        del self.__string

    # _____________________________Generic methods_____________________________

    # ____________________________Arithmetic methods___________________________

    def __add__(self, other):
        """Method description (DocString)"""
        return self.__value + other.__value

    def __sub__(self, other):
        """Method description (DocString)"""
        return self.__value - other.__value

    def __mul__(self, other):
        """Method description (DocString)"""
        return self.__value * other.__value

    def __truediv__(self, other):
        """Method description (DocString)"""
        return self.__value / other.__value

    # ____________________________Arithmetic methods___________________________

    # _____________________________Logical methods_____________________________

    def __lt__(self, other):
        """Method description (DocString)
        return self.__value < other.__value"""
        return self.__value < other.__value

    def __le__(self, other):
        """Method description (DocString)
        return self.__value <= other.__value"""
        return self.__value <= other.__value

    def __eq__(self, other):
        """Method description (DocString)
        return self.__value == other.__value"""
        return self.__value == other.__value

    # _____________________________Logical methods_____________________________

    # ______________________________MAGIC METHODS______________________________

    # _________________________________Getters_________________________________

    @property
    def value(self) -> int:
        """Method description (DocString)"""
        return self.__value

    @property
    def string(self) -> str:
        """Method description (DocString)"""
        return self.__string

    # _________________________________Getters_________________________________

    # _________________________________Setters_________________________________

    @value.setter
    def value(self, value: int):
        """Method description (DocString)"""
        self.__value = value

    @string.setter
    def string(self, string: str):
        """Method description (DocString)"""
        self.__string = string

    # _________________________________Setters_________________________________

    # _____________________________Private methods_____________________________

    def __private_method(self):
        """Method description (DocString)
        >>> 2 + 3
        5
        """
        pass

    # _____________________________Private methods_____________________________

    # _____________________________Public methods______________________________

    def public_method(self):
        """Method description (DocString)
        >>> 2 + 3
        5
        """
        pass

    # _____________________________Public methods______________________________

    # ______________________________Inner classes______________________________

    class ModelError(Exception):
        def __init__(self, msg: str):
            super().__init__(msg)

    # ______________________________Inner classes______________________________


if __name__ == "__main__":
    import doctest
    doctest.testmod()
