class Solution:
    def addBinary(self, a: str, b: str) -> str:
        dec_a = int(a,2)
        dec_b = int(b,2)
        return str(bin(dec_a + dec_b).replace("0b",""))