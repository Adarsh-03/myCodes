try:
    raise Exception('Hello','World')
except Exception as errorobj:
    print(type(errorobj))
    print(errorobj.args)
    print(errorobj)
    arg1, arg2 = errorobj.args
    print('a')