#include <stdio.h>
#include <string.h> //strlen()

int main() {
    char num[1001];
    
    while (scanf("%s", num) == 1) { //成功輸入就會執行
        if (num[0] == '0') { //輸入0結束
            break;
        }
        
        int len = strlen(num); //字串長度
        int sum = 0; //總和
        
        for (int i = 0; i < len; i++) { //每位數的數字相加
            sum += num[i] - '0'; //字元轉換整數
        }
        
        int degree = 1; //次方
        int temp = sum;
        
        while (temp > 9) { // 計算數字的位數，直到數字小於等於9
            int newSum = 0;
            
            while (temp > 0) {
                newSum += temp % 10; 
                temp /= 10;
            }
            
            temp = newSum;
            degree++;
        }
        
        if (temp == 9) {
            printf("%s is a multiple of 9 and has 9-degree %d.\n", num, degree);
        } else {
            printf("%s is not a multiple of 9.\n", num);
        }
    }
    
    return 0;
}