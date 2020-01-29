//
//  function1.c
//  c-training2
//
//  Created by 奥田亮 on 2020/01/30.
//  Copyright © 2020 Nisi and Okuda. All rights reserved.
//

#include "function1.h"

void input_check() {
    printf("HelloWorld\n");
    int suuti;
    printf("数値を入力して下さい: ");
    scanf("%d", &suuti);
    if (suuti == 10) printf("入力値は10です。\n");  //比較を行う演算子
    if (suuti != 10) printf("入力値は10ではありません。\n");  //関係演算子
    if (suuti < 10) printf("入力値は10より小さいです。\n");
    if (suuti >= 10) printf("入力値は10以上です。\n");
    if (suuti >= 8 && suuti <= 12) printf("8〜12の間です。\n"); //論理演算子
    if (!(suuti >= 8 && suuti <= 12)) printf("8~12の間ではありません。\n"); //!をつけると判定結果を逆にする。　&&かつ  ||んまたは 　!否
    
    {if (suuti == 10)
    {
        printf("入力値は10です。\n");
    } else {
        printf("入力値は10ではありません。\n");
    }
    }   //if~else文
}
