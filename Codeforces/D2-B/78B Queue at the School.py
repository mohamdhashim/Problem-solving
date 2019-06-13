"""
/*************************************************************
# by        : mohamd abda alazez hashim                      #
# e-mail    : mohamdmido2011@gmail.com                       #
# problem   :78B.Queue at the School                         #
*************************************************************/
"""
n = int(input())

colors_repeat = int(n/7)
remain = n%7

colors="ROYGBIV"
no_equal="GBIV"

if remain == 6:
    colors=colors*colors_repeat+"RO"+no_equal
elif remain == 5:
    colors=colors*colors_repeat+"R"+no_equal
else: 
    colors=colors*colors_repeat+no_equal[:remain]

    
print(colors)
