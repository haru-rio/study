#include <stdio.h>
#include "function1.h"

int main(void)
{
    input_check();
    
    int score;
    printf("点数を入力して下さい:");
    scanf("%d", &score);
    if (score > 100) {
        printf("入力が100より大きいので修正します。\n");
        score = 100;
    }
    printf("点数は %d 点です。\n", score);
    
    int age;
    printf("年齢:");
    scanf("%d", &age);
    if (age <= 3){
        printf("幼児：無料\n");
    } else if (age <= 12){
        printf("子供：250円\n");
    } else {
        printf("大人:400円\n");
    }   // else-if文
    
    int no;
    printf("１〜４で数字を入力して下さい。ドラえもんのキャラが出ます。：");
    scanf("%d", &no);
    switch (no) {                   //switch
        case 1:
            printf("野比のび太\n");
            break;
        case 2:
            printf("源静香\n");
            break;
        case 3:
            printf("剛田武\n");
            break;
        case 4:
            printf("骨川スネ夫\n");
            break;
        default:                       //それ以外の表記
            printf("そんな番号の人はいない\n");
            break;
    }
    int male;
    printf("性別を数字で選ぶ１〜４を選択してください:");
    scanf("%d", &male);
    switch (male) {
        case 1:
        case 3:
        case 4:
            printf("男性\n");     //case文をまとめて表示　breakを飛ばせば連続して記載可
            break;
        case 2:
            printf("女性\n");
            break;
        default:
            printf("そんな番号の人は居ない\n");
            break;
    }
    //switch文は整数値のみしか判別出来ない。　変数や実数を扱うのであればif文を使う
    int i;
    for (i = 1; i <= 10; i++){
        printf("%02d 回目\n",i);
    }  //繰り返し文
    for (i = 1; i <= 10; i++){
        printf("%d\n", i);
        if (i == 3) break;   //ループの終了
    }
    
    int money,month;
    money = 1;
    month = 1;
    while(money < 1000000){
        printf("%02d 月目 : %07d 円\n", month,money);
        money *= 2;
        month++;
    }
    printf("%02d 月目に %07d 円となり、100万円を超える\n", month,money);
    
    int r;
    double s;
    do{
        printf("半径は？:");
        scanf("%d",&r);
    } while (r < 0);
    s = r * r * 3.14;
    printf("面積は %f です。\n", s);   //円の面積の求め方。do-while文で入力チェックを行う
    
    return 0;
}
