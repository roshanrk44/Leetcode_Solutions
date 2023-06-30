class Solution {
public:
    string intToRoman(int num) {
     
             string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hundreds[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thousands[]={"","M","MM","MMM"};

        int thousandsIdx = num / 1000;
        int hundredsIdx = (num % 1000) / 100;
        int tensIdx = (num % 100) / 10;
        int onesIdx = num % 10;
        
        return thousands[thousandsIdx] + hundreds[hundredsIdx] + tens[tensIdx] + ones[onesIdx];

    }
};