import re
names = ['Hello you',
       'Egyptian army',
       'Better future for youth',
       'God is good all the time',
       'sys4you5']
regex = '^\w+ \w+$'
for regs in names:
    eq = re.search(regex, regs)
    if eq:
        print(eq.group())