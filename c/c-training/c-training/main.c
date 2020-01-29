#include <stdio.h>  //疑似命令

int main(void)
{
    printf("HellowWorld\n");     //文字の出力方法、プリントエフ関数
    
    printf("Intel \t: Pentium4\n");
    printf("AMD  \t: Athlon64\n");  //エスケープシーケンス　改行の仕方　\tタブ揃え \n改行あ
    
    printf("%d", 100);  //出力変換指定子　%d　整数値に変換
    printf("円\n");   //整数値と文字列の組み合わせての表示
    printf("%d円\n", 100); //%d指定子を文字列に埋め込んで使う方法。
    printf("%d + %d = %d\n", 100,200,300); //連続して%d指定子を使用した場合前から順に後ろに対応する
    
    printf("%d\n", 100+200);  //計算させる方法
    printf("%f\n", 10.0 / 3.0);  //実数値での計算方法　%f　指定子　（小数点以下を記載しないとエラーとなる？
    printf("%d / %d = %d ....%d\n", 40,13,40/13,40%13); //式と余りを表現する方法
    
    int left;
    int right;   //変数の宣言の仕方　（整数ver
    left = 10;
    right = 3;  //変数に代入
    printf("%d\n", left + right);
    left += 10;
    printf("%d\n", left);  //宣言した変数に直接計算させる
    left++ ;
    printf("%d\n", left);  //インクリメント（++）とデクリメント(--)
    double hidari,migi;  //実数値の宣言の仕方
    hidari = 10;
    migi = 3;
    printf("%f\n", hidari / migi);  //実数値なので%dやなくて%fで計算してな
    printf("%f\n", 1.10 * 100);   //答えが実数でしか表示出来ず、%dで処理を行うとエラーとなる。
    printf("%d\n",(int)(1.10 * 100));   //キャスト変換の方法
    printf("Aは %5d です。\n", 1000);
    printf("Bは %5d です。\n", 10);   //桁数の揃え方。
    printf("Cは %05d です。\n", 1);  //先頭に0を表示させる
    printf("Dは %6.2f です。\n", 3.14159); //整数値と少数値の桁数指定。左記だと整数値6桁、少数値2桁
    int water,milk,goukei;
    water = 198;  milk = 138;
    goukei = water * 1 + milk * 2;
    printf("お釣りは %d 円です。\n",(int)(1000-1.05*goukei));
    
    int data;
    scanf("%d", &data);  //スキャンエフ関数　入力部分
    printf("%d 上で入力された数字\n", data); //出力部分
    double data2;
    scanf("%lf", &data2);    //実数値でのscanf関数の使用方法
    printf("%f 実数での入力\n", data2);
    int data3,data4;
    scanf("%d,%d", &data3,&data4);  //%d %dの間の記号を
    printf("%d , %d 2個同時入力\n", data3,data4); //連続してscanf関数を入力する方法
    int min,max,total;
    printf("最小値と最大値を , で区切ってく入力して下さい。:"); //入力部分
    scanf("%d , %d", &min , &max);
    total= (min + max) * (max - min + 1) / 2;   //計算部分
    printf("%d~%d の合計は %d です。\n", min,max,total);   //表示部分
    
    int teika,teika1,teika3,teika5,teika8;
    printf("定価を入力して下さい。:");
    scanf("%d", &teika);
    teika1 = teika * 0.9;
    teika3 = teika * 0.7;
    teika5 = teika * 0.5;
    teika8 = teika * 0.2;
    printf("1割引、3割引、5割引、8割引の値段は、%d,%d,%d,%d 円です。\n", teika1,teika3,teika5,teika8);
    
    return 0;
}
