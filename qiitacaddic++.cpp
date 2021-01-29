// 参考文献
// https://qiita.com/agate-pris/items/05948b7d33f3e88b8967
#include <iostream>
using namespace std;

// 値渡し
// デメリット:　初期化する引数のオブジェクトが大きいとき実行時間がかかる
void twice(int a){
    cout << a << endl;
    a *= 2;
    cout << a << endl;
}
int main(){
    int v = 16;
    cout << v << endl;
    twice(v);
    twice_pointer( &v );
    twice_call_by_reference(v);
    cout << v << endl;
}

// ポインタ渡し
// 変数のメモリ上のアドレスを渡すことで参照元の値を書き換えることができる
// nullが渡されると、予期しない動作のためプログラムがクラッシュする可能性がある
// nullチェックを追加すること
void twice_pointer( int* a){
    // if(!a){
    //     printf("null is passed. error!");
    //     return;
    // }
    cout << *a << endl;
    *a *= 2;
    cout << *a << endl;
}

// 参照渡し
// https://cpp-lang.sevendays-study.com/ex-day1.html
// ポインタ渡し：&v　というふうに場所を与える必要がある。
// 参照渡し：v と与えればそのままメモリ上の場所を渡してくれる
// 関数で参照渡しを表現したいなら &を関数の引数として用意する
void twice_call_by_reference( int& a ){
    cout << a << endl;
    a *= 2;
    cout << a << endl;
}
