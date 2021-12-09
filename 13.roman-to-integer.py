
def romanToInt(s):
    roman_list = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
    n = len(s)
    num = 0
    for i in range(n):
        print("s[i]=",s[i])
        if i+1<n and roman_list[s[i]]<roman_list[s[i+1]]:
            print(i,n,roman_list[s[i]],roman_list[s[i+1]])
            num -= roman_list[s[i]]
            print(num)
        else:
    
            num += roman_list[s[i]]
            
    return num

romanToInt("MCMXCIV")