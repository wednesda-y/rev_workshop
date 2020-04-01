import sys

if (len(sys.argv) != 2):
    print("provide an arg")
    exit()


encrypted = open(sys.argv[1]).read();

out = [] 
print(len(encrypted))
for i in range(0, len(encrypted), 8):
    
    bit = encrypted[i]
    if(bit == '1'):
        nbit = '0'
        q = '0' 
    elif(bit == '0'):
        nbit = '1'
        q = '1'

    out.append(q)
    
print("solution");
def decode_binary_string(s):
    return ''.join(chr(int(s[i*8:i*8+8],2)) for i in range(len(s)//8))
print(decode_binary_string("".join(x for x in out)))

