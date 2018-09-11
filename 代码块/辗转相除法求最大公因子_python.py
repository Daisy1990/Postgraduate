'''
求两个正整数的最大公因子。
    我们采用欧几里德算法来求最大公因子，其算法是：
    （1）输入两个正整数 m和 n.
     (2) 用 m 除以 n,余数为 r, 如果r  等于0，则n 是最大的公因子，算法结束，否则（3）.
    （3）把 n 赋给 m,把 r 赋给 n,转（2）.
辗转相除法

'''

def maxFactor(m,n):
    if(n == 0):
        return m
    else:
        return maxFactor(n,m%n)
    # r = 0
    # while n>0:
    #     r = m % n;
    #     m = n;
    #     n = r;
    # return m;

a = int(input("请输入第一个正整数:"))
b = int(input("请输入第2个正整数:"))
print(a,"和",b,"的最大公约数",maxFactor(a,b))








