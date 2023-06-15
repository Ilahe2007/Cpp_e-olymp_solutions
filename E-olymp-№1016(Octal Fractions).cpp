from decimal import Decimal
a=0
while(a!=' '):
    try:
        a=float(input())
        b=str(a)
        b=b.replace('.','')
        c=0
        d=0
        def g(n):
            if(n==1):
                return 1
            else:
                return g(n-1)*8
        for i in b:
            d=d+1
            c=c+int(i)/g(d)
        print(a,'[8] =',Decimal(c),'[10]')
    except:
        break
