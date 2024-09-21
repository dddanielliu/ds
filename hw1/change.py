from decimal import Decimal
while True:
    try:
        r = input().split(',')
        a = []
        for i in range(len(r)):
            if (i>=2):
                try:
                    a.append("{:.6f}".format(float(int(r[i])/1000000)))
                except:
                    a.append(r[i])
            else:
                a.append(r[i])
        print(",".join(map(str, a)))
    except:
        break