print ("西氏")    //文字の出力　　""でくくる文字列
var a = 1        //変数の定義　var 変数名＝初期値    =は右辺を左辺に代入する
let b = 1.08     //定数の定義　let 定数名＝値　　定数は上書き出来ない
for c in 1...3 {
    print(3*c)
}                //繰り返し処理　３掛け算　範囲の指定は　整数...整数　　変数の定義はブロック内で有効
for d in 1...9{
    for e in 1...9{
        print(d*e)
    }
}                //for文の入れ子　九九の計算を行う
var battery = 15
print ("バッテリー残量は\(battery)％です")  //文字列補問　""の中に\で計算式を挿入出来る
print ( 1==1 )
print ( 1==2 )   //プール値の確認
var number:Int = 3
var pi:Double = 3.14  //変数の型の指定　整数:Int　少数:Double　文字列:String　ブール:Bool
if battery <= 20 {
    print("バッテリー残量が少ないです")
}               //if文の使い方　if 条件 {文}  条件は比較演算子で書く　（値）（比較演算子）（値）
//比較演算子の一覧 ==等しい !=等しくない　<より小さい <=以下 >より大きい >=以上
if battery <= 10 {
    print("バッテリー残量は10％以下です")
} else if battery <= 20 {
    print("バッテリー残量は20％以下です")
}     //if-else文　条件分岐の設定方法
switch a {
    case 0:
        print("０です")
    case 1:
        print("１です")
    default:
        print("わからない")
}     //switch文　if文より条件分岐が多い場合に有効　defaultの設定が必要不可欠
while a < 5 {
    print( a )
    a = a + 1
}     //while文　条件になるまで繰り返し処理
var improvement = ["ハゲ","貧乏","デブ"]
print(improvement[0]) //配列　要素の取り出し方
for task in improvement {
    print(task)
}       //配列の全要素の表示方法
var Tires = ["car":4,"bike":2,"ship":0]    //辞書と要素の関連方法
print (Tires["car"]!)     //辞書から要素の取り出し方
Tires["car"] = nil        //要素の削除の仕方
func kuku2(){
    for x in 1...9{
        print( 2*x )
    }
}       //関数の宣言　　func(関数名){   (文)     }
kuku2()      //関数の呼び出し
func kuku(dan:Int){
    for x in 1...9{
        print ( dan * x )
    }
}        //引数を使った関数の宣言　　　func 関数名(（引数名):(型)）{   (文)     }
kuku(dan:3)
func areaOfTriangle( withBase:Int,height:Int ) {
    print( withBase * height / 2 )
}
areaOfTriangle(withBase: 3, height: 4)   //複数の引数を引き受ける関数　三角形の面積の計算
areaOfTriangle(withBase: 6, height: 5)
